
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_sys_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct pic32_sys_pll* FUNC_0 (struct clk_hw*) ;
 long FUNC_1 (struct pic32_sys_pll*,unsigned long,unsigned long,int *,int *) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct pic32_sys_pll *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, VAR_1, *VAR_2, ((void*)0), ((void*)0));
}
