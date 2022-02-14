
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; int IO_CLK_en_core; int bypclk_div; int enable_refdiv; int pll_range; int pll_reset; int pll_bypass; scalar_t__ ADClkSrc; int modulo; } ;
struct TYPE_2__ {int refclksel; struct dibx000_bandwidth_config* pll; } ;
struct dib8000_state {int revision; TYPE_1__ cfg; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,struct dibx000_bandwidth_config const*) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct dib8000_state *VAR_0)
{
 const struct dibx000_bandwidth_config *VAR_1 = VAR_0->cfg.pll;
 u16 VAR_2, VAR_3;

 if (VAR_0->revision != 0x8090) {
  FUNC_2(VAR_0, 901,
    (VAR_1->pll_prediv << 8) | (VAR_1->pll_ratio << 0));

  VAR_2 = (1 << 10) | (0 << 9) | (VAR_1->IO_CLK_en_core << 8) |
   (VAR_1->bypclk_div << 5) | (VAR_1->enable_refdiv << 4) |
   (1 << 3) | (VAR_1->pll_range << 1) |
   (VAR_1->pll_reset << 0);

  FUNC_2(VAR_0, 902, VAR_2);
  VAR_2 = (VAR_2 & 0xfff7) | (VAR_1->pll_bypass << 3);
  FUNC_2(VAR_0, 902, VAR_2);

  FUNC_3("clk_cfg1: 0x%04x\n", VAR_2);


  if (VAR_0->cfg.pll->ADClkSrc == 0)
   FUNC_2(VAR_0, 904,
     (0 << 15) | (0 << 12) | (0 << 10) |
     (VAR_1->modulo << 8) |
     (VAR_1->ADClkSrc << 7) | (0 << 1));
  else if (VAR_0->cfg.refclksel != 0)
   FUNC_2(VAR_0, 904, (0 << 15) | (1 << 12) |
     ((VAR_0->cfg.refclksel & 0x3) << 10) |
     (VAR_1->modulo << 8) |
     (VAR_1->ADClkSrc << 7) | (0 << 1));
  else
   FUNC_2(VAR_0, 904, (0 << 15) | (1 << 12) |
     (3 << 10) | (VAR_1->modulo << 8) |
     (VAR_1->ADClkSrc << 7) | (0 << 1));
 } else {
  FUNC_2(VAR_0, 1856, (!VAR_1->pll_reset<<13) |
    (VAR_1->pll_range<<12) | (VAR_1->pll_ratio<<6) |
    (VAR_1->pll_prediv));

  VAR_3 = FUNC_0(VAR_0, 1857);
  FUNC_2(VAR_0, 1857, VAR_3|(!VAR_1->pll_bypass<<15));

  VAR_3 = FUNC_0(VAR_0, 1858);
  FUNC_2(VAR_0, 1858, VAR_3 | 1);

  FUNC_2(VAR_0, 904, (VAR_1->modulo << 8));
 }

 FUNC_1(VAR_0, VAR_1);
}
