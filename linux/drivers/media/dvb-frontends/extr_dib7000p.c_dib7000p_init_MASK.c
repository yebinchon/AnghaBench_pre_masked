
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int parent; } ;
struct i2c_adapter {TYPE_4__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_13__ {scalar_t__ output_mode; } ;
struct dvb_frontend {TYPE_5__ ops; struct dib7000p_state* demodulator_priv; } ;
struct TYPE_11__ {int parent; } ;
struct TYPE_14__ {TYPE_3__ dev; int * algo_data; int * algo; int name; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_10__ {TYPE_1__ dev; } ;
struct TYPE_15__ {TYPE_2__ gated_tuner_i2c_adap; } ;
struct dib7000p_state {scalar_t__ version; TYPE_5__ cfg; TYPE_6__ dib7090_tuner_adap; struct i2c_adapter* i2c_adap; int i2c_addr; TYPE_8__ i2c_master; int i2c_buffer_lock; struct dvb_frontend demod; int gpio_dir; int gpio_val; } ;
struct dib7000p_config {int gpio_dir; int gpio_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dib7000p_state*) ;
 scalar_t__ FUNC_1 (struct dib7000p_state*) ;
 struct dib7000p_config VAR_6 ;
 scalar_t__ FUNC_2 (struct dib7000p_state*,int) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dib7000p_state*,int,int) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;
 int FUNC_6 (struct dvb_frontend*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_8__*,int ,struct i2c_adapter*,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,struct dib7000p_state*) ;
 int FUNC_10 (struct dib7000p_state*) ;
 struct dib7000p_state* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_5__*,struct dib7000p_config*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static struct dvb_frontend *FUNC_15(struct i2c_adapter *VAR_8, u8 VAR_9, struct dib7000p_config *VAR_10)
{
 struct dvb_frontend *VAR_11;
 struct dib7000p_state *VAR_12;
 VAR_12 = FUNC_11(sizeof(struct dib7000p_state), VAR_1);
 if (VAR_12 == ((void*)0))
  return ((void*)0);

 FUNC_12(&VAR_12->cfg, VAR_10, sizeof(struct dib7000p_config));
 VAR_12->i2c_adap = VAR_8;
 VAR_12->i2c_addr = VAR_9;
 VAR_12->gpio_val = VAR_10->gpio_val;
 VAR_12->gpio_dir = VAR_10->gpio_dir;




 if ((VAR_12->cfg.output_mode != VAR_4) && (VAR_12->cfg.output_mode != VAR_3))
  VAR_12->cfg.output_mode = VAR_2;

 VAR_11 = &VAR_12->demod;
 VAR_11->demodulator_priv = VAR_12;
 FUNC_12(&VAR_12->demod.ops, &VAR_6, sizeof(struct dvb_frontend_ops));
 FUNC_13(&VAR_12->i2c_buffer_lock);

 FUNC_4(VAR_12, 1287, 0x0003);

 if (FUNC_1(VAR_12) != 0)
  goto error;

 VAR_12->version = FUNC_2(VAR_12, 897);




 VAR_12->i2c_master.gated_tuner_i2c_adap.dev.parent = VAR_8->dev.parent;

 FUNC_7(&VAR_12->i2c_master, VAR_0, VAR_12->i2c_adap, VAR_12->i2c_addr);


 FUNC_14(VAR_12->dib7090_tuner_adap.name, "DiB7090 tuner interface",
  sizeof(VAR_12->dib7090_tuner_adap.name));
 VAR_12->dib7090_tuner_adap.algo = &VAR_7;
 VAR_12->dib7090_tuner_adap.algo_data = ((void*)0);
 VAR_12->dib7090_tuner_adap.dev.parent = VAR_12->i2c_adap->dev.parent;
 FUNC_9(&VAR_12->dib7090_tuner_adap, VAR_12);
 FUNC_8(&VAR_12->dib7090_tuner_adap);

 FUNC_0(VAR_12);

 FUNC_3(VAR_11);

 if (VAR_12->version == VAR_5) {
  FUNC_6(VAR_11, VAR_12->cfg.output_mode);
  FUNC_5(VAR_11, 0);
 }

 return VAR_11;

error:
 FUNC_10(VAR_12);
 return ((void*)0);
}
