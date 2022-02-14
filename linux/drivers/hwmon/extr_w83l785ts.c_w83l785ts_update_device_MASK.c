
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83l785ts_data {int valid; int update_lock; scalar_t__ last_updated; void** temp; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct w83l785ts_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 void* FUNC_6 (struct i2c_client*,int ,void*) ;

__attribute__((used)) static struct w83l785ts_data *FUNC_7(struct device *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_4);
 struct w83l785ts_data *VAR_6 = FUNC_1(VAR_5);

 FUNC_2(&VAR_6->update_lock);

 if (!VAR_6->valid || FUNC_4(VAR_3, VAR_6->last_updated + VAR_0 * 2)) {
  FUNC_0(&VAR_5->dev, "Updating w83l785ts data.\n");
  VAR_6->temp[0] = FUNC_6(VAR_5,
    VAR_1, VAR_6->temp[0]);
  VAR_6->temp[1] = FUNC_6(VAR_5,
    VAR_2, VAR_6->temp[1]);

  VAR_6->last_updated = VAR_3;
  VAR_6->valid = 1;
 }

 FUNC_3(&VAR_6->update_lock);

 return VAR_6;
}
