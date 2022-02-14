
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {int last_tune_failed; int delivery_system; struct i2c_client** client; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
typedef enum dvbfe_search { ____Placeholder_dvbfe_search } dvbfe_search ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static enum dvbfe_search FUNC_6(struct dvb_frontend *VAR_4)
{
 struct cxd2820r_priv *VAR_5 = VAR_4->demodulator_priv;
 struct i2c_client *VAR_6 = VAR_5->client[0];
 struct dtv_frontend_properties *VAR_7 = &VAR_4->dtv_property_cache;
 int VAR_8, VAR_9;
 enum fe_status VAR_10 = 0;

 FUNC_4(&VAR_6->dev, "delivery_system=%d\n", VAR_7->delivery_system);


 if (VAR_5->last_tune_failed) {
  if (VAR_5->delivery_system == 130) {
   VAR_8 = FUNC_2(VAR_4);
   if (VAR_8)
    goto error;

   VAR_7->delivery_system = 129;
  } else if (VAR_5->delivery_system == 129) {
   VAR_8 = FUNC_3(VAR_4);
   if (VAR_8)
    goto error;

   VAR_7->delivery_system = 130;
  }
 }


 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  goto error;


 switch (VAR_5->delivery_system) {
 case 130:
 case 131:
  VAR_9 = 20;
  break;
 case 129:
  VAR_9 = 40;
  break;
 case 128:
 default:
  VAR_9 = 0;
  break;
 }


 for (; VAR_9 > 0; VAR_9--) {
  FUNC_4(&VAR_6->dev, "loop=%d\n", VAR_9);
  FUNC_5(50);
  VAR_8 = FUNC_0(VAR_4, &VAR_10);
  if (VAR_8)
   goto error;

  if (VAR_10 & VAR_3)
   break;
 }


 if (VAR_10 & VAR_3) {
  VAR_5->last_tune_failed = 0;
  return VAR_2;
 } else {
  VAR_5->last_tune_failed = 1;
  return VAR_0;
 }

error:
 FUNC_4(&VAR_6->dev, "failed=%d\n", VAR_8);
 return VAR_1;
}
