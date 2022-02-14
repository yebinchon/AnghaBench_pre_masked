
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* demodulator_priv; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;
 u8 VAR_4;

 FUNC_0(&VAR_2->dev, "onoff=%d\n", VAR_1);


 if (VAR_1)
  VAR_4 = 0x80;
 else
  VAR_4 = 0x00;

 VAR_3 = FUNC_1(VAR_2, 0x061, 0x80, VAR_4);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_2->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
