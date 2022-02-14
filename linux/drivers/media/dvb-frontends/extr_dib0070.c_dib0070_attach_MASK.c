
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct dib0070_state* tuner_priv; TYPE_1__ ops; } ;
struct dib0070_state {int i2c_buffer_lock; struct dvb_frontend* fe; struct i2c_adapter* i2c; struct dib0070_config* cfg; } ;
struct dib0070_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dib0070_state*) ;
 struct dib0070_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

struct dvb_frontend *FUNC_6(struct dvb_frontend *VAR_2, struct i2c_adapter *VAR_3, struct dib0070_config *VAR_4)
{
 struct dib0070_state *VAR_5 = FUNC_2(sizeof(struct dib0070_state), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->cfg = VAR_4;
 VAR_5->i2c = VAR_3;
 VAR_5->fe = VAR_2;
 FUNC_4(&VAR_5->i2c_buffer_lock);
 VAR_2->tuner_priv = VAR_5;

 if (FUNC_0(VAR_2) != 0)
  goto free_mem;

 FUNC_5("DiB0070: successfully identified\n");
 FUNC_3(&VAR_2->ops.tuner_ops, &VAR_1, sizeof(struct dvb_tuner_ops));

 VAR_2->tuner_priv = VAR_5;
 return VAR_2;

free_mem:
 FUNC_1(VAR_5);
 VAR_2->tuner_priv = ((void*)0);
 return ((void*)0);
}
