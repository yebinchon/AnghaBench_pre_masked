
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv0367_state {int activedemod; } ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv0367_state* demodulator_priv; } ;
typedef int s32 ;
struct TYPE_3__ {int uvalue; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct stv0367_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_2)
{
 struct stv0367_state *VAR_3 = VAR_2->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;
 s32 VAR_5;

 switch (VAR_3->activedemod) {
 case 128:
  VAR_5 = FUNC_0(VAR_3) * 1000;
  break;
 default:
  VAR_4->strength.stat[0].scale = VAR_1;
  return;
 }

 VAR_4->strength.stat[0].scale = VAR_0;
 VAR_4->strength.stat[0].uvalue = VAR_5;
}
