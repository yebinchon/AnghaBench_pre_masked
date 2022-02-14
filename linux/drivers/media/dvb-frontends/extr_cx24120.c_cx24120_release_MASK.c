
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24120_state* demodulator_priv; } ;
struct cx24120_state {TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cx24120_state*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct cx24120_state *VAR_1 = VAR_0->demodulator_priv;

 FUNC_0(&VAR_1->i2c->dev, "Clear state structure\n");
 FUNC_1(VAR_1);
}
