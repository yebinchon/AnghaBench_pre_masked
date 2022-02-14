
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {int dnxt; int dcur; } ;



__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_0)
{
 struct cx24120_state *VAR_1 = VAR_0->demodulator_priv;

 VAR_1->dcur = VAR_1->dnxt;
}
