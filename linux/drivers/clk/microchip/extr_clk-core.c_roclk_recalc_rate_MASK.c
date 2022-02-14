
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_ref_osc {scalar_t__ ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pic32_ref_osc* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (unsigned long,int,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_5,
           unsigned long VAR_6)
{
 struct pic32_ref_osc *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8, VAR_9, VAR_10;


 VAR_8 = FUNC_1(VAR_7->ctrl_reg);
 VAR_9 = (VAR_8 >> VAR_1) & VAR_0;


 VAR_8 = FUNC_1(VAR_7->ctrl_reg + VAR_3);
 VAR_10 = (VAR_8 >> VAR_4) & VAR_2;

 return FUNC_2(VAR_6, VAR_9, VAR_10);
}
