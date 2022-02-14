
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {unsigned int id_size; unsigned int shift; unsigned int mask; unsigned int id_offset; scalar_t__ reg; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,unsigned int,int*,int,int) ;

int FUNC_1(struct regmap_field *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       bool *VAR_5, bool VAR_6, bool VAR_7)
{
 if (VAR_2 >= VAR_1->id_size)
  return -VAR_0;

 VAR_3 = (VAR_3 << VAR_1->shift) & VAR_1->mask;

 return FUNC_0(VAR_1->regmap,
           VAR_1->reg + (VAR_1->id_offset * VAR_2),
           VAR_3, VAR_4 << VAR_1->shift,
           VAR_5, VAR_6, VAR_7);
}
