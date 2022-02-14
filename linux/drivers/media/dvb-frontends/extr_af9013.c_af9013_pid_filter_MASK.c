
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct af9013_state* demodulator_priv; } ;
struct af9013_state {int regmap; struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int,int*,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, u8 VAR_1, u16 VAR_2,
        int VAR_3)
{
 struct af9013_state *VAR_4 = VAR_0->demodulator_priv;
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 u8 VAR_7[2];

 FUNC_0(&VAR_5->dev, "index %d, pid %04x, onoff %d\n",
  VAR_1, VAR_2, VAR_3);

 if (VAR_2 > 0x1fff) {

  VAR_6 = 0;
  goto err;
 }

 VAR_7[0] = (VAR_2 >> 0) & 0xff;
 VAR_7[1] = (VAR_2 >> 8) & 0xff;
 VAR_6 = FUNC_1(VAR_4->regmap, 0xd505, VAR_7, 2);
 if (VAR_6)
  goto err;
 VAR_6 = FUNC_2(VAR_4->regmap, 0xd504, VAR_3 << 5 | VAR_1 << 0);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_5->dev, "failed %d\n", VAR_6);
 return VAR_6;
}
