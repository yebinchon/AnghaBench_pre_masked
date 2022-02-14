
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct blinkm_data {int blue; int green; int red; } ;
typedef int ssize_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (struct i2c_client*,int ) ;
 struct blinkm_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3, char *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6;
 struct blinkm_data *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_1(VAR_6);

 VAR_8 = FUNC_0(VAR_6, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;
 switch (VAR_5) {
 case 128:
  return FUNC_2(VAR_4, VAR_2, "%02X\n", VAR_7->red);
 case 129:
  return FUNC_2(VAR_4, VAR_2, "%02X\n", VAR_7->green);
 case 130:
  return FUNC_2(VAR_4, VAR_2, "%02X\n", VAR_7->blue);
 default:
  return -VAR_1;
 }
 return -VAR_1;
}
