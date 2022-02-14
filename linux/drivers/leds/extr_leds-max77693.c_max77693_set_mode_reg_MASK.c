
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct max77693_led_device {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct max77693_led_device *VAR_6, u8 VAR_7)
{
 struct regmap *VAR_8 = VAR_6->regmap;
 int VAR_9, VAR_10 = 0, VAR_11;

 for (VAR_11 = VAR_3; VAR_11 <= VAR_4; ++VAR_11) {
  if (VAR_7 & FUNC_3(VAR_11))
   VAR_10 |= VAR_1 << FUNC_4(VAR_11);

  if (VAR_7 & FUNC_1(VAR_11)) {
   VAR_10 |= VAR_1 << FUNC_0(VAR_11);
  } else if (VAR_7 & FUNC_2(VAR_11)) {
   VAR_10 |= VAR_0 << FUNC_0(VAR_11);





   VAR_10 |= VAR_2 << FUNC_4(VAR_11);
  }
 }


 if (VAR_7 & ~(FUNC_3(VAR_3) | FUNC_3(VAR_4))) {
  VAR_9 = FUNC_5(VAR_8, VAR_5, 0);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return FUNC_5(VAR_8, VAR_5, VAR_10);
}
