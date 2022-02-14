
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val_mask {int member_0; int member_1; int member_2; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct cxd2820r_priv* demodulator_priv; } ;
struct cxd2820r_priv {int delivery_system; struct i2c_client** client; } ;


 int FUNC_0 (struct reg_val_mask*) ;
 int VAR_0 ;
 int FUNC_1 (struct cxd2820r_priv*,struct reg_val_mask*,int ) ;
 int FUNC_2 (int *,char*,...) ;

int FUNC_3(struct dvb_frontend *VAR_1)
{
 struct cxd2820r_priv *VAR_2 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client[0];
 int VAR_4;
 struct reg_val_mask VAR_5[] = {
  { 0x000ff, 0x1f, 0xff },
  { 0x00085, 0x00, 0xff },
  { 0x00088, 0x01, 0xff },
  { 0x00081, 0x00, 0xff },
  { 0x00080, 0x00, 0xff },
 };

 FUNC_2(&VAR_3->dev, "\n");

 VAR_2->delivery_system = VAR_0;

 VAR_4 = FUNC_1(VAR_2, VAR_5, FUNC_0(VAR_5));
 if (VAR_4)
  goto error;

 return VAR_4;
error:
 FUNC_2(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
