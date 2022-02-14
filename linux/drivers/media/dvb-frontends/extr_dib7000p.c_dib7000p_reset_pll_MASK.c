
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dibx000_bandwidth_config {int pll_reset; int pll_range; int pll_ratio; int pll_prediv; int pll_bypass; int modulo; int ADClkSrc; int IO_CLK_en_core; int bypclk_div; int enable_refdiv; int internal; int ifreq; int sad_cfg; } ;
struct TYPE_2__ {struct dibx000_bandwidth_config* bw; } ;
struct dib7000p_state {scalar_t__ version; TYPE_1__ cfg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib7000p_state *VAR_1)
{
 struct dibx000_bandwidth_config *VAR_2 = &VAR_1->cfg.bw[0];
 u16 VAR_3;

 if (VAR_1->version == VAR_0) {
  FUNC_1(VAR_1, 1856, (!VAR_2->pll_reset << 13) | (VAR_2->pll_range << 12) | (VAR_2->pll_ratio << 6) | (VAR_2->pll_prediv));

  while (((FUNC_0(VAR_1, 1856) >> 15) & 0x1) != 1)
   ;

  FUNC_1(VAR_1, 1857, FUNC_0(VAR_1, 1857) | (!VAR_2->pll_bypass << 15));
 } else {

  VAR_3 = (1 << 15) | ((VAR_2->pll_ratio & 0x3f) << 9) |
   (VAR_2->modulo << 7) | (VAR_2->ADClkSrc << 6) | (VAR_2->IO_CLK_en_core << 5) | (VAR_2->bypclk_div << 2) | (VAR_2->enable_refdiv << 1) | (0 << 0);

  FUNC_1(VAR_1, 900, VAR_3);


  FUNC_1(VAR_1, 903, (VAR_2->pll_prediv << 5) | (((VAR_2->pll_ratio >> 6) & 0x3) << 3) | (VAR_2->pll_range << 1) | VAR_2->pll_reset);
  VAR_3 = (VAR_2->pll_bypass << 15) | (VAR_3 & 0x7fff);
  FUNC_1(VAR_1, 900, VAR_3);
 }

 FUNC_1(VAR_1, 18, (u16) (((VAR_2->internal * 1000) >> 16) & 0xffff));
 FUNC_1(VAR_1, 19, (u16) ((VAR_2->internal * 1000) & 0xffff));
 FUNC_1(VAR_1, 21, (u16) ((VAR_2->ifreq >> 16) & 0xffff));
 FUNC_1(VAR_1, 22, (u16) ((VAR_2->ifreq) & 0xffff));

 FUNC_1(VAR_1, 72, VAR_2->sad_cfg);
}
