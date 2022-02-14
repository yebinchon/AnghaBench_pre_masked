
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {scalar_t__ post_bit_error; scalar_t__ post_bit_error_prev_dvbv3; struct i2c_client** client; } ;


 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct cxd2820r_priv *VAR_2 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client[0];
 struct dtv_frontend_properties *VAR_4 = &VAR_0->dtv_property_cache;

 FUNC_0(&VAR_3->dev, "delivery_system=%d\n", VAR_4->delivery_system);

 *VAR_1 = (VAR_2->post_bit_error - VAR_2->post_bit_error_prev_dvbv3);
 VAR_2->post_bit_error_prev_dvbv3 = VAR_2->post_bit_error;

 return 0;
}
