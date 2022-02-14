
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u8 ;
struct TYPE_18__ {int parent; } ;
struct i2c_adapter {TYPE_6__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct TYPE_19__ {scalar_t__ output_mode; } ;
struct dvb_frontend {TYPE_7__ ops; struct dib9000_state* demodulator_priv; } ;
struct TYPE_17__ {int parent; } ;
struct TYPE_20__ {int * algo_data; int * algo; int name; TYPE_5__ dev; } ;
struct TYPE_12__ {int i2c_addr; struct i2c_adapter* i2c_adap; int i2c_read_buffer; int i2c_write_buffer; } ;
struct TYPE_15__ {TYPE_7__ cfg; } ;
struct TYPE_16__ {TYPE_3__ d9; } ;
struct TYPE_13__ {int mem_mbx_lock; int mem_lock; int mbx_lock; int mbx_if_lock; } ;
struct TYPE_14__ {TYPE_1__ risc; } ;
struct dib9000_state {int pid_ctrl_index; int component_bus_speed; TYPE_8__ tuner_adap; TYPE_8__ component_bus; TYPE_11__ i2c; int i2c_master; TYPE_4__ chip; struct dvb_frontend** fe; scalar_t__ get_frontend_internal; int demod_lock; TYPE_2__ platform; int gpio_pwm_pos; int gpio_val; int gpio_dir; int i2c_read_buffer; int i2c_write_buffer; } ;
struct dib9000_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dvb_frontend*) ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 struct dib9000_config const VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,struct i2c_adapter*,int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*,struct dib9000_state*) ;
 int FUNC_6 (struct dib9000_state*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_7__*,struct dib9000_config const*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;

struct dvb_frontend *FUNC_11(struct i2c_adapter *VAR_11, u8 VAR_12, const struct dib9000_config *VAR_13)
{
 struct dvb_frontend *VAR_14;
 struct dib9000_state *VAR_15;
 VAR_15 = FUNC_7(sizeof(struct dib9000_state), VAR_4);
 if (VAR_15 == ((void*)0))
  return ((void*)0);
 VAR_14 = FUNC_7(sizeof(struct dvb_frontend), VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_6(VAR_15);
  return ((void*)0);
 }

 FUNC_8(&VAR_15->chip.d9.cfg, VAR_13, sizeof(struct dib9000_config));
 VAR_15->i2c.i2c_adap = VAR_11;
 VAR_15->i2c.i2c_addr = VAR_12;
 VAR_15->i2c.i2c_write_buffer = VAR_15->i2c_write_buffer;
 VAR_15->i2c.i2c_read_buffer = VAR_15->i2c_read_buffer;

 VAR_15->gpio_dir = VAR_1;
 VAR_15->gpio_val = VAR_3;
 VAR_15->gpio_pwm_pos = VAR_2;

 FUNC_9(&VAR_15->platform.risc.mbx_if_lock);
 FUNC_9(&VAR_15->platform.risc.mbx_lock);
 FUNC_9(&VAR_15->platform.risc.mem_lock);
 FUNC_9(&VAR_15->platform.risc.mem_mbx_lock);
 FUNC_9(&VAR_15->demod_lock);
 VAR_15->get_frontend_internal = 0;

 VAR_15->pid_ctrl_index = -2;

 VAR_15->fe[0] = VAR_14;
 VAR_14->demodulator_priv = VAR_15;
 FUNC_8(&VAR_15->fe[0]->ops, &VAR_9, sizeof(struct dvb_frontend_ops));




 if ((VAR_15->chip.d9.cfg.output_mode != VAR_7) && (VAR_15->chip.d9.cfg.output_mode != VAR_6))
  VAR_15->chip.d9.cfg.output_mode = VAR_5;

 if (FUNC_1(&VAR_15->i2c) == 0)
  goto error;

 FUNC_2(&VAR_15->i2c_master, VAR_0, VAR_15->i2c.i2c_adap, VAR_15->i2c.i2c_addr);

 VAR_15->tuner_adap.dev.parent = VAR_11->dev.parent;
 FUNC_10(VAR_15->tuner_adap.name, "DIB9000_FW TUNER ACCESS",
  sizeof(VAR_15->tuner_adap.name));
 VAR_15->tuner_adap.algo = &VAR_10;
 VAR_15->tuner_adap.algo_data = ((void*)0);
 FUNC_5(&VAR_15->tuner_adap, VAR_15);
 if (FUNC_3(&VAR_15->tuner_adap) < 0)
  goto error;

 VAR_15->component_bus.dev.parent = VAR_11->dev.parent;
 FUNC_10(VAR_15->component_bus.name, "DIB9000_FW COMPONENT BUS ACCESS",
  sizeof(VAR_15->component_bus.name));
 VAR_15->component_bus.algo = &VAR_8;
 VAR_15->component_bus.algo_data = ((void*)0);
 VAR_15->component_bus_speed = 340;
 FUNC_5(&VAR_15->component_bus, VAR_15);
 if (FUNC_3(&VAR_15->component_bus) < 0)
  goto component_bus_add_error;

 FUNC_0(VAR_14);

 return VAR_14;

component_bus_add_error:
 FUNC_4(&VAR_15->tuner_adap);
error:
 FUNC_6(VAR_15);
 return ((void*)0);
}
