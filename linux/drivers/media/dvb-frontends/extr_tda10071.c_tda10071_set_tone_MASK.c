
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10071_dev {int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct tda10071_dev*,struct tda10071_cmd*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3,
 enum fe_sec_tone_mode VAR_4)
{
 struct tda10071_dev *VAR_5 = VAR_3->demodulator_priv;
 struct i2c_client *VAR_6 = VAR_5->client;
 struct tda10071_cmd VAR_7;
 int VAR_8;
 u8 VAR_9;

 if (!VAR_5->warm) {
  VAR_8 = -VAR_1;
  goto error;
 }

 FUNC_0(&VAR_6->dev, "tone_mode=%d\n", VAR_4);

 switch (VAR_4) {
 case 128:
  VAR_9 = 1;
  break;
 case 129:
  VAR_9 = 0;
  break;
 default:
  FUNC_0(&VAR_6->dev, "invalid fe_sec_tone_mode\n");
  VAR_8 = -VAR_2;
  goto error;
 }

 VAR_7.args[0] = VAR_0;
 VAR_7.args[1] = 0;
 VAR_7.args[2] = 0x00;
 VAR_7.args[3] = 0x00;
 VAR_7.args[4] = VAR_9;
 VAR_7.len = 5;
 VAR_8 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_8)
  goto error;

 return VAR_8;
error:
 FUNC_0(&VAR_6->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
