
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_dyn_rcg {int mux_sel_bit; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct clk_dyn_rcg *VAR_0, u32 VAR_1)
{
 VAR_1 &= FUNC_0(VAR_0->mux_sel_bit);
 return !!VAR_1;
}
