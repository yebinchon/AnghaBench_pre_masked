
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29028_chip {int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct isl29028_chip *VAR_0, bool VAR_1)
{
 struct device *VAR_2 = FUNC_4(VAR_0->regmap);
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 < 0)
   FUNC_3(VAR_2);
 } else {
  FUNC_1(VAR_2);
  VAR_3 = FUNC_2(VAR_2);
 }

 return VAR_3;
}
