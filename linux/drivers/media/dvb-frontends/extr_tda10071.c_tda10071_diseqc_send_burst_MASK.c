
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda10071_dev {int regmap; int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;
typedef enum fe_sec_mini_cmd { ____Placeholder_fe_sec_mini_cmd } fe_sec_mini_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,unsigned int*) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (struct tda10071_dev*,struct tda10071_cmd*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4,
 enum fe_sec_mini_cmd VAR_5)
{
 struct tda10071_dev *VAR_6 = VAR_4->demodulator_priv;
 struct i2c_client *VAR_7 = VAR_6->client;
 struct tda10071_cmd VAR_8;
 int VAR_9, VAR_10;
 unsigned int VAR_11;
 u8 VAR_12;

 if (!VAR_6->warm) {
  VAR_9 = -VAR_1;
  goto error;
 }

 FUNC_0(&VAR_7->dev, "fe_sec_mini_cmd=%d\n", VAR_5);

 switch (VAR_5) {
 case 129:
  VAR_12 = 0;
  break;
 case 128:
  VAR_12 = 1;
  break;
 default:
  FUNC_0(&VAR_7->dev, "invalid fe_sec_mini_cmd\n");
  VAR_9 = -VAR_2;
  goto error;
 }


 for (VAR_10 = 500, VAR_11 = 0; VAR_10 && !VAR_11; VAR_10--) {
  VAR_9 = FUNC_1(VAR_6->regmap, 0x47, &VAR_11);
  if (VAR_9)
   goto error;
  VAR_11 = (VAR_11 >> 0) & 1;
  FUNC_4(10000, 20000);
 }

 FUNC_0(&VAR_7->dev, "loop=%d\n", VAR_10);

 if (VAR_10 == 0) {
  VAR_9 = -VAR_3;
  goto error;
 }

 VAR_9 = FUNC_2(VAR_6->regmap, 0x47, 0x01, 0x00);
 if (VAR_9)
  goto error;

 VAR_8.args[0] = VAR_0;
 VAR_8.args[1] = 0;
 VAR_8.args[2] = VAR_12;
 VAR_8.len = 3;
 VAR_9 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_9)
  goto error;

 return VAR_9;
error:
 FUNC_0(&VAR_7->dev, "failed=%d\n", VAR_9);
 return VAR_9;
}
