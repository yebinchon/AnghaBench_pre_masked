
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3944_platform_data {int dummy; } ;
struct lp3944_data {int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct lp3944_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 struct lp3944_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct lp3944_data*) ;
 int FUNC_6 (struct i2c_client*,struct lp3944_data*,struct lp3944_platform_data*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5,
      const struct i2c_device_id *VAR_6)
{
 struct lp3944_platform_data *VAR_7 =
   FUNC_1(&VAR_5->dev);
 struct lp3944_data *VAR_8;
 int VAR_9;

 if (VAR_7 == ((void*)0)) {
  FUNC_0(&VAR_5->dev, "no platform data\n");
  return -VAR_0;
 }


 if (!FUNC_4(VAR_5->adapter,
    VAR_4)) {
  FUNC_0(&VAR_5->dev, "insufficient functionality!\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(struct lp3944_data),
   VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->client = VAR_5;
 FUNC_5(VAR_5, VAR_8);

 FUNC_7(&VAR_8->lock);

 VAR_9 = FUNC_6(VAR_5, VAR_8, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(&VAR_5->dev, "lp3944 enabled\n");
 return 0;
}
