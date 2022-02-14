
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct owl_mux {int mux_hw; int common; } ;
struct clk_hw {int dummy; } ;


 struct owl_mux* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct owl_mux *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->common, &VAR_1->mux_hw);
}
