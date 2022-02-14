
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl2830_dev {int filters; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct rtl2830_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int,int*,int) ;
 int FUNC_4 (int,int*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0, u8 VAR_1, u16 VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_0->demodulator_priv;
 struct rtl2830_dev *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;
 u8 VAR_7[4];

 FUNC_1(&VAR_4->dev, "index=%d pid=%04x onoff=%d\n",
  VAR_1, VAR_2, VAR_3);


 if (VAR_2 > 0x1fff || VAR_1 > 32)
  return 0;

 if (VAR_3)
  FUNC_4(VAR_1, &VAR_5->filters);
 else
  FUNC_0(VAR_1, &VAR_5->filters);


 VAR_7[0] = (VAR_5->filters >> 0) & 0xff;
 VAR_7[1] = (VAR_5->filters >> 8) & 0xff;
 VAR_7[2] = (VAR_5->filters >> 16) & 0xff;
 VAR_7[3] = (VAR_5->filters >> 24) & 0xff;
 VAR_6 = FUNC_3(VAR_4, 0x062, VAR_7, 4);
 if (VAR_6)
  goto err;


 VAR_7[0] = (VAR_2 >> 8) & 0xff;
 VAR_7[1] = (VAR_2 >> 0) & 0xff;
 VAR_6 = FUNC_3(VAR_4, 0x066 + 2 * VAR_1, VAR_7, 2);
 if (VAR_6)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_4->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
