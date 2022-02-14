
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10071_reg_val_mask {int member_0; int member_1; int member_2; int mask; int val; int reg; } ;
struct tda10071_dev {int warm; struct i2c_client* client; } ;
struct tda10071_cmd {int* args; int len; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;


 int FUNC_0 (struct tda10071_reg_val_mask*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct tda10071_dev*,struct tda10071_cmd*) ;
 int FUNC_3 (struct tda10071_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct tda10071_dev *VAR_3 = VAR_2->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client;
 struct tda10071_cmd VAR_5;
 int VAR_6, VAR_7;
 struct tda10071_reg_val_mask VAR_8[] = {
  { 0xcd, 0x07, 0x07 },
  { 0x80, 0x02, 0x02 },
  { 0xcd, 0xc0, 0xc0 },
  { 0xce, 0x1b, 0x1b },
  { 0x9d, 0x01, 0x01 },
  { 0x9d, 0x02, 0x02 },
  { 0x9e, 0x01, 0x01 },
  { 0x87, 0x80, 0x80 },
  { 0xce, 0x08, 0x08 },
  { 0xce, 0x10, 0x10 },
 };

 if (!VAR_3->warm) {
  VAR_6 = -VAR_1;
  goto error;
 }

 VAR_5.args[0] = VAR_0;
 VAR_5.args[1] = 0;
 VAR_5.args[2] = 1;
 VAR_5.len = 3;
 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_6)
  goto error;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++) {
  VAR_6 = FUNC_3(VAR_3, VAR_8[VAR_7].reg, VAR_8[VAR_7].val,
   VAR_8[VAR_7].mask);
  if (VAR_6)
   goto error;
 }

 return VAR_6;
error:
 FUNC_1(&VAR_4->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
