
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {int regmap; struct i2c_client* client; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct af9013_state *VAR_2 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_3->dev, "\n");


 VAR_4 = FUNC_2(VAR_2->regmap, 0xd730, 0x01, 0x00);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_2(VAR_2->regmap, 0xd417, 0x10, 0x10);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_3(VAR_2->regmap, 0xaeff, 0x01);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_1(VAR_2->regmap, 0xd417, VAR_5,
           (VAR_5 >> 1) & 0x01, 5000, 1000000);
 if (VAR_4)
  goto err;

 if (!((VAR_5 >> 1) & 0x01)) {
  VAR_4 = -VAR_0;
  goto err;
 }


 VAR_4 = FUNC_2(VAR_2->regmap, 0xd73a, 0x08, 0x08);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed %d\n", VAR_4);
 return VAR_4;
}
