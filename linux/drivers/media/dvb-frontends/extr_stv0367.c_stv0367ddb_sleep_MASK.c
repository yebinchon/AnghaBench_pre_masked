
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367_state {int activedemod; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int VAR_0 ;

 void* VAR_1 ;

 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2)
{
 struct stv0367_state *VAR_3 = VAR_2->demodulator_priv;

 switch (VAR_3->activedemod) {
 case 128:
  VAR_3->activedemod = VAR_1;
  return FUNC_1(VAR_2);
 case 129:
  VAR_3->activedemod = VAR_1;
  return FUNC_0(VAR_2);
 default:
  break;
 }

 return -VAR_0;
}
