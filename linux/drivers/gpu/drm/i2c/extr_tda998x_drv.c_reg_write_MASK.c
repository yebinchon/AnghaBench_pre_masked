
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {int mutex; struct i2c_client* hdmi; } ;
struct i2c_client {int dev; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tda998x_priv*,int ) ;

__attribute__((used)) static void
FUNC_6(struct tda998x_priv *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->hdmi;
 u8 VAR_4[] = {FUNC_0(VAR_1), VAR_2};
 int VAR_5;

 FUNC_3(&VAR_0->mutex);
 VAR_5 = FUNC_5(VAR_0, VAR_1);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_2(VAR_3, VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  FUNC_1(&VAR_3->dev, "Error %d writing to 0x%x\n", VAR_5, VAR_1);
out:
 FUNC_4(&VAR_0->mutex);
}
