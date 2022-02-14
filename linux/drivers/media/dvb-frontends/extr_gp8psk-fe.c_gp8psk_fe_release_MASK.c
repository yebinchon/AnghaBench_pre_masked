
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp8psk_fe_state {int dummy; } ;
struct dvb_frontend {struct gp8psk_fe_state* demodulator_priv; } ;


 int FUNC_0 (struct gp8psk_fe_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend* VAR_0)
{
 struct gp8psk_fe_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(VAR_1);
}
