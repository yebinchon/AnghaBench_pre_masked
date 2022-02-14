
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg216x_state {int dummy; } ;
struct dvb_frontend {struct lg216x_state* demodulator_priv; } ;


 int FUNC_0 (struct lg216x_state*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct lg216x_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_1("\n");
 FUNC_0(VAR_1);
}
