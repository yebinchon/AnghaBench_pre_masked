
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct stm32f7_i2c_msg {int size; size_t* smbus_buf; } ;
struct stm32f7_i2c_dev {int dev; scalar_t__ base; struct stm32f7_i2c_msg f7_msg; } ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 size_t FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stm32f7_i2c_dev *VAR_3)
{
 struct stm32f7_i2c_msg *VAR_4 = &VAR_3->f7_msg;
 u8 VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3->base + VAR_2);

 switch (VAR_4->size) {
 case 131:
 case 130:
  VAR_7 = VAR_4->smbus_buf[1];
  break;
 case 128:
 case 129:
  VAR_7 = VAR_4->smbus_buf[2];
  break;
 case 133:
 case 132:
  VAR_5 = VAR_4->smbus_buf[0];
  VAR_7 = VAR_4->smbus_buf[VAR_5];
  break;
 default:
  FUNC_0(VAR_3->dev, "Unsupported smbus protocol for PEC\n");
  return -VAR_1;
 }

 if (VAR_6 != VAR_7) {
  FUNC_0(VAR_3->dev, "Bad PEC 0x%02x vs. 0x%02x\n",
   VAR_6, VAR_7);
  return -VAR_0;
 }

 return 0;
}
