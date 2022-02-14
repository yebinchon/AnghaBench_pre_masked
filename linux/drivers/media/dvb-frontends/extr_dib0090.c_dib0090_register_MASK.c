
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct dib0090_state* tuner_priv; TYPE_1__ ops; } ;
struct dib0090_state {int * current_wbd_table; int i2c_buffer_lock; struct dvb_frontend* fe; struct i2c_adapter* i2c; struct dib0090_config const* config; } ;
struct dib0090_config {int * wbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*) ;
 int * VAR_2 ;
 int FUNC_1 (struct dib0090_state*) ;
 struct dib0090_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

struct dvb_frontend *FUNC_6(struct dvb_frontend *VAR_3, struct i2c_adapter *VAR_4, const struct dib0090_config *VAR_5)
{
 struct dib0090_state *VAR_6 = FUNC_2(sizeof(struct dib0090_state), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->config = VAR_5;
 VAR_6->i2c = VAR_4;
 VAR_6->fe = VAR_3;
 FUNC_4(&VAR_6->i2c_buffer_lock);
 VAR_3->tuner_priv = VAR_6;

 if (VAR_5->wbd == ((void*)0))
  VAR_6->current_wbd_table = VAR_2;
 else
  VAR_6->current_wbd_table = VAR_5->wbd;

 if (FUNC_0(VAR_3) != 0)
  goto free_mem;

 FUNC_5("DiB0090: successfully identified\n");
 FUNC_3(&VAR_3->ops.tuner_ops, &VAR_1, sizeof(struct dvb_tuner_ops));

 return VAR_3;
 free_mem:
 FUNC_1(VAR_6);
 VAR_3->tuner_priv = ((void*)0);
 return ((void*)0);
}
