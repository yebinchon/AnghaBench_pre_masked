
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hb_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hb_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct hb_clk *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_3, VAR_2->reg);
}
