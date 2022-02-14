
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_frac_div {int shift; int flags; scalar_t__ lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_clk_frac_div*) ;
 int FUNC_1 (struct tegra_clk_frac_div*,unsigned long,unsigned long) ;
 int FUNC_2 (struct tegra_clk_frac_div*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct tegra_clk_frac_div* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5)
{
 struct tegra_clk_frac_div *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;
 unsigned long VAR_8 = 0;
 u32 VAR_9;

 VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->lock)
  FUNC_4(VAR_6->lock, VAR_8);

 VAR_9 = FUNC_3(VAR_6->reg);
 VAR_9 &= ~(FUNC_0(VAR_6) << VAR_6->shift);
 VAR_9 |= VAR_7 << VAR_6->shift;

 if (VAR_6->flags & VAR_2) {
  if (VAR_7)
   VAR_9 |= VAR_0;
  else
   VAR_9 &= ~VAR_0;
 }

 if (VAR_6->flags & VAR_1)
  VAR_9 |= FUNC_2(VAR_6);

 FUNC_7(VAR_9, VAR_6->reg);

 if (VAR_6->lock)
  FUNC_5(VAR_6->lock, VAR_8);

 return 0;
}
