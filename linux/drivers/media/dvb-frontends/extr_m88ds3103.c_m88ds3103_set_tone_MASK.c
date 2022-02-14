
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m88ds3103_dev {TYPE_1__* cfg; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_2__ {int envelope_mode; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct m88ds3103_dev*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_2,
 enum fe_sec_tone_mode VAR_3)
{
 struct m88ds3103_dev *VAR_4 = VAR_2->demodulator_priv;
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_0(&VAR_5->dev, "fe_sec_tone_mode=%d\n", VAR_3);

 if (!VAR_4->warm) {
  VAR_6 = -VAR_0;
  goto err;
 }

 switch (VAR_3) {
 case 128:
  VAR_8 = 0;
  VAR_9 = 0x47;
  break;
 case 129:
  VAR_8 = 1;
  VAR_9 = 0x00;
  break;
 default:
  FUNC_0(&VAR_5->dev, "invalid fe_sec_tone_mode\n");
  VAR_6 = -VAR_1;
  goto err;
 }

 VAR_7 = VAR_8 << 7 | VAR_4->cfg->envelope_mode << 5;
 VAR_6 = FUNC_1(VAR_4, 0xa2, 0xe0, VAR_7);
 if (VAR_6)
  goto err;

 VAR_7 = 1 << 2;
 VAR_6 = FUNC_1(VAR_4, 0xa1, VAR_9, VAR_7);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_5->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
