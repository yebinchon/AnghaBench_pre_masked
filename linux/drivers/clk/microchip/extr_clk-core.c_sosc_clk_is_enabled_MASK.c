
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_sec_osc {int enable_mask; int status_mask; int status_reg; int enable_reg; } ;
struct clk_hw {int dummy; } ;


 struct pic32_sec_osc* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct pic32_sec_osc *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2, VAR_3;


 VAR_2 = FUNC_1(VAR_1->enable_reg) & VAR_1->enable_mask;
 VAR_3 = FUNC_1(VAR_1->status_reg) & VAR_1->status_mask;

 return VAR_2 && VAR_3;
}
