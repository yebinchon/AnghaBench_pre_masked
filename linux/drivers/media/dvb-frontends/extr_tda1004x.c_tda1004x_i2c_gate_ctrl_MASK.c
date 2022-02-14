
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda1004x_state {int dummy; } ;
struct dvb_frontend {struct tda1004x_state* demodulator_priv; } ;


 int FUNC_0 (struct tda1004x_state*) ;
 int FUNC_1 (struct tda1004x_state*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct tda1004x_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  return FUNC_1(VAR_2);
 } else {
  return FUNC_0(VAR_2);
 }
}
