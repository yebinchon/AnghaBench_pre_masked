
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct stv090x_state* demodulator_priv; int ops; } ;
struct stv090x_state {int rolloff; int device; int demod_mode; int demod; TYPE_2__ frontend; int i2c; struct stv090x_config* config; int * verbose; } ;
struct stv090x_config {int get_dvb_frontend; int device; int demod_mode; int demod; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {struct stv090x_config* platform_data; } ;
struct i2c_client {int adapter; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,struct stv090x_state*) ;
 int FUNC_1 (struct stv090x_state*) ;
 struct stv090x_state* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct stv090x_state*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 int VAR_8 = 0;
 struct stv090x_config *VAR_9 = VAR_6->dev.platform_data;

 struct stv090x_state *VAR_10 = ((void*)0);

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_8 = -VAR_0;
  goto error;
 }

 VAR_10->verbose = &VAR_5;
 VAR_10->config = VAR_9;
 VAR_10->i2c = VAR_6->adapter;
 VAR_10->frontend.ops = VAR_4;
 VAR_10->frontend.demodulator_priv = VAR_10;
 VAR_10->demod = VAR_9->demod;

 VAR_10->demod_mode = VAR_9->demod_mode;
 VAR_10->device = VAR_9->device;

 VAR_10->rolloff = VAR_2;

 VAR_8 = FUNC_3(VAR_10);
 if (VAR_8)
  goto error;

 FUNC_0(VAR_6, VAR_10);


 VAR_9->get_dvb_frontend = VAR_3;

 return 0;

error:
 FUNC_1(VAR_10);
 return VAR_8;
}
