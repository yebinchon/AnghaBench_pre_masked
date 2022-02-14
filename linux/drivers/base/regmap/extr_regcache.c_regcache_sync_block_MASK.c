
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int use_single_write; } ;


 int FUNC_0 (struct regmap*,void*,unsigned long*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct regmap*,void*,unsigned long*,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct regmap*) ;

int FUNC_3(struct regmap *VAR_0, void *VAR_1,
   unsigned long *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   unsigned int VAR_5)
{
 if (FUNC_2(VAR_0) && !VAR_0->use_single_write)
  return FUNC_0(VAR_0, VAR_1, VAR_2,
            VAR_3, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2,
        VAR_3, VAR_4, VAR_5);
}
