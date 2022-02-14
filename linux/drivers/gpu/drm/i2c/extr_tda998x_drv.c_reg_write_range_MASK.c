
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tda998x_priv {int mutex; struct i2c_client* hdmi; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct i2c_client*,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tda998x_priv*,int ) ;

__attribute__((used)) static void
FUNC_7(struct tda998x_priv *VAR_1, u16 VAR_2, u8 *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->hdmi;

 u8 VAR_6[VAR_0 + 1];
 int VAR_7;

 if (VAR_4 > VAR_0) {
  FUNC_1(&VAR_5->dev, "Fixed write buffer too small (%d)\n",
    VAR_0);
  return;
 }

 VAR_6[0] = FUNC_0(VAR_2);
 FUNC_3(&VAR_6[1], VAR_3, VAR_4);

 FUNC_4(&VAR_1->mutex);
 VAR_7 = FUNC_6(VAR_1, VAR_2);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_4 + 1);
 if (VAR_7 < 0)
  FUNC_1(&VAR_5->dev, "Error %d writing to 0x%x\n", VAR_7, VAR_2);
out:
 FUNC_5(&VAR_1->mutex);
}
