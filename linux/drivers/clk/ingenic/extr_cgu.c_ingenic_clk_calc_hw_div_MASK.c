
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits; unsigned int* div_table; } ;
struct ingenic_cgu_clk_info {TYPE_1__ div; } ;



__attribute__((used)) static unsigned int
FUNC_0(const struct ingenic_cgu_clk_info *VAR_0,
   unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < (1 << VAR_0->div.bits)
    && VAR_0->div.div_table[VAR_2]; VAR_2++) {
  if (VAR_0->div.div_table[VAR_2] >= VAR_1)
   return VAR_2;
 }

 return VAR_2 - 1;
}
