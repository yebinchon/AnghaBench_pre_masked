
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2_gpio_data {unsigned char rx_byte; unsigned char rx_cnt; int serio; int dev; int write_enable; int gpio_data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned char) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char) ;
 unsigned long VAR_5 ;
 int FUNC_6 (int ,unsigned char,int) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned long FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct ps2_gpio_data *VAR_6)
{
 unsigned char VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 static unsigned long VAR_11;

 VAR_7 = VAR_6->rx_byte;
 VAR_8 = VAR_6->rx_cnt;

 if (VAR_11 == 0)
  VAR_11 = VAR_5;

 if ((VAR_5 - VAR_11) > FUNC_8(100)) {
  FUNC_2(VAR_6->dev,
   "RX: timeout, probably we missed an interrupt\n");
  goto err;
 }
 VAR_11 = VAR_5;

 VAR_9 = FUNC_4(VAR_6->gpio_data);
 if (FUNC_7(VAR_9 < 0)) {
  FUNC_2(VAR_6->dev, "RX: failed to get data gpio val: %d\n",
   VAR_9);
  goto err;
 }

 switch (VAR_8) {
 case 129:

  if (FUNC_7(VAR_9)) {
   FUNC_2(VAR_6->dev, "RX: start bit should be low\n");
   goto err;
  }
  break;
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:

  if (VAR_9)
   VAR_7 |= (VAR_9 << (VAR_8 - 1));
  break;
 case 130:

  if (!((FUNC_5(VAR_7) & 1) ^ VAR_9)) {
   VAR_10 |= VAR_4;
   FUNC_3(VAR_6->dev, "RX: parity error\n");
   if (!VAR_6->write_enable)
    goto err;
  }




  if (!VAR_6->write_enable) {
   if (VAR_7 == VAR_3)
    goto err;
   else if (VAR_7 == VAR_2)
    break;
  }







  FUNC_6(VAR_6->serio, VAR_7, VAR_10);
  FUNC_1(VAR_6->dev, "RX: sending byte 0x%x\n", VAR_7);
  break;
 case 128:

  if (FUNC_7(!VAR_9)) {
   FUNC_2(VAR_6->dev, "RX: stop bit should be high\n");
   goto err;
  }
  VAR_8 = VAR_7 = 0;
  VAR_11 = 0;
  goto end;
 default:
  FUNC_2(VAR_6->dev, "RX: got out of sync with the device\n");
  goto err;
 }

 VAR_8++;
 goto end;

err:
 VAR_8 = VAR_7 = 0;
 VAR_11 = 0;
 FUNC_0(VAR_6->serio, VAR_1);
end:
 VAR_6->rx_cnt = VAR_8;
 VAR_6->rx_byte = VAR_7;
 return VAR_0;
}
