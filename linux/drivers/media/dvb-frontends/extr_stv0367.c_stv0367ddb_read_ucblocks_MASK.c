
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stv0367_state {int activedemod; } ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ block_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct stv0367_state* demodulator_priv; } ;
struct TYPE_3__ {int uvalue; int scale; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (struct dvb_frontend*,int *) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_2)
{
 struct stv0367_state *VAR_3 = VAR_2->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;
 u32 VAR_5 = 0;

 switch (VAR_3->activedemod) {
 case 128:
  FUNC_1(VAR_2, &VAR_5);
  break;
 case 129:
  FUNC_0(VAR_2, &VAR_5);
  break;
 default:
  VAR_4->block_error.stat[0].scale = VAR_1;
  return;
 }

 VAR_4->block_error.stat[0].scale = VAR_0;
 VAR_4->block_error.stat[0].uvalue = VAR_5;
}
