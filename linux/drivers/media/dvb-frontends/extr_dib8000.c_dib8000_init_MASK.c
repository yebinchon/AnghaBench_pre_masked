
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int parent; } ;
struct i2c_adapter {TYPE_3__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_11__ {scalar_t__ output_mode; } ;
struct dvb_frontend {TYPE_4__ ops; struct dib8000_state* demodulator_priv; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_12__ {TYPE_2__ dev; int * algo_data; int * algo; int name; } ;
struct TYPE_13__ {struct i2c_adapter* adap; int addr; int * i2c_buffer_lock; int i2c_read_buffer; int i2c_write_buffer; } ;
struct dib8000_state {int current_demod_bw; TYPE_5__ dib8096p_tuner_adap; TYPE_7__ i2c; int i2c_master; int timf_default; struct dvb_frontend** fe; TYPE_4__ cfg; int gpio_dir; int gpio_val; int i2c_buffer_lock; int i2c_read_buffer; int i2c_write_buffer; } ;
struct dib8000_config {TYPE_1__* pll; int gpio_dir; int gpio_val; } ;
struct TYPE_8__ {int timf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 struct dib8000_config VAR_5 ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dib8000_state*,int,int) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,struct i2c_adapter*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,struct dib8000_state*) ;
 int FUNC_8 (struct dib8000_state*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_4__*,struct dib8000_config*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int) ;

__attribute__((used)) static struct dvb_frontend *FUNC_13(struct i2c_adapter *VAR_7, u8 VAR_8, struct dib8000_config *VAR_9)
{
 struct dvb_frontend *VAR_10;
 struct dib8000_state *VAR_11;

 FUNC_5("dib8000_init\n");

 VAR_11 = FUNC_9(sizeof(struct dib8000_state), VAR_1);
 if (VAR_11 == ((void*)0))
  return ((void*)0);
 VAR_10 = FUNC_9(sizeof(struct dvb_frontend), VAR_1);
 if (VAR_10 == ((void*)0))
  goto error;

 FUNC_10(&VAR_11->cfg, VAR_9, sizeof(struct dib8000_config));
 VAR_11->i2c.adap = VAR_7;
 VAR_11->i2c.addr = VAR_8;
 VAR_11->i2c.i2c_write_buffer = VAR_11->i2c_write_buffer;
 VAR_11->i2c.i2c_read_buffer = VAR_11->i2c_read_buffer;
 FUNC_11(&VAR_11->i2c_buffer_lock);
 VAR_11->i2c.i2c_buffer_lock = &VAR_11->i2c_buffer_lock;
 VAR_11->gpio_val = VAR_9->gpio_val;
 VAR_11->gpio_dir = VAR_9->gpio_dir;




 if ((VAR_11->cfg.output_mode != VAR_4) && (VAR_11->cfg.output_mode != VAR_3))
  VAR_11->cfg.output_mode = VAR_2;

 VAR_11->fe[0] = VAR_10;
 VAR_10->demodulator_priv = VAR_11;
 FUNC_10(&VAR_11->fe[0]->ops, &VAR_5, sizeof(struct dvb_frontend_ops));

 VAR_11->timf_default = VAR_9->pll->timf;

 if (FUNC_0(&VAR_11->i2c) == 0)
  goto error;

 FUNC_4(&VAR_11->i2c_master, VAR_0, VAR_11->i2c.adap, VAR_11->i2c.addr);


 FUNC_12(VAR_11->dib8096p_tuner_adap.name, "DiB8096P tuner interface",
  sizeof(VAR_11->dib8096p_tuner_adap.name));
 VAR_11->dib8096p_tuner_adap.algo = &VAR_6;
 VAR_11->dib8096p_tuner_adap.algo_data = ((void*)0);
 VAR_11->dib8096p_tuner_adap.dev.parent = VAR_11->i2c.adap->dev.parent;
 FUNC_7(&VAR_11->dib8096p_tuner_adap, VAR_11);
 FUNC_6(&VAR_11->dib8096p_tuner_adap);

 FUNC_2(VAR_10);

 FUNC_3(VAR_11, 285, (FUNC_1(VAR_11, 285) & ~0x60) | (3 << 5));
 VAR_11->current_demod_bw = 6000;

 return VAR_10;

error:
 FUNC_8(VAR_11);
 return ((void*)0);
}
