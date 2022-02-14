
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct blinkm_data {void* next_blue; void* next_green; void* next_red; } ;


 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct device*,char*,void*,void*,void*) ;
 int FUNC_2 (struct device*,char*) ;
 struct blinkm_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (char const*,int,void**) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, const char *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5;
 struct blinkm_data *VAR_6;
 int VAR_7;
 u8 VAR_8;

 VAR_5 = FUNC_5(VAR_2);
 VAR_6 = FUNC_3(VAR_5);

 VAR_7 = FUNC_4(VAR_3, 10, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_2(VAR_2, "BlinkM: value too large!\n");
  return VAR_7;
 }

 switch (VAR_4) {
 case 128:
  VAR_6->next_red = VAR_8;
  break;
 case 129:
  VAR_6->next_green = VAR_8;
  break;
 case 130:
  VAR_6->next_blue = VAR_8;
  break;
 default:
  return -VAR_1;
 }

 FUNC_1(VAR_2, "next_red = %d, next_green = %d, next_blue = %d\n",
   VAR_6->next_red, VAR_6->next_green, VAR_6->next_blue);


 VAR_7 = FUNC_0(VAR_5, VAR_0);
 if (VAR_7 < 0) {
  FUNC_2(VAR_2, "BlinkM: can't set RGB\n");
  return VAR_7;
 }
 return 0;
}
