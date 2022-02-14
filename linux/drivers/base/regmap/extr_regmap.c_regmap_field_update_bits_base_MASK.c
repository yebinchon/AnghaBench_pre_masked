
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {unsigned int shift; unsigned int mask; int reg; int regmap; } ;


 int FUNC_0 (int ,int ,unsigned int,unsigned int,int*,int,int) ;

int FUNC_1(struct regmap_field *VAR_0,
      unsigned int VAR_1, unsigned int VAR_2,
      bool *VAR_3, bool VAR_4, bool VAR_5)
{
 VAR_1 = (VAR_1 << VAR_0->shift) & VAR_0->mask;

 return FUNC_0(VAR_0->regmap, VAR_0->reg,
           VAR_1, VAR_2 << VAR_0->shift,
           VAR_3, VAR_4, VAR_5);
}
