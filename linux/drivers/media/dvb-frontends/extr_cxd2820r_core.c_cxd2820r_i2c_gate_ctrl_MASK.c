
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {int * regmap; struct i2c_client** client; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct cxd2820r_priv *VAR_2 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client[0];

 FUNC_0(&VAR_3->dev, "enable=%d\n", VAR_1);

 return FUNC_1(VAR_2->regmap[0], 0x00db, 0x01, VAR_1 ? 1 : 0);
}
