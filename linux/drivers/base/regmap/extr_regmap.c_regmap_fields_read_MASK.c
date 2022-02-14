
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {unsigned int id_size; unsigned int id_offset; unsigned int mask; unsigned int shift; scalar_t__ reg; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

int FUNC_1(struct regmap_field *VAR_1, unsigned int VAR_2,
         unsigned int *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 if (VAR_2 >= VAR_1->id_size)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->regmap,
     VAR_1->reg + (VAR_1->id_offset * VAR_2),
     &VAR_5);
 if (VAR_4 != 0)
  return VAR_4;

 VAR_5 &= VAR_1->mask;
 VAR_5 >>= VAR_1->shift;
 *VAR_3 = VAR_5;

 return VAR_4;
}
