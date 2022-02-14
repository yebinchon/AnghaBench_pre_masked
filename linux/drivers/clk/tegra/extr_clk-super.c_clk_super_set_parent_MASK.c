
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct tegra_clk_super_mux {int flags; scalar_t__ div2_index; scalar_t__ pllx_index; scalar_t__ lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct tegra_clk_super_mux*) ;
 scalar_t__ FUNC_7 (struct tegra_clk_super_mux*,int ) ;
 struct tegra_clk_super_mux* FUNC_8 (struct clk_hw*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct clk_hw *VAR_6, u8 VAR_7)
{
 struct tegra_clk_super_mux *VAR_8 = FUNC_8(VAR_6);
 u32 VAR_9, VAR_10;
 int VAR_11 = 0;
 u8 VAR_12, VAR_13;
 unsigned long VAR_14 = 0;

 if (VAR_8->lock)
  FUNC_3(VAR_8->lock, VAR_14);

 VAR_9 = FUNC_2(VAR_8->reg);
 VAR_10 = VAR_9 & VAR_3;
 FUNC_0((VAR_10 != FUNC_5(VAR_4)) &&
        (VAR_10 != FUNC_5(VAR_2)));
 VAR_13 = (VAR_10 == FUNC_5(VAR_2)) ?
  FUNC_7(VAR_8, VAR_2) :
  FUNC_7(VAR_8, VAR_4);






 if ((VAR_8->flags & VAR_5) && ((VAR_7 == VAR_8->div2_index) ||
            (VAR_7 == VAR_8->pllx_index))) {
  VAR_12 = FUNC_1(VAR_6);
  if ((VAR_12 == VAR_8->div2_index) ||
      (VAR_12 == VAR_8->pllx_index)) {
   VAR_11 = -VAR_0;
   goto out;
  }

  VAR_9 ^= VAR_1;
  FUNC_10(VAR_9, VAR_8->reg);
  FUNC_9(2);

  if (VAR_7 == VAR_8->div2_index)
   VAR_7 = VAR_8->pllx_index;
 }
 VAR_9 &= ~((FUNC_6(VAR_8)) << VAR_13);
 VAR_9 |= (VAR_7 & (FUNC_6(VAR_8))) << VAR_13;

 FUNC_10(VAR_9, VAR_8->reg);
 FUNC_9(2);

out:
 if (VAR_8->lock)
  FUNC_4(VAR_8->lock, VAR_14);

 return VAR_11;
}
