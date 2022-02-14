
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {scalar_t__ reg_stride_order; unsigned int max_register; unsigned int* cache; int num_reg_defaults; TYPE_1__* reg_defaults; } ;
struct TYPE_2__ {unsigned int reg; unsigned int def; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int* FUNC_0 (unsigned int,int,int ) ;
 unsigned int FUNC_1 (struct regmap*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_3)
{
 int VAR_4;
 unsigned int *VAR_5;

 if (!VAR_3 || VAR_3->reg_stride_order < 0 || !VAR_3->max_register)
  return -VAR_0;

 VAR_3->cache = FUNC_0(FUNC_1(VAR_3, VAR_3->max_register)
        + 1, sizeof(unsigned int), VAR_2);
 if (!VAR_3->cache)
  return -VAR_1;

 VAR_5 = VAR_3->cache;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_reg_defaults; VAR_4++) {
  unsigned int VAR_6 = VAR_3->reg_defaults[VAR_4].reg;
  unsigned int VAR_7 = FUNC_1(VAR_3, VAR_6);

  VAR_5[VAR_7] = VAR_3->reg_defaults[VAR_4].def;
 }

 return 0;
}
