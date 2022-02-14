
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib7000p_state* demodulator_priv; } ;
struct dibx000_bandwidth_config {int pll_prediv; int pll_ratio; } ;
struct dib7000p_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib7000p_state*) ;
 int FUNC_1 (struct dib7000p_state*,int) ;
 int FUNC_2 (struct dib7000p_state*,int,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1, struct dibx000_bandwidth_config *VAR_2)
{
 struct dib7000p_state *VAR_3 = VAR_1->demodulator_priv;
 u16 VAR_4, VAR_5 = FUNC_1(VAR_3, 1856);
 u8 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;


 VAR_7 = VAR_5 & 0x3f;
 VAR_6 = (VAR_5 >> 6) & 0x3f;

 if ((VAR_2 != ((void*)0)) && (VAR_2->pll_prediv != VAR_7 || VAR_2->pll_ratio != VAR_6)) {
  FUNC_3("Updating pll (prediv: old =  %d new = %d ; loopdiv : old = %d new = %d)\n", VAR_7, VAR_2->pll_prediv, VAR_6, VAR_2->pll_ratio);
  VAR_5 &= 0xf000;
  VAR_4 = FUNC_1(VAR_3, 1857);
  FUNC_2(VAR_3, 1857, VAR_4 & ~(1 << 15));

  FUNC_2(VAR_3, 1856, VAR_5 | ((VAR_2->pll_ratio & 0x3f) << 6) | (VAR_2->pll_prediv & 0x3f));


  VAR_8 = FUNC_0(VAR_3);
  VAR_9 = (VAR_8 / VAR_6) * VAR_7;
  VAR_8 = 1000 * (VAR_9 / VAR_2->pll_prediv) * VAR_2->pll_ratio;
  FUNC_2(VAR_3, 18, (u16) ((VAR_8 >> 16) & 0xffff));
  FUNC_2(VAR_3, 19, (u16) (VAR_8 & 0xffff));

  FUNC_2(VAR_3, 1857, VAR_4 | (1 << 15));

  while (((FUNC_1(VAR_3, 1856) >> 15) & 0x1) != 1)
   FUNC_3("Waiting for PLL to lock\n");

  return 0;
 }
 return -VAR_0;
}
