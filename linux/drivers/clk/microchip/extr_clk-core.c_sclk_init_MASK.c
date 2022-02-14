
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_sys_clk {int slew_div; TYPE_1__* core; int slew_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pic32_sys_clk* FUNC_0 (struct clk_hw*) ;
 struct clk_hw* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_5)
{
 struct pic32_sys_clk *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7;
 u32 VAR_8;


 VAR_4 = VAR_5;


 if (VAR_6->slew_div) {
  FUNC_2(&VAR_6->core->reg_lock, VAR_7);
  VAR_8 = FUNC_1(VAR_6->slew_reg);
  VAR_8 &= ~(VAR_0 << VAR_1);
  VAR_8 |= VAR_6->slew_div << VAR_1;
  VAR_8 |= VAR_2 | VAR_3;
  FUNC_4(VAR_8, VAR_6->slew_reg);
  FUNC_3(&VAR_6->core->reg_lock, VAR_7);
 }
}
