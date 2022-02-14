
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m88ds3103_dev {int regmap; TYPE_1__* cfg; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;
typedef enum fe_sec_mini_cmd { ____Placeholder_fe_sec_mini_cmd } fe_sec_mini_cmd ;
struct TYPE_2__ {int envelope_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned long VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct m88ds3103_dev*,int,int,int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ,int,unsigned int*) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_5,
 enum fe_sec_mini_cmd VAR_6)
{
 struct m88ds3103_dev *VAR_7 = VAR_5->demodulator_priv;
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;

 FUNC_0(&VAR_8->dev, "fe_sec_mini_cmd=%d\n", VAR_6);

 if (!VAR_7->warm) {
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_10 = VAR_7->cfg->envelope_mode << 5;
 VAR_9 = FUNC_2(VAR_7, 0xa2, 0xe0, VAR_10);
 if (VAR_9)
  goto err;

 switch (VAR_6) {
 case 129:
  VAR_11 = 0x02;
  break;
 case 128:
  VAR_11 = 0x01;
  break;
 default:
  FUNC_0(&VAR_8->dev, "invalid fe_sec_mini_cmd\n");
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_9 = FUNC_5(VAR_7->regmap, 0xa1, VAR_11);
 if (VAR_9)
  goto err;



 VAR_12 = VAR_4 + FUNC_3(40);


 FUNC_7(8500, 12500);

 for (VAR_10 = 1; !FUNC_6(VAR_4, VAR_12) && VAR_10;) {
  VAR_9 = FUNC_4(VAR_7->regmap, 0xa1, &VAR_10);
  if (VAR_9)
   goto err;
  VAR_10 = (VAR_10 >> 6) & 0x1;
 }

 if (VAR_10 == 0) {
  FUNC_0(&VAR_8->dev, "diseqc tx took %u ms\n",
   FUNC_1(VAR_4) -
   (FUNC_1(VAR_12) - 40));
 } else {
  FUNC_0(&VAR_8->dev, "diseqc tx timeout\n");

  VAR_9 = FUNC_2(VAR_7, 0xa1, 0xc0, 0x40);
  if (VAR_9)
   goto err;
 }

 VAR_9 = FUNC_2(VAR_7, 0xa2, 0xc0, 0x80);
 if (VAR_9)
  goto err;

 if (VAR_10 == 1) {
  VAR_9 = -VAR_2;
  goto err;
 }

 return 0;
err:
 FUNC_0(&VAR_8->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
