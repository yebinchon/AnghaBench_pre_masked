
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct krait_mux_clk {int reparent; int en_mask; int parent_map; } ;
struct clk_hw {int clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct krait_mux_clk*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct krait_mux_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct krait_mux_clk *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_2->parent_map, 0, VAR_1);
 VAR_2->en_mask = VAR_3;

 if (FUNC_0(VAR_0->clk))
  FUNC_1(VAR_2, VAR_3);

 VAR_2->reparent = 1;

 return 0;
}
