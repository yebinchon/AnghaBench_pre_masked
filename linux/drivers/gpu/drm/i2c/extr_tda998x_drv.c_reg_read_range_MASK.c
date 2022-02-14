
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {int mutex; struct i2c_client* hdmi; } ;
struct i2c_client {int dev; } ;
typedef int addr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 int FUNC_3 (struct i2c_client*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tda998x_priv*,int ) ;

__attribute__((used)) static int
FUNC_7(struct tda998x_priv *VAR_0, u16 VAR_1, char *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_0->hdmi;
 u8 VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_4(&VAR_0->mutex);
 VAR_6 = FUNC_6(VAR_0, VAR_1);
 if (VAR_6 < 0)
  goto out;

 VAR_6 = FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_2(VAR_4, VAR_2, VAR_3);
 if (VAR_6 < 0)
  goto fail;

 goto out;

fail:
 FUNC_1(&VAR_4->dev, "Error %d reading from 0x%x\n", VAR_6, VAR_1);
out:
 FUNC_5(&VAR_0->mutex);
 return VAR_6;
}
