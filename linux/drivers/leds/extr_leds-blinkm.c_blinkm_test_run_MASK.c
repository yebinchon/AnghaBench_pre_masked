
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct blinkm_data {int next_red; int next_green; int next_blue; int next_hue; int next_saturation; int next_brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct blinkm_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3)
{
 int VAR_4;
 struct blinkm_data *VAR_5 = FUNC_1(VAR_3);

 VAR_5->next_red = 0x01;
 VAR_5->next_green = 0x05;
 VAR_5->next_blue = 0x10;
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(2000);

 VAR_5->next_red = 0x25;
 VAR_5->next_green = 0x10;
 VAR_5->next_blue = 0x31;
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(2000);

 VAR_5->next_hue = 0x50;
 VAR_5->next_saturation = 0x10;
 VAR_5->next_brightness = 0x20;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(2000);

 return 0;
}
