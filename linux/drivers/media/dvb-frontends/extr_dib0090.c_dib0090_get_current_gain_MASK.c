
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int* gain; int rf_gain_limit; int rf_lt_def; } ;



void FUNC_0(struct dvb_frontend *VAR_0, u16 * VAR_1, u16 * VAR_2, u16 * VAR_3, u16 * VAR_4)
{
 struct dib0090_state *VAR_5 = VAR_0->tuner_priv;
 if (VAR_1)
  *VAR_1 = VAR_5->gain[0];
 if (VAR_2)
  *VAR_2 = VAR_5->gain[1];
 if (VAR_3)
  *VAR_3 = VAR_5->rf_gain_limit;
 if (VAR_4)
  *VAR_4 = (VAR_5->rf_lt_def >> 10) & 0x7;
}
