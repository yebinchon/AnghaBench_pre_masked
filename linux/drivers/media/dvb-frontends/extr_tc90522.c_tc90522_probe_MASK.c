
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct i2c_adapter* tuner_i2c; TYPE_1__* fe; } ;
struct TYPE_7__ {TYPE_5__* parent; } ;
struct i2c_adapter {int name; TYPE_2__ dev; int * algo; int owner; } ;
struct TYPE_6__ {struct tc90522_state* demodulator_priv; TYPE_3__ ops; } ;
struct tc90522_state {TYPE_3__ cfg; struct i2c_adapter tuner_i2c; TYPE_1__ fe; struct i2c_client* i2c_client; } ;
typedef struct tc90522_config {struct i2c_adapter* tuner_i2c; TYPE_1__* fe; } const tc90522_config ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_9__ {struct tc90522_config* platform_data; } ;
struct i2c_client {TYPE_5__ dev; } ;
struct dvb_frontend_ops {struct i2c_adapter* tuner_i2c; TYPE_1__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct tc90522_state*) ;
 int FUNC_3 (struct i2c_client*,TYPE_3__*) ;
 int FUNC_4 (struct tc90522_state*) ;
 struct tc90522_state* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,struct tc90522_config const*,int) ;
 int FUNC_7 (int ,char*,int) ;
 struct tc90522_config VAR_3 ;
 struct tc90522_config VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct tc90522_state *VAR_8;
 struct tc90522_config *VAR_9;
 const struct dvb_frontend_ops *VAR_10;
 struct i2c_adapter *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->i2c_client = VAR_6;

 VAR_9 = VAR_6->dev.platform_data;
 FUNC_6(&VAR_8->cfg, VAR_9, sizeof(VAR_8->cfg));
 VAR_9->fe = VAR_8->cfg.fe = &VAR_8->fe;
 VAR_10 = VAR_7->driver_data == 0 ? &VAR_3 : &VAR_4;
 FUNC_6(&VAR_8->fe.ops, VAR_10, sizeof(*VAR_10));
 VAR_8->fe.demodulator_priv = VAR_8;

 VAR_11 = &VAR_8->tuner_i2c;
 VAR_11->owner = VAR_2;
 VAR_11->algo = &VAR_5;
 VAR_11->dev.parent = &VAR_6->dev;
 FUNC_7(VAR_11->name, "tc90522_sub", sizeof(VAR_11->name));
 FUNC_2(VAR_11, VAR_8);
 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12 < 0)
  goto free_state;
 VAR_9->tuner_i2c = VAR_8->cfg.tuner_i2c = VAR_11;

 FUNC_3(VAR_6, &VAR_8->cfg);
 FUNC_0(&VAR_6->dev, "Toshiba TC90522 attached.\n");
 return 0;
free_state:
 FUNC_4(VAR_8);
 return VAR_12;
}
