
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct krait_mux_clk {int shift; int mask; int en_mask; int parent_map; int offset; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,int ,int ,int) ;
 int FUNC_1 (int ) ;
 struct krait_mux_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct krait_mux_clk *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->offset);
 VAR_2 >>= VAR_1->shift;
 VAR_2 &= VAR_1->mask;
 VAR_1->en_mask = VAR_2;

 return FUNC_0(VAR_0, VAR_1->parent_map, 0, VAR_2);
}
