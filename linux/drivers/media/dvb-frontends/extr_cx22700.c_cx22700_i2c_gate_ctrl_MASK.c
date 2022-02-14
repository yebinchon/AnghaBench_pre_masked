
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx22700_state* demodulator_priv; } ;
struct cx22700_state {int dummy; } ;


 int FUNC_0 (struct cx22700_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct cx22700_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_1) {
  return FUNC_0(VAR_2, 0x0a, 0x00);
 } else {
  return FUNC_0(VAR_2, 0x0a, 0x01);
 }
}
