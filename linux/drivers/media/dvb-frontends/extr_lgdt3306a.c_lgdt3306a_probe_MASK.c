
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * release; } ;
struct TYPE_10__ {TYPE_1__ ops; } ;
struct lgdt3306a_state {struct dvb_frontend** fe; TYPE_4__* muxc; int * i2c_adapter; TYPE_2__ frontend; int i2c_addr; } ;
struct lgdt3306a_config {struct dvb_frontend** fe; TYPE_4__* muxc; int * i2c_adapter; TYPE_2__ frontend; int i2c_addr; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_13__ {int platform_data; } ;
struct i2c_client {TYPE_5__ dev; int adapter; int addr; } ;
struct TYPE_11__ {int * i2c_gate_ctrl; } ;
struct dvb_frontend {TYPE_3__ ops; struct lgdt3306a_state* demodulator_priv; } ;
struct TYPE_12__ {int * adapter; struct i2c_client* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,char*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 TYPE_4__* FUNC_3 (int ,TYPE_5__*,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct lgdt3306a_state*) ;
 int FUNC_5 (struct lgdt3306a_state*) ;
 struct lgdt3306a_state* FUNC_6 (int ,int,int ) ;
 struct dvb_frontend* FUNC_7 (struct lgdt3306a_state*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
  const struct i2c_device_id *VAR_7)
{
 struct lgdt3306a_config *VAR_8;
 struct lgdt3306a_state *VAR_9;
 struct dvb_frontend *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(VAR_6->dev.platform_data,
    sizeof(struct lgdt3306a_config), VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_11 = -VAR_1;
  goto fail;
 }

 VAR_8->i2c_addr = VAR_6->addr;
 VAR_10 = FUNC_7(VAR_8, VAR_6->adapter);
 if (VAR_10 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto err_fe;
 }

 FUNC_4(VAR_6, VAR_10->demodulator_priv);
 VAR_9 = VAR_10->demodulator_priv;
 VAR_9->frontend.ops.release = ((void*)0);


 VAR_9->muxc = FUNC_3(VAR_6->adapter, &VAR_6->dev,
      1, 0, VAR_3,
      VAR_5, VAR_4);
 if (!VAR_9->muxc) {
  VAR_11 = -VAR_1;
  goto err_kfree;
 }
 VAR_9->muxc->priv = VAR_6;
 VAR_11 = FUNC_2(VAR_9->muxc, 0, 0, 0);
 if (VAR_11)
  goto err_kfree;


 VAR_10->ops.i2c_gate_ctrl = ((void*)0);
 *VAR_8->i2c_adapter = VAR_9->muxc->adapter[0];
 *VAR_8->fe = VAR_10;

 FUNC_0(&VAR_6->dev, "LG Electronics LGDT3306A successfully identified\n");

 return 0;

err_kfree:
 FUNC_5(VAR_9);
err_fe:
 FUNC_5(VAR_8);
fail:
 FUNC_1(&VAR_6->dev, "probe failed = %d\n", VAR_11);
 return VAR_11;
}
