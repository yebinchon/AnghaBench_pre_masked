
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pic32_periph_clk {int ctrl_reg; TYPE_1__* core; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int reg_lock; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pic32_periph_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct pic32_periph_clk*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_4, unsigned long VAR_5,
     unsigned long VAR_6)
{
 struct pic32_periph_clk *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_5(VAR_7->ctrl_reg, VAR_9, VAR_9 & VAR_3,
     1, VAR_1);
 if (VAR_11)
  return VAR_11;


 VAR_10 = FUNC_0(VAR_6, VAR_5);

 FUNC_6(&VAR_7->core->reg_lock, VAR_8);


 VAR_9 = FUNC_4(VAR_7->ctrl_reg);
 VAR_9 &= ~VAR_2;
 VAR_9 |= (VAR_10 - 1);

 FUNC_3();

 FUNC_8(VAR_9, VAR_7->ctrl_reg);

 FUNC_7(&VAR_7->core->reg_lock, VAR_8);


 VAR_11 = FUNC_5(VAR_7->ctrl_reg, VAR_9, VAR_9 & VAR_3,
     1, VAR_1);
 if (VAR_11)
  return VAR_11;


 return (FUNC_2(VAR_7) == VAR_10) ? 0 : -VAR_0;
}
