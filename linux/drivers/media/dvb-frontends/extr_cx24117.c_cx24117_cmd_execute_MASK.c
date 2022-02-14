
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct cx24117_state* demodulator_priv; } ;
struct cx24117_state {TYPE_1__* priv; } ;
struct cx24117_cmd {int dummy; } ;
struct TYPE_2__ {int fe_lock; } ;


 int FUNC_0 (struct dvb_frontend*,struct cx24117_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, struct cx24117_cmd *VAR_1)
{
 struct cx24117_state *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 FUNC_1(&VAR_2->priv->fe_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->priv->fe_lock);

 return VAR_3;
}
