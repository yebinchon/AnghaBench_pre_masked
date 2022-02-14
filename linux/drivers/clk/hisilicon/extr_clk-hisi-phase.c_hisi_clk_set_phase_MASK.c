
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_hisi_phase {int mask; int shift; int lock; int reg; } ;


 int FUNC_0 (struct clk_hisi_phase*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct clk_hisi_phase* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_0, int VAR_1)
{
 struct clk_hisi_phase *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3 = 0;
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_2->lock, VAR_3);

 VAR_5 = FUNC_1(VAR_2->reg);
 VAR_5 &= ~VAR_2->mask;
 VAR_5 |= VAR_4 << VAR_2->shift;
 FUNC_5(VAR_5, VAR_2->reg);

 FUNC_3(VAR_2->lock, VAR_3);

 return 0;
}
