
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ strength; int delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {struct i2c_client** client; } ;
struct TYPE_3__ {scalar_t__ scale; int uvalue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct cxd2820r_priv *VAR_3 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client[0];
 struct dtv_frontend_properties *VAR_5 = &VAR_1->dtv_property_cache;

 FUNC_0(&VAR_4->dev, "delivery_system=%d\n", VAR_5->delivery_system);

 if (VAR_5->strength.stat[0].scale == VAR_0)
  *VAR_2 = VAR_5->strength.stat[0].uvalue;
 else
  *VAR_2 = 0;

 return 0;
}
