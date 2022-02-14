
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_zx_pll {TYPE_1__* lookup_table; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_zx_pll*) ;
 struct clk_zx_pll* FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct clk_zx_pll *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_2(VAR_4 == -VAR_0))
  return 0;

 return VAR_3->lookup_table[VAR_4].rate;
}
