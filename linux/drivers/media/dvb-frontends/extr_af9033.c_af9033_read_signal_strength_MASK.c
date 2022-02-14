
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9033_dev* demodulator_priv; } ;
struct dtv_frontend_properties {int frequency; } ;
struct TYPE_2__ {struct dtv_frontend_properties dtv_property_cache; } ;
struct af9033_dev {int regmap; scalar_t__ is_af9035; TYPE_1__ fe; struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,...) ;
 unsigned int** VAR_0 ;
 int FUNC_1 (int ,int,unsigned int*,int) ;
 int FUNC_2 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct af9033_dev *VAR_3 = VAR_1->demodulator_priv;
 struct i2c_client *VAR_4 = VAR_3->client;
 struct dtv_frontend_properties *VAR_5 = &VAR_3->fe.dtv_property_cache;
 int VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;
 u8 VAR_10, VAR_11[7];

 FUNC_0(&VAR_4->dev, "\n");

 if (VAR_3->is_af9035) {

  VAR_6 = FUNC_2(VAR_3->regmap, 0x800048, &VAR_9);
  if (VAR_6)
   goto err;


  *VAR_2 = VAR_9 * 0xffff / 100;
 } else {
  VAR_6 = FUNC_2(VAR_3->regmap, 0x8000f7, &VAR_9);
  if (VAR_6)
   goto err;

  VAR_6 = FUNC_1(VAR_3->regmap, 0x80f900, VAR_11, 7);
  if (VAR_6)
   goto err;

  if (VAR_5->frequency <= 300000000)
   VAR_10 = 7;
  else
   VAR_10 = 4;

  VAR_8 = (VAR_9 - 100 - VAR_10) -
   VAR_0[((VAR_11[3] >> 0) & 3)][((VAR_11[6] >> 0) & 7)];

  if (VAR_8 < -15)
   VAR_7 = 0;
  else if ((VAR_8 >= -15) && (VAR_8 < 0))
   VAR_7 = (2 * (VAR_8 + 15)) / 3;
  else if ((VAR_8 >= 0) && (VAR_8 < 20))
   VAR_7 = 4 * VAR_8 + 10;
  else if ((VAR_8 >= 20) && (VAR_8 < 35))
   VAR_7 = (2 * (VAR_8 - 20)) / 3 + 90;
  else
   VAR_7 = 100;


  *VAR_2 = VAR_7 * 0xffff / 100;
 }

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
