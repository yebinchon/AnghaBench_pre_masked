
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {struct cx24117_state* demodulator_priv; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; unsigned int frequency; scalar_t__ symbol_rate; int fec_inner; int modulation; int inversion; } ;
struct TYPE_3__ {scalar_t__ symbol_rate; } ;
struct cx24117_state {scalar_t__ demod; TYPE_1__ dcur; } ;
struct cx24117_cmd {int* args; int len; } ;
struct TYPE_4__ {int fec; int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dvb_frontend*,struct cx24117_cmd*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (struct cx24117_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_7,
    struct dtv_frontend_properties *VAR_8)
{
 struct cx24117_state *VAR_9 = VAR_7->demodulator_priv;
 struct cx24117_cmd VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 unsigned int VAR_16;
 short VAR_17, VAR_18;

 u8 VAR_19[0x1f-4];


 VAR_10.args[0] = VAR_0;
 VAR_10.args[1] = (u8) VAR_9->demod;
 VAR_10.len = 2;
 VAR_14 = FUNC_0(VAR_7, &VAR_10);
 if (VAR_14 != 0)
  return VAR_14;


 VAR_11 = (VAR_9->demod == 0) ? VAR_1 : VAR_2;
 VAR_14 = FUNC_1(VAR_9, VAR_11, VAR_19, 0x1f-4);
 if (VAR_14 != 0)
  return VAR_14;

 VAR_12 = VAR_19[5];


 VAR_13 = (((VAR_9->demod == 0) ? ~VAR_12 : VAR_12) >> 6) & 1;
 if (VAR_13 == 0)
  VAR_8->inversion = VAR_3;
 else
  VAR_8->inversion = VAR_4;


 VAR_15 = VAR_12 & 0x3f;
 if (VAR_8->delivery_system == VAR_5) {
  if (VAR_15 > 11)
   VAR_15 += 9;
  else
   VAR_15 += 7;
 }

 VAR_8->modulation = VAR_6[VAR_15].modulation;
 VAR_8->fec_inner = VAR_6[VAR_15].fec;


 VAR_16 = (VAR_19[0] << 16) | (VAR_19[1] << 8) | VAR_19[2];
 VAR_18 = (VAR_19[8] << 8) | VAR_19[9];
 VAR_8->frequency = VAR_16 + VAR_18;


 VAR_17 = (VAR_19[10] << 8) | VAR_19[11];
 VAR_8->symbol_rate = -1000 * VAR_17 + VAR_9->dcur.symbol_rate;
 return 0;
}
