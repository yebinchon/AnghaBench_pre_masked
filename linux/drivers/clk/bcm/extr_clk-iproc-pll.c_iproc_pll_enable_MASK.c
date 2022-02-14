
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_pll {int dummy; } ;
struct iproc_clk {struct iproc_pll* pll; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct iproc_pll*) ;
 struct iproc_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct iproc_clk *VAR_1 = FUNC_1(VAR_0);
 struct iproc_pll *VAR_2 = VAR_1->pll;

 return FUNC_0(VAR_2);
}
