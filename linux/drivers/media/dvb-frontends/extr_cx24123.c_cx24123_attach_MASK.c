
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct i2c_adapter {TYPE_2__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; int ops; } ;
struct TYPE_5__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; int * algo_data; int * algo; int name; } ;
struct cx24123_state {int demod_rev; struct dvb_frontend frontend; TYPE_3__ tuner_i2c_adapter; struct i2c_adapter* i2c; struct cx24123_config const* config; } ;
struct cx24123_config {scalar_t__ dont_use_pll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24123_state*,int) ;
 int FUNC_1 (struct cx24123_state*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct cx24123_state*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct cx24123_state*) ;
 struct cx24123_state* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ,char*,int) ;

struct dvb_frontend *FUNC_11(const struct cx24123_config *VAR_3,
        struct i2c_adapter *VAR_4)
{

 struct cx24123_state *VAR_5 =
  FUNC_8(sizeof(struct cx24123_state), VAR_0);

 FUNC_2("\n");
 if (VAR_5 == ((void*)0)) {
  FUNC_3("Unable to kzalloc\n");
  goto error;
 }


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;


 VAR_5->demod_rev = FUNC_0(VAR_5, 0x00);
 switch (VAR_5->demod_rev) {
 case 0xe1:
  FUNC_6("detected CX24123C\n");
  break;
 case 0xd1:
  FUNC_6("detected CX24123\n");
  break;
 default:
  FUNC_3("wrong demod revision: %x\n", VAR_5->demod_rev);
  goto error;
 }


 FUNC_9(&VAR_5->frontend.ops, &VAR_1,
  sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;


 if (VAR_3->dont_use_pll)
  FUNC_1(VAR_5, 1, 0);

 FUNC_10(VAR_5->tuner_i2c_adapter.name, "CX24123 tuner I2C bus",
  sizeof(VAR_5->tuner_i2c_adapter.name));
 VAR_5->tuner_i2c_adapter.algo = &VAR_2;
 VAR_5->tuner_i2c_adapter.algo_data = ((void*)0);
 VAR_5->tuner_i2c_adapter.dev.parent = VAR_4->dev.parent;
 FUNC_5(&VAR_5->tuner_i2c_adapter, VAR_5);
 if (FUNC_4(&VAR_5->tuner_i2c_adapter) < 0) {
  FUNC_3("tuner i2c bus could not be initialized\n");
  goto error;
 }

 return &VAR_5->frontend;

error:
 FUNC_7(VAR_5);

 return ((void*)0);
}
