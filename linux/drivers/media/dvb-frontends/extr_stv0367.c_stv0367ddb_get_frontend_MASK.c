
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367_state {int activedemod; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;
struct dtv_frontend_properties {int dummy; } ;




 int FUNC_0 (struct dvb_frontend*,struct dtv_frontend_properties*) ;
 int FUNC_1 (struct dvb_frontend*,struct dtv_frontend_properties*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
       struct dtv_frontend_properties *VAR_1)
{
 struct stv0367_state *VAR_2 = VAR_0->demodulator_priv;

 switch (VAR_2->activedemod) {
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 case 129:
  return FUNC_0(VAR_0, VAR_1);
 default:
  break;
 }

 return 0;
}
