
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10071_dev {int regmap; int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int len; scalar_t__* args; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;
struct dvb_diseqc_slave_reply {unsigned int msg_len; int msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;
 int FUNC_3 (struct tda10071_dev*,struct tda10071_cmd*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3,
 struct dvb_diseqc_slave_reply *VAR_4)
{
 struct tda10071_dev *VAR_5 = VAR_3->demodulator_priv;
 struct i2c_client *VAR_6 = VAR_5->client;
 struct tda10071_cmd VAR_7;
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 if (!VAR_5->warm) {
  VAR_8 = -VAR_1;
  goto error;
 }

 FUNC_0(&VAR_6->dev, "\n");


 for (VAR_9 = 500, VAR_10 = 0; VAR_9 && !VAR_10; VAR_9--) {
  VAR_8 = FUNC_2(VAR_5->regmap, 0x47, &VAR_10);
  if (VAR_8)
   goto error;
  VAR_10 = (VAR_10 >> 1) & 1;
  FUNC_4(10000, 20000);
 }

 FUNC_0(&VAR_6->dev, "loop=%d\n", VAR_9);

 if (VAR_9 == 0) {
  VAR_8 = -VAR_2;
  goto error;
 }


 VAR_8 = FUNC_2(VAR_5->regmap, 0x46, &VAR_10);
 if (VAR_8)
  goto error;

 VAR_4->msg_len = VAR_10 & 0x1f;
 if (VAR_4->msg_len > sizeof(VAR_4->msg))
  VAR_4->msg_len = sizeof(VAR_4->msg);


 VAR_7.args[0] = VAR_0;
 VAR_7.args[1] = 0;
 VAR_7.len = 2;
 VAR_8 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_8)
  goto error;

 VAR_8 = FUNC_1(VAR_5->regmap, VAR_7.len, VAR_4->msg,
          VAR_4->msg_len);
 if (VAR_8)
  goto error;

 return VAR_8;
error:
 FUNC_0(&VAR_6->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
