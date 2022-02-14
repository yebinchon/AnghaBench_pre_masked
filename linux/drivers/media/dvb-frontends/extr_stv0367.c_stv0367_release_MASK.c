
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0367_state {struct stv0367_state* cab_state; struct stv0367_state* ter_state; } ;
struct dvb_frontend {struct stv0367_state* demodulator_priv; } ;


 int FUNC_0 (struct stv0367_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct stv0367_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1->ter_state);
 FUNC_0(VAR_1->cab_state);
 FUNC_0(VAR_1);
}
