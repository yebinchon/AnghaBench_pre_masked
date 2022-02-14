
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dvb_frontend_tune_settings {int dummy; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {struct i2c_client** client; } ;


 int VAR_0 ;



 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_tune_settings*) ;
 int FUNC_1 (struct dvb_frontend*,struct dvb_frontend_tune_settings*) ;
 int FUNC_2 (struct dvb_frontend*,struct dvb_frontend_tune_settings*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
          struct dvb_frontend_tune_settings *VAR_2)
{
 struct cxd2820r_priv *VAR_3 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client[0];
 struct dtv_frontend_properties *VAR_5 = &VAR_1->dtv_property_cache;
 int VAR_6;

 FUNC_3(&VAR_4->dev, "delivery_system=%d\n", VAR_5->delivery_system);

 switch (VAR_5->delivery_system) {
 case 129:
  VAR_6 = FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_1, VAR_2);
  break;
 case 130:
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
