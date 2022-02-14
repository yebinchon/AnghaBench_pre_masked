
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct max77693_led_device {int current_flash_timeout; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct max77693_led_device *VAR_2, u32 VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 u8 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3) | VAR_0;

 VAR_6 = FUNC_1(VAR_4, VAR_1, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_2->current_flash_timeout = VAR_3;

 return 0;
}
