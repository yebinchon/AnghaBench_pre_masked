
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ads1015_data {int regmap; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ads1015_data *VAR_0, bool VAR_1)
{
 int VAR_2;
 struct device *VAR_3 = FUNC_4(VAR_0->regmap);

 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_3);
  if (VAR_2 < 0)
   FUNC_3(VAR_3);
 } else {
  FUNC_1(VAR_3);
  VAR_2 = FUNC_2(VAR_3);
 }

 return VAR_2 < 0 ? VAR_2 : 0;
}
