
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hi6220_clk_divider {int shift; int mask; scalar_t__ lock; int reg; int width; int table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 struct hi6220_clk_divider* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1, unsigned long VAR_2,
     unsigned long VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = 0;
 u32 VAR_6;
 struct hi6220_clk_divider *VAR_7 = FUNC_5(VAR_1);

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_7->table,
    VAR_7->width, VAR_0);

 if (VAR_7->lock)
  FUNC_3(VAR_7->lock, VAR_5);

 VAR_6 = FUNC_2(VAR_7->reg);
 VAR_6 &= ~(FUNC_0(VAR_7->width) << VAR_7->shift);
 VAR_6 |= VAR_4 << VAR_7->shift;
 VAR_6 |= VAR_7->mask;

 FUNC_6(VAR_6, VAR_7->reg);

 if (VAR_7->lock)
  FUNC_4(VAR_7->lock, VAR_5);

 return 0;
}
