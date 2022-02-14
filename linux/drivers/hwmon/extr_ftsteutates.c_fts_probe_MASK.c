
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; } ;
struct fts_data {struct i2c_client* client; int access_lock; int update_lock; } ;
struct device {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (int *,struct fts_data*) ;
 struct device* FUNC_5 (int *,char*,struct fts_data*,int ) ;
 struct fts_data* FUNC_6 (int *,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct fts_data*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6, const struct i2c_device_id *VAR_7)
{
 u8 VAR_8;
 struct fts_data *VAR_9;
 int VAR_10;
 s8 VAR_11;
 struct device *VAR_12;

 if (VAR_6->addr != 0x73)
  return -VAR_0;


 VAR_11 = FUNC_8(VAR_6, VAR_2);
 if (VAR_11 > 0 && (VAR_11 & 0xF0) == 0x10) {
  switch (VAR_11 & 0x0F) {
  case 0x01:
   break;
  default:
   FUNC_2(&VAR_6->dev,
    "No Baseboard Management Controller\n");
   return -VAR_0;
  }
 } else {
  FUNC_2(&VAR_6->dev, "No fujitsu board\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_6(&VAR_6->dev, sizeof(struct fts_data),
       VAR_4);
 if (!VAR_9)
  return -VAR_1;

 FUNC_9(&VAR_9->update_lock);
 FUNC_9(&VAR_9->access_lock);
 VAR_9->client = VAR_6;
 FUNC_4(&VAR_6->dev, VAR_9);

 VAR_10 = FUNC_8(VAR_6, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_8 = VAR_10;

 VAR_12 = FUNC_5(&VAR_6->dev,
          "ftsteutates",
          VAR_9,
          VAR_5);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_6->dev, "Detected FTS Teutates chip, revision: %d.%d\n",
   (VAR_8 & 0xF0) >> 4, VAR_8 & 0x0F);
 return 0;
}
