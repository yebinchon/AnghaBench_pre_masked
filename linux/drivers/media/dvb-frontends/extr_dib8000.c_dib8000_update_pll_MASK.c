
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; } ;
struct TYPE_4__ {TYPE_1__* pll; } ;
struct dib8000_state {int revision; int current_demod_bw; TYPE_2__ cfg; } ;
struct TYPE_3__ {int pll_prediv; int pll_ratio; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*) ;
 int FUNC_3 (struct dib8000_state*,int,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1,
  struct dibx000_bandwidth_config *VAR_2, u32 VAR_3, u8 VAR_4)
{
 struct dib8000_state *VAR_5 = VAR_1->demodulator_priv;
 u16 VAR_6, VAR_7 = FUNC_1(VAR_5, 1856);
 u8 VAR_8, VAR_9, VAR_10 = VAR_5->cfg.pll->pll_prediv ;
 u32 VAR_11, VAR_12;


 VAR_9 = VAR_7 & 0x3f;
 VAR_8 = (VAR_7 >> 6) & 0x3f;

 if ((VAR_2 == ((void*)0)) || (VAR_2->pll_prediv == VAR_9 &&
    VAR_2->pll_ratio == VAR_8))
  return -VAR_0;

 FUNC_4("Updating pll (prediv: old =  %d new = %d ; loopdiv : old = %d new = %d)\n", VAR_9, VAR_2->pll_prediv, VAR_8, VAR_2->pll_ratio);
 if (VAR_5->revision == 0x8090) {
  VAR_7 &= 0xf000;
  VAR_6 = FUNC_1(VAR_5, 1857);

  FUNC_3(VAR_5, 1857, VAR_6 & ~(1 << 15));

  FUNC_3(VAR_5, 1856, VAR_7 |
    ((VAR_2->pll_ratio & 0x3f) << 6) |
    (VAR_2->pll_prediv & 0x3f));


  VAR_11 = FUNC_0(VAR_5, 23) / 1000;
  FUNC_4("Old Internal = %d\n", VAR_11);
  VAR_12 = 2 * (VAR_11 / VAR_8) * VAR_9;
  VAR_11 = 1000 * (VAR_12/VAR_2->pll_prediv) * VAR_2->pll_ratio;
  FUNC_4("Xtal = %d , New Fmem = %d New Fdemod = %d, New Fsampling = %d\n", VAR_12, VAR_11/1000, VAR_11/2000, VAR_11/8000);
  FUNC_4("New Internal = %d\n", VAR_11);

  FUNC_3(VAR_5, 23,
    (u16) (((VAR_11 / 2) >> 16) & 0xffff));
  FUNC_3(VAR_5, 24, (u16) ((VAR_11 / 2) & 0xffff));

  FUNC_3(VAR_5, 1857, VAR_6 | (1 << 15));

  while (((FUNC_1(VAR_5, 1856)>>15)&0x1) != 1)
   FUNC_4("Waiting for PLL to lock\n");


  VAR_7 = FUNC_1(VAR_5, 1856);
  FUNC_4("PLL Updated with prediv = %d and loopdiv = %d\n",
    VAR_7&0x3f, (VAR_7>>6)&0x3f);
 } else {
  if (VAR_3 != VAR_5->current_demod_bw) {

   FUNC_4("PLL: Bandwidth Change %d MHz -> %d MHz (prediv: %d->%d)\n", VAR_5->current_demod_bw / 1000, VAR_3 / 1000, VAR_10, VAR_5->cfg.pll->pll_prediv);

   if (VAR_5->cfg.pll->pll_prediv != VAR_10) {



    FUNC_4("PLL: New Setting for %d MHz Bandwidth (prediv: %d, ratio: %d)\n", VAR_3/1000, VAR_5->cfg.pll->pll_prediv, VAR_5->cfg.pll->pll_ratio);
    FUNC_3(VAR_5, 902, FUNC_1(VAR_5, 902) | (1<<3));
    FUNC_2(VAR_5);
    FUNC_3(VAR_5, 898, 0x0004);
   } else
    VAR_4 = VAR_5->cfg.pll->pll_ratio;

   VAR_5->current_demod_bw = VAR_3;
  }

  if (VAR_4 != 0) {

   FUNC_4("PLL: Update ratio (prediv: %d, ratio: %d)\n", VAR_5->cfg.pll->pll_prediv, VAR_4);
   FUNC_3(VAR_5, 901, (VAR_5->cfg.pll->pll_prediv << 8) | (VAR_4 << 0));
  }
 }

 return 0;
}
