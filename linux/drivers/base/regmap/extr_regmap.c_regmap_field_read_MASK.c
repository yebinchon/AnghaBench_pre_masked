
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {unsigned int mask; unsigned int shift; int reg; int regmap; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;

int FUNC_1(struct regmap_field *VAR_0, unsigned int *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;
 VAR_2 = FUNC_0(VAR_0->regmap, VAR_0->reg, &VAR_3);
 if (VAR_2 != 0)
  return VAR_2;

 VAR_3 &= VAR_0->mask;
 VAR_3 >>= VAR_0->shift;
 *VAR_1 = VAR_3;

 return VAR_2;
}
