
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9033_dev* demodulator_priv; } ;
struct TYPE_6__ {TYPE_2__* stat; } ;
struct dtv_frontend_properties {TYPE_3__ cnr; } ;
struct TYPE_4__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct af9033_dev {int regmap; scalar_t__ is_af9035; TYPE_1__ fe; struct i2c_client* client; } ;
struct TYPE_5__ {scalar_t__ scale; int svalue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct af9033_dev *VAR_3 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client;
 struct dtv_frontend_properties *VAR_5 = &VAR_3->fe.dtv_property_cache;
 int VAR_6;
 unsigned int VAR_7;

 FUNC_0(&VAR_4->dev, "\n");


 if (VAR_5->cnr.stat[0].scale == VAR_0) {

  if (VAR_3->is_af9035) {

   *VAR_2 = FUNC_1(VAR_5->cnr.stat[0].svalue, 100);
  } else {

   *VAR_2 = FUNC_1(VAR_5->cnr.stat[0].svalue, 1000);


   VAR_6 = FUNC_2(VAR_3->regmap, 0x80f903, &VAR_7);
   if (VAR_6)
    goto err;


   switch ((VAR_7 >> 0) & 3) {
   case 0:
    *VAR_2 = *VAR_2 * 0xffff / 23;
    break;
   case 1:
    *VAR_2 = *VAR_2 * 0xffff / 26;
    break;
   case 2:
    *VAR_2 = *VAR_2 * 0xffff / 32;
    break;
   default:
    goto err;
   }
  }
 } else {
  *VAR_2 = 0;
 }

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
