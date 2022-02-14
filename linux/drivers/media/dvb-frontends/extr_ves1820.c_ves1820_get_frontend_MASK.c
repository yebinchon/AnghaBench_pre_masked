
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ves1820_state {int reg0; TYPE_1__* config; } ;
struct dvb_frontend {struct ves1820_state* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; scalar_t__ symbol_rate; int fec_inner; scalar_t__ modulation; void* inversion; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_2__ {int invert; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ves1820_state*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_5,
    struct dtv_frontend_properties *VAR_6)
{
 struct ves1820_state* VAR_7 = VAR_5->demodulator_priv;
 int VAR_8;
 s8 VAR_9 = 0;

 VAR_8 = FUNC_1(VAR_7, 0x11);
 VAR_9 = FUNC_1(VAR_7, 0x19);
 if (VAR_4) {

  FUNC_0(VAR_8 & 2 ? "ves1820: AFC (%d) %dHz\n" :
   "ves1820: [AFC (%d) %dHz]\n", VAR_9, -((s32) VAR_6->symbol_rate * VAR_9) >> 10);
 }

 if (!VAR_7->config->invert) {
  VAR_6->inversion = (VAR_7->reg0 & 0x20) ? VAR_2 : VAR_1;
 } else {
  VAR_6->inversion = (!(VAR_7->reg0 & 0x20)) ? VAR_2 : VAR_1;
 }

 VAR_6->modulation = ((VAR_7->reg0 >> 2) & 7) + VAR_3;

 VAR_6->fec_inner = VAR_0;

 VAR_6->frequency = ((VAR_6->frequency + 31250) / 62500) * 62500;
 if (VAR_8 & 2)
  VAR_6->frequency -= ((s32) VAR_6->symbol_rate * VAR_9) >> 10;

 return 0;
}
