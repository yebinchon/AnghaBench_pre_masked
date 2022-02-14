
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_range {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int,struct regmap_range const*) ;

bool FUNC_1(unsigned int VAR_0,
     const struct regmap_range *VAR_1,
     unsigned int VAR_2)
{
 const struct regmap_range *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_3++)
  if (FUNC_0(VAR_0, VAR_3))
   return 1;
 return 0;
}
