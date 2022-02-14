
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;
struct ccu_common {int features; int lock; scalar_t__ reg; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clk_hw* FUNC_0 (struct clk*) ;
 struct ccu_common* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct clk *VAR_3, bool VAR_4)
{
 struct clk_hw *VAR_5 = FUNC_0(VAR_3);
 struct ccu_common *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7;
 u32 VAR_8;

 if (!(VAR_6->features & VAR_0))
  return -VAR_2;

 FUNC_3(VAR_6->lock, VAR_7);

 VAR_8 = FUNC_2(VAR_6->base + VAR_6->reg);
 if (VAR_4)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 FUNC_5(VAR_8, VAR_6->base + VAR_6->reg);

 FUNC_4(VAR_6->lock, VAR_7);

 return 0;
}
