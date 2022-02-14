
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct cs2000_priv {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cs2000_priv*) ;
 int FUNC_1 (struct cs2000_priv*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct cs2000_priv*) ;
 struct cs2000_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,struct cs2000_priv*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2,
   const struct i2c_device_id *VAR_3)
{
 struct cs2000_priv *VAR_4;
 struct device *VAR_5 = &VAR_2->dev;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->client = VAR_2;
 FUNC_5(VAR_2, VAR_4);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  goto probe_err;

 return 0;

probe_err:
 FUNC_2(VAR_2);

 return VAR_6;
}
