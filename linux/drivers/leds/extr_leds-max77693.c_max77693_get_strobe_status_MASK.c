
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct max77693_led_device {struct regmap* regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct max77693_led_device *VAR_2,
     bool *VAR_3)
{
 struct regmap *VAR_4 = VAR_2->regmap;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_3 = VAR_5 & VAR_0;

 return VAR_6;
}
