
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {struct i2c_client** client; } ;


 int VAR_0 ;



 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (struct dvb_frontend*) ;
 int FUNC_5 (int *,char*,...) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_1)
{
 struct cxd2820r_priv *VAR_2 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client[0];
 struct dtv_frontend_properties *VAR_4 = &VAR_1->dtv_property_cache;
 int VAR_5;

 FUNC_5(&VAR_3->dev, "delivery_system=%d\n", VAR_4->delivery_system);

 switch (VAR_4->delivery_system) {
 case 129:
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 < 0)
   goto err;
  VAR_5 = FUNC_3(VAR_1);
  if (VAR_5 < 0)
   goto err;
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 < 0)
   goto err;
  VAR_5 = FUNC_4(VAR_1);
  if (VAR_5 < 0)
   goto err;
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_1);
  if (VAR_5 < 0)
   goto err;
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 < 0)
   goto err;
  break;
 default:
  FUNC_5(&VAR_3->dev, "invalid delivery_system\n");
  VAR_5 = -VAR_0;
  break;
 }
err:
 return VAR_5;
}
