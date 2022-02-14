
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct as102_state* demodulator_priv; } ;
struct as102_state {int elna_cfg; int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stream_ctrl ) (int ,int,int ) ;} ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct as102_state *VAR_2 = VAR_0->demodulator_priv;

 return VAR_2->ops->stream_ctrl(VAR_2->priv, VAR_1,
          VAR_2->elna_cfg);
}
