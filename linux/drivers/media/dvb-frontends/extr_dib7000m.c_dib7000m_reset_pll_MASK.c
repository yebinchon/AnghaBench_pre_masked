
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dibx000_bandwidth_config {int pll_bypass; int modulo; int ADClkSrc; int IO_CLK_en_core; int bypclk_div; int enable_refdiv; int pll_ratio; int pll_range; int pll_reset; int pll_prediv; } ;
struct TYPE_2__ {scalar_t__ input_clk_is_div_2; int quartz_direct; struct dibx000_bandwidth_config* bw; } ;
struct dib7000m_state {TYPE_1__ cfg; } ;


 int FUNC_0 (struct dib7000m_state*,struct dibx000_bandwidth_config const*) ;
 int FUNC_1 (struct dib7000m_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000m_state *VAR_0)
{
 const struct dibx000_bandwidth_config *VAR_1 = VAR_0->cfg.bw;
 u16 VAR_2,VAR_3;


 VAR_2 = (VAR_1->pll_bypass << 15) | (VAR_1->modulo << 7) |
  (VAR_1->ADClkSrc << 6) | (VAR_1->IO_CLK_en_core << 5) | (VAR_1->bypclk_div << 2) |
  (VAR_1->enable_refdiv << 1) | (0 << 0);
 VAR_3 = (((VAR_1->pll_ratio >> 6) & 0x3) << 3) | (VAR_1->pll_range << 1) | VAR_1->pll_reset;



 if (!VAR_0->cfg.quartz_direct) {
  VAR_3 |= (1 << 5);


  if(VAR_0->cfg.input_clk_is_div_2)
   VAR_2 |= (16 << 9);
  else
   VAR_2 |= (8 << 9);
 } else {
  VAR_2 |= (VAR_1->pll_ratio & 0x3f) << 9;
  VAR_3 |= (VAR_1->pll_prediv << 5);
 }

 FUNC_1(VAR_0, 910, VAR_3);
 FUNC_1(VAR_0, 907, VAR_2);
 FUNC_1(VAR_0, 908, 0x0006);

 FUNC_0(VAR_0, VAR_1);
}
