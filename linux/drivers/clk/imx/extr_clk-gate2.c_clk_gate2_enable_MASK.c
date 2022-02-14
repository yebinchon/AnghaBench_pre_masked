
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_gate2 {int bit_idx; int cgr_val; int lock; int reg; int * share_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct clk_gate2* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0)
{
 struct clk_gate2 *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;
 unsigned long VAR_3 = 0;

 FUNC_1(VAR_1->lock, VAR_3);

 if (VAR_1->share_count && (*VAR_1->share_count)++ > 0)
  goto out;

 VAR_2 = FUNC_0(VAR_1->reg);
 VAR_2 &= ~(3 << VAR_1->bit_idx);
 VAR_2 |= VAR_1->cgr_val << VAR_1->bit_idx;
 FUNC_4(VAR_2, VAR_1->reg);

out:
 FUNC_2(VAR_1->lock, VAR_3);

 return 0;
}
