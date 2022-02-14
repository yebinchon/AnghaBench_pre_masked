
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef enum mma9551_gpio_pin { ____Placeholder_mma9551_gpio_pin } mma9551_gpio_pin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;




 int VAR_4 ;
 int FUNC_1 (struct i2c_client*,int ,int,int,int) ;
 int FUNC_2 (struct i2c_client*,int ,int,int) ;

int FUNC_3(struct i2c_client *VAR_5, enum mma9551_gpio_pin VAR_6,
   u8 VAR_7, u8 VAR_8, int VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (VAR_6 > VAR_4) {
  FUNC_0(&VAR_5->dev, "bad GPIO pin\n");
  return -VAR_0;
 }





 VAR_10 = VAR_6 * 2;

 VAR_13 = FUNC_2(VAR_5, VAR_1,
     VAR_10, VAR_7);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_5->dev, "error setting GPIO app_id\n");
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_5, VAR_1,
     VAR_10 + 1, VAR_8);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_5->dev, "error setting GPIO bit number\n");
  return VAR_13;
 }

 switch (VAR_6) {
 case 131:
  VAR_10 = VAR_2;
  VAR_11 = 1 << 6;
  break;
 case 130:
  VAR_10 = VAR_2;
  VAR_11 = 1 << 7;
  break;
 case 129:
  VAR_10 = VAR_3;
  VAR_11 = 1 << 0;
  break;
 case 128:
  VAR_10 = VAR_3;
  VAR_11 = 1 << 1;
  break;
 }
 VAR_12 = VAR_9 ? VAR_11 : 0;

 VAR_13 = FUNC_1(VAR_5, VAR_1, VAR_10,
      VAR_11, VAR_12);
 if (VAR_13 < 0)
  FUNC_0(&VAR_5->dev, "error setting GPIO polarity\n");

 return VAR_13;
}
