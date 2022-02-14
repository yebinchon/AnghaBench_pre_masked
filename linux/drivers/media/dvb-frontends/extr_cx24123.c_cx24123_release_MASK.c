
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {int tuner_i2c_adapter; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx24123_state*) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_0)
{
 struct cx24123_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_0("\n");
 FUNC_1(&VAR_1->tuner_i2c_adapter);
 FUNC_2(VAR_1);
}
