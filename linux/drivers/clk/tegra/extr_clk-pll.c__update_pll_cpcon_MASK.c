
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll_freq_table {int cpcon; scalar_t__ n; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {int flags; int vco_max; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tegra_clk_pll*) ;
 int FUNC_1 (int,struct tegra_clk_pll*) ;

__attribute__((used)) static void FUNC_2(struct tegra_clk_pll *VAR_8,
         struct tegra_clk_pll_freq_table *VAR_9,
         unsigned long VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_8);

 VAR_11 &= ~(VAR_1 << VAR_2);
 VAR_11 |= VAR_9->cpcon << VAR_2;

 if (VAR_8->params->flags & VAR_7) {
  VAR_11 &= ~(VAR_4 << VAR_5);
  if (VAR_9->n >= VAR_0)
   VAR_11 |= 1 << VAR_5;
 } else if (VAR_8->params->flags & VAR_6) {
  VAR_11 &= ~(1 << VAR_3);
  if (VAR_10 >= (VAR_8->params->vco_max >> 1))
   VAR_11 |= 1 << VAR_3;
 }

 FUNC_1(VAR_11, VAR_8);
}
