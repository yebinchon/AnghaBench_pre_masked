
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc74_data {int valid; int temp_input; int lock; scalar_t__ next_update; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 struct tc74_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 struct tc74_data *VAR_6 = FUNC_2(VAR_5);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 VAR_8 = FUNC_4(&VAR_6->lock);
 if (VAR_8)
  return VAR_8;

 if (FUNC_6(VAR_4, VAR_6->next_update) || !VAR_6->valid) {
  s32 VAR_9;

  VAR_9 = FUNC_3(VAR_7, VAR_2);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_7->dev, "TC74_REG_CONFIG read err %d\n",
    (int)VAR_9);

   VAR_8 = VAR_9;
   goto ret_unlock;
  }

  if (!(VAR_9 & FUNC_0(6))) {


   VAR_8 = -VAR_0;
   goto ret_unlock;
  }

  VAR_9 = FUNC_3(VAR_7, VAR_3);
  if (VAR_9 < 0) {
   FUNC_1(&VAR_7->dev, "TC74_REG_TEMP read err %d\n",
    (int)VAR_9);

   VAR_8 = VAR_9;
   goto ret_unlock;
  }

  VAR_6->temp_input = VAR_9;
  VAR_6->next_update = VAR_4 + VAR_1 / 4;
  VAR_6->valid = 1;
 }

ret_unlock:
 FUNC_5(&VAR_6->lock);

 return VAR_8;
}
