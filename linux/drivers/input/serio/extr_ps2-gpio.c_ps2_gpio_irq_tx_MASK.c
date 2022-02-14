
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2_gpio_data {unsigned char tx_cnt; unsigned char tx_byte; int serio; int gpio_data; int dev; int tx_done; int mode; } ;
typedef int irqreturn_t ;


 unsigned char FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (int ,unsigned char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (unsigned char) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(struct ps2_gpio_data *VAR_3)
{
 unsigned char VAR_4, VAR_5;
 int VAR_6;
 static unsigned long VAR_7;

 VAR_5 = VAR_3->tx_cnt;
 VAR_4 = VAR_3->tx_byte;

 if (VAR_7 == 0)
  VAR_7 = VAR_2;

 if ((VAR_2 - VAR_7) > FUNC_9(100)) {
  FUNC_3(VAR_3->dev,
   "TX: timeout, probably we missed an interrupt\n");
  goto err;
 }
 VAR_7 = VAR_2;

 switch (VAR_5) {
 case 130:

  FUNC_3(VAR_3->dev,
   "TX: start bit should have been sent already\n");
  goto err;
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_6 = VAR_4 & FUNC_0(VAR_5 - 1);
  FUNC_7(VAR_3->gpio_data, VAR_6);
  break;
 case 131:

  VAR_6 = !(FUNC_8(VAR_4) & 1);
  FUNC_7(VAR_3->gpio_data, VAR_6);
  break;
 case 129:

  FUNC_5(VAR_3->gpio_data);
  break;
 case 128:



  break;
 case 140:
  FUNC_5(VAR_3->gpio_data);
  VAR_6 = FUNC_6(VAR_3->gpio_data);
  if (VAR_6) {
   FUNC_4(VAR_3->dev, "TX: received NACK, retry\n");
   goto err;
  }

  VAR_3->mode = VAR_1;
  FUNC_2(&VAR_3->tx_done);

  VAR_5 = 1;
  VAR_7 = 0;
  goto end;
 default:



  FUNC_5(VAR_3->gpio_data);
  FUNC_3(VAR_3->dev, "TX: got out of sync with the device\n");
  goto err;
 }

 VAR_5++;
 goto end;

err:
 VAR_5 = 1;
 VAR_7 = 0;
 FUNC_5(VAR_3->gpio_data);
 FUNC_1(VAR_3->serio, VAR_3->tx_byte);
end:
 VAR_3->tx_cnt = VAR_5;
 return VAR_0;
}
