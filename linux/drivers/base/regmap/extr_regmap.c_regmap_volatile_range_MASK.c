
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (struct regmap*,unsigned int) ;
 int FUNC_1 (struct regmap*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct regmap *VAR_0, unsigned int VAR_1,
 size_t VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (!FUNC_1(VAR_0, VAR_1 + FUNC_0(VAR_0, VAR_3)))
   return 0;

 return 1;
}
