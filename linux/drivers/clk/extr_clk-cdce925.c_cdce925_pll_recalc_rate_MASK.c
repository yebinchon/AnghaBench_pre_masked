
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_cdce925_pll {int m; int n; } ;


 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 struct clk_cdce925_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{

 struct clk_cdce925_pll *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, VAR_2->n, VAR_2->m);
}
