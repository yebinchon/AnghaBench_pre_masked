
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5h1420_state {int tuner_i2c_adapter; } ;
struct dvb_frontend {struct s5h1420_state* demodulator_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct s5h1420_state*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend* VAR_0)
{
 struct s5h1420_state* VAR_1 = VAR_0->demodulator_priv;
 FUNC_0(&VAR_1->tuner_i2c_adapter);
 FUNC_1(VAR_1);
}
