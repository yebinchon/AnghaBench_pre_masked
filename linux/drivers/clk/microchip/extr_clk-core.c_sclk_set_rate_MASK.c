
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_sys_clk {TYPE_1__* core; int slew_reg; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pic32_sys_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_4,
    unsigned long VAR_5, unsigned long VAR_6)
{
 struct pic32_sys_clk *VAR_7 = FUNC_0(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = VAR_6 / VAR_5;

 FUNC_4(&VAR_7->core->reg_lock, VAR_8);


 VAR_9 = FUNC_2(VAR_7->slew_reg);
 VAR_9 &= ~(VAR_2 << VAR_3);
 VAR_9 |= (VAR_10 - 1) << VAR_3;

 FUNC_1();

 FUNC_6(VAR_9, VAR_7->slew_reg);


 VAR_11 = FUNC_3(VAR_7->slew_reg, VAR_9,
     !(VAR_9 & VAR_1), 1, VAR_0);

 FUNC_5(&VAR_7->core->reg_lock, VAR_8);

 return VAR_11;
}
