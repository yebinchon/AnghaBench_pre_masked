
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl2832_dev {int regmap; scalar_t__ slave_ts; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct rtl2832_dev *VAR_2 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;
 u8 VAR_5;

 FUNC_0(&VAR_3->dev, "onoff=%d, slave_ts=%d\n", VAR_1, VAR_2->slave_ts);


 if (VAR_1)
  VAR_5 = 0x80;
 else
  VAR_5 = 0x00;

 if (VAR_2->slave_ts)
  VAR_4 = FUNC_1(VAR_2->regmap, 0x021, 0xc0, VAR_5);
 else
  VAR_4 = FUNC_1(VAR_2->regmap, 0x061, 0xc0, VAR_5);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
