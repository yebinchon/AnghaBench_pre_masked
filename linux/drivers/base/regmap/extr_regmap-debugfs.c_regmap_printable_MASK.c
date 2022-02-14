
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int FUNC_0 (struct regmap*,unsigned int) ;
 scalar_t__ FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct regmap *VAR_0, unsigned int VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1))
  return 0;

 if (!FUNC_2(VAR_0, VAR_1) && !FUNC_0(VAR_0, VAR_1))
  return 0;

 return 1;
}
