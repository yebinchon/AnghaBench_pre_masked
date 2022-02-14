
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;


 int FUNC_0 (struct dib3000_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend* VAR_0)
{
 struct dib3000_state *VAR_1 = VAR_0->demodulator_priv;
 FUNC_0(VAR_1);
}
