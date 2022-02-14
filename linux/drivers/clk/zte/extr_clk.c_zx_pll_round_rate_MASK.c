
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_zx_pll {TYPE_1__* lookup_table; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {long rate; } ;


 int FUNC_0 (struct clk_zx_pll*,unsigned long) ;
 struct clk_zx_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
         unsigned long *VAR_2)
{
 struct clk_zx_pll *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);

 return VAR_3->lookup_table[VAR_4].rate;
}
