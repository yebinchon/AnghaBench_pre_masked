
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv0297_state {TYPE_1__* config; int base_freq; } ;
struct dvb_frontend {struct stv0297_state* demodulator_priv; } ;
struct dtv_frontend_properties {scalar_t__ inversion; int symbol_rate; int modulation; int fec_inner; int frequency; } ;
struct TYPE_2__ {scalar_t__ invert; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct stv0297_state*) ;
 int FUNC_1 (struct stv0297_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_8,
    struct dtv_frontend_properties *VAR_9)
{
 struct stv0297_state *VAR_10 = VAR_8->demodulator_priv;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_10, 0x00);
 VAR_12 = FUNC_1(VAR_10, 0x83);

 VAR_9->frequency = VAR_10->base_freq;
 VAR_9->inversion = (VAR_12 & 0x08) ? VAR_2 : VAR_1;
 if (VAR_10->config->invert)
  VAR_9->inversion = (VAR_9->inversion == VAR_2) ? VAR_1 : VAR_2;
 VAR_9->symbol_rate = FUNC_0(VAR_10) * 1000;
 VAR_9->fec_inner = VAR_0;

 switch ((VAR_11 >> 4) & 0x7) {
 case 0:
  VAR_9->modulation = VAR_4;
  break;
 case 1:
  VAR_9->modulation = VAR_6;
  break;
 case 2:
  VAR_9->modulation = VAR_3;
  break;
 case 3:
  VAR_9->modulation = VAR_5;
  break;
 case 4:
  VAR_9->modulation = VAR_7;
  break;
 }

 return 0;
}
