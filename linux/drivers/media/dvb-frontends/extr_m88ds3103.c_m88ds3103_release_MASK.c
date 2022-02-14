
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88ds3103_dev {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct dvb_frontend {struct m88ds3103_dev* demodulator_priv; } ;


 int FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct m88ds3103_dev *VAR_1 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_2 = VAR_1->client;

 FUNC_0(VAR_2);
}
