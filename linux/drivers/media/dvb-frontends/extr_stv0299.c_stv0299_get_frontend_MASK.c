
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stv0299_state {TYPE_1__* config; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; int fec_inner; int inversion; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;
struct TYPE_2__ {int mclk; scalar_t__ invert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv0299_state*) ;
 int FUNC_1 (struct stv0299_state*) ;
 int FUNC_2 (struct stv0299_state*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2,
    struct dtv_frontend_properties *VAR_3)
{
 struct stv0299_state* VAR_4 = VAR_2->demodulator_priv;
 s32 VAR_5;
 int VAR_6;

 VAR_5 = (s32)(s16) ((FUNC_2 (VAR_4, 0x22) << 8)
    | FUNC_2 (VAR_4, 0x23));

 VAR_5 *= (VAR_4->config->mclk >> 16);
 VAR_5 += 500;
 VAR_5 /= 1000;

 VAR_3->frequency += VAR_5;

 VAR_6 = FUNC_2 (VAR_4, 0x0c) & 1;
 if (VAR_4->config->invert) VAR_6 = (~VAR_6) & 1;
 VAR_3->inversion = VAR_6 ? VAR_1 : VAR_0;

 VAR_3->fec_inner = FUNC_0(VAR_4);
 VAR_3->symbol_rate = FUNC_1(VAR_4);

 return 0;
}
