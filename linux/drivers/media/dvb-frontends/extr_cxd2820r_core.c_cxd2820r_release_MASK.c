
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {struct i2c_client** client; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct cxd2820r_priv *VAR_1 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_2 = VAR_1->client[0];

 FUNC_0(&VAR_2->dev, "\n");

 FUNC_1(VAR_2);

 return;
}
