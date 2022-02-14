
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_sec_osc {int status_mask; int status_reg; int enable_reg; int enable_mask; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pic32_sec_osc* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0)
{
 struct pic32_sec_osc *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;


 FUNC_2();
 FUNC_4(VAR_1->enable_mask, FUNC_0(VAR_1->enable_reg));


 return FUNC_3(VAR_1->status_reg, VAR_2,
      VAR_2 & VAR_1->status_mask, 1, 100);
}
