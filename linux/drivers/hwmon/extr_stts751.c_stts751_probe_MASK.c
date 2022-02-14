
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stts751_priv {int notify_max; int notify_min; int config; int dev; int access_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,struct stts751_priv*,int ) ;
 struct stts751_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,struct stts751_priv*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (struct stts751_priv*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
    const struct i2c_device_id *VAR_10)
{
 struct stts751_priv *VAR_11;
 int VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->client = VAR_9;
 VAR_11->notify_max = 1;
 VAR_11->notify_min = 1;
 FUNC_6(VAR_9, VAR_11);
 FUNC_9(&VAR_11->access_lock);

 if (FUNC_2(&VAR_9->dev,
        "smbus-timeout-disable")) {
  VAR_13 = FUNC_3(&VAR_9->dev,
            "smbus-timeout-disable");

  VAR_12 = FUNC_8(VAR_9, VAR_7,
      VAR_13 ? 0 : 0x80);
  if (VAR_12)
   return VAR_12;
 }

 VAR_14 = FUNC_7(VAR_9, VAR_6);
 if (VAR_14 < 0)
  return -VAR_0;
 if (VAR_14 != 0x1) {
  FUNC_1(&VAR_9->dev, "Chip revision 0x%x is untested\n",
   VAR_14);
 }

 VAR_12 = FUNC_10(VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11->config &= ~(VAR_4 | VAR_3);
 VAR_12 = FUNC_8(VAR_9, VAR_5, VAR_11->config);
 if (VAR_12)
  return VAR_12;

 VAR_11->dev = FUNC_4(&VAR_9->dev,
       VAR_9->name, VAR_11,
       VAR_8);
 return FUNC_0(VAR_11->dev);
}
