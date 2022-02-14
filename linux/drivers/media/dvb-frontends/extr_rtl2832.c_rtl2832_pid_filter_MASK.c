
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl2832_dev {int filters; int regmap; scalar_t__ slave_ts; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct rtl2832_dev* demodulator_priv; } ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (int ,int,int*,int) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, u8 VAR_1, u16 VAR_2,
         int VAR_3)
{
 struct rtl2832_dev *VAR_4 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 u8 VAR_7[4];

 FUNC_1(&VAR_5->dev, "index=%d pid=%04x onoff=%d slave_ts=%d\n",
  VAR_1, VAR_2, VAR_3, VAR_4->slave_ts);


 if (VAR_2 > 0x1fff || VAR_1 > 32)
  return 0;

 if (VAR_3)
  FUNC_3(VAR_1, &VAR_4->filters);
 else
  FUNC_0(VAR_1, &VAR_4->filters);


 VAR_7[0] = (VAR_4->filters >> 0) & 0xff;
 VAR_7[1] = (VAR_4->filters >> 8) & 0xff;
 VAR_7[2] = (VAR_4->filters >> 16) & 0xff;
 VAR_7[3] = (VAR_4->filters >> 24) & 0xff;

 if (VAR_4->slave_ts)
  VAR_6 = FUNC_2(VAR_4->regmap, 0x022, VAR_7, 4);
 else
  VAR_6 = FUNC_2(VAR_4->regmap, 0x062, VAR_7, 4);
 if (VAR_6)
  goto err;


 VAR_7[0] = (VAR_2 >> 8) & 0xff;
 VAR_7[1] = (VAR_2 >> 0) & 0xff;

 if (VAR_4->slave_ts)
  VAR_6 = FUNC_2(VAR_4->regmap, 0x026 + 2 * VAR_1, VAR_7, 2);
 else
  VAR_6 = FUNC_2(VAR_4->regmap, 0x066 + 2 * VAR_1, VAR_7, 2);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_5->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
