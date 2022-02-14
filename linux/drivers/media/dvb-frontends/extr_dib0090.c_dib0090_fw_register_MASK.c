
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct dib0090_fw_state* tuner_priv; TYPE_1__ ops; } ;
struct dib0090_fw_state {struct dib0090_config const* config; int i2c_buffer_lock; struct dvb_frontend* fe; struct i2c_adapter* i2c; } ;
struct dib0090_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,struct dib0090_config const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dib0090_fw_state*) ;
 struct dib0090_fw_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;

struct dvb_frontend *FUNC_6(struct dvb_frontend *VAR_2, struct i2c_adapter *VAR_3, const struct dib0090_config *VAR_4)
{
 struct dib0090_fw_state *VAR_5 = FUNC_3(sizeof(struct dib0090_fw_state), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->config = VAR_4;
 VAR_5->i2c = VAR_3;
 VAR_5->fe = VAR_2;
 FUNC_5(&VAR_5->i2c_buffer_lock);
 VAR_2->tuner_priv = VAR_5;

 if (FUNC_0(VAR_2, VAR_5->config) != 0)
  goto free_mem;

 FUNC_1("DiB0090 FW: successfully identified\n");
 FUNC_4(&VAR_2->ops.tuner_ops, &VAR_1, sizeof(struct dvb_tuner_ops));

 return VAR_2;
free_mem:
 FUNC_2(VAR_5);
 VAR_2->tuner_priv = ((void*)0);
 return ((void*)0);
}
