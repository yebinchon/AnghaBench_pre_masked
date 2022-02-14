
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_sys_clk {int slew_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pic32_sys_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_2, unsigned long VAR_3)
{
 struct pic32_sys_clk *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 VAR_5 = (FUNC_1(VAR_4->slew_reg) >> VAR_1) & VAR_0;
 VAR_5 += 1;

 return VAR_3 / VAR_5;
}
