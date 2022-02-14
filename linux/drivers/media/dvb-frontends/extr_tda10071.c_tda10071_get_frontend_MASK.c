
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tda10071_dev {int fe_status; int regmap; int warm; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tda10071_dev* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; int symbol_rate; int pilot; int inversion; int delivery_system; int fec_inner; int modulation; } ;
struct TYPE_3__ {int val; int delivery_system; int fec; int modulation; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_6,
     struct dtv_frontend_properties *VAR_7)
{
 struct tda10071_dev *VAR_8 = VAR_6->demodulator_priv;
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10, VAR_11;
 u8 VAR_12[5], VAR_13;

 if (!VAR_8->warm || !(VAR_8->fe_status & VAR_0)) {
  VAR_10 = 0;
  goto error;
 }

 VAR_10 = FUNC_2(VAR_8->regmap, 0x30, VAR_12, 5);
 if (VAR_10)
  goto error;

 VAR_13 = VAR_12[0] & 0x3f;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  if (VAR_13 == VAR_5[VAR_11].val) {
   VAR_7->modulation = VAR_5[VAR_11].modulation;
   VAR_7->fec_inner = VAR_5[VAR_11].fec;
   VAR_7->delivery_system = VAR_5[VAR_11].delivery_system;
  }
 }

 switch ((VAR_12[1] >> 0) & 0x01) {
 case 0:
  VAR_7->inversion = VAR_2;
  break;
 case 1:
  VAR_7->inversion = VAR_1;
  break;
 }

 switch ((VAR_12[1] >> 7) & 0x01) {
 case 0:
  VAR_7->pilot = VAR_3;
  break;
 case 1:
  VAR_7->pilot = VAR_4;
  break;
 }

 VAR_7->frequency = (VAR_12[2] << 16) | (VAR_12[3] << 8) | (VAR_12[4] << 0);

 VAR_10 = FUNC_2(VAR_8->regmap, 0x52, VAR_12, 3);
 if (VAR_10)
  goto error;

 VAR_7->symbol_rate = ((VAR_12[0] << 16) | (VAR_12[1] << 8) | (VAR_12[2] << 0)) * 1000;

 return VAR_10;
error:
 FUNC_1(&VAR_9->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
