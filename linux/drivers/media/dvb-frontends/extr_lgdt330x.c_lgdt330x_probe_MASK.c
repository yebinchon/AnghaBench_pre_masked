
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int demod_chip; int get_dvb_frontend; } ;
struct TYPE_5__ {struct lgdt330x_state* demodulator_priv; TYPE_2__ ops; } ;
struct lgdt330x_state {int current_frequency; int current_modulation; TYPE_2__ config; struct i2c_client* client; TYPE_1__ frontend; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {int * platform_data; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*,char*) ;
 int FUNC_1 (int ,TYPE_3__*,char*) ;
 scalar_t__ FUNC_2 (struct lgdt330x_state*,int,int *,int) ;
 int FUNC_3 (struct i2c_client*,struct lgdt330x_state*) ;
 int FUNC_4 (struct lgdt330x_state*) ;
 struct lgdt330x_state* FUNC_5 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct lgdt330x_state *VAR_9 = ((void*)0);
 u8 VAR_10[1];


 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  goto error;


 FUNC_6(&VAR_9->config, VAR_7->dev.platform_data,
        sizeof(VAR_9->config));
 FUNC_3(VAR_7, VAR_9);
 VAR_9->client = VAR_7;


 switch (VAR_9->config.demod_chip) {
 case 129:
  FUNC_6(&VAR_9->frontend.ops, &VAR_4,
         sizeof(struct dvb_frontend_ops));
  break;
 case 128:
  FUNC_6(&VAR_9->frontend.ops, &VAR_5,
         sizeof(struct dvb_frontend_ops));
  break;
 default:
  goto error;
 }
 VAR_9->frontend.demodulator_priv = VAR_9;


 VAR_9->config.get_dvb_frontend = VAR_6;


 if (FUNC_2(VAR_9, 2, VAR_10, 1))
  goto error;

 VAR_9->current_frequency = -1;
 VAR_9->current_modulation = -1;

 FUNC_0(&VAR_9->client->dev,
  "Demod loaded for LGDT330%s chip\n",
  VAR_9->config.demod_chip == 129 ? "2" : "3");

 return 0;

error:
 FUNC_4(VAR_9);
 if (VAR_3)
  FUNC_1(VAR_2, &VAR_7->dev, "Error loading lgdt330x driver\n");
 return -VAR_0;
}
