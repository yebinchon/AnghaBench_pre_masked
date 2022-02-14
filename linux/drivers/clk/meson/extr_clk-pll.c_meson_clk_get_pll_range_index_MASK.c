
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int width; } ;
struct TYPE_4__ {int width; } ;
struct meson_clk_pll_data {TYPE_3__ m; TYPE_2__* range; TYPE_1__ n; } ;
struct TYPE_5__ {unsigned long min; unsigned long max; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned long,unsigned long,unsigned int,struct meson_clk_pll_data*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2,
      unsigned long VAR_3,
      unsigned int VAR_4,
      unsigned int *VAR_5,
      unsigned int *VAR_6,
      struct meson_clk_pll_data *VAR_7)
{
 *VAR_6 = VAR_4 + 1;


 if (*VAR_6 >= (1 << VAR_7->n.width))
  return -VAR_0;

 if (*VAR_6 == 1) {

  if (VAR_2 <= VAR_7->range->min * VAR_3) {
   *VAR_5 = VAR_7->range->min;
   return -VAR_1;
  } else if (VAR_2 >= VAR_7->range->max * VAR_3) {
   *VAR_5 = VAR_7->range->max;
   return -VAR_1;
  }
 }

 *VAR_5 = FUNC_0(VAR_2, VAR_3, *VAR_6, VAR_7);


 if (*VAR_5 >= (1 << VAR_7->m.width))
  return -VAR_0;

 return 0;
}
