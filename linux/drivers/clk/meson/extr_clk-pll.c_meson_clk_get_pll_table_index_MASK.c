
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_clk_pll_data {TYPE_1__* table; } ;
struct TYPE_2__ {unsigned int n; unsigned int m; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1,
      unsigned int *VAR_2,
      unsigned int *VAR_3,
      struct meson_clk_pll_data *VAR_4)
{
 if (!VAR_4->table[VAR_1].n)
  return -VAR_0;

 *VAR_2 = VAR_4->table[VAR_1].m;
 *VAR_3 = VAR_4->table[VAR_1].n;

 return 0;
}
