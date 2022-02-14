
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max34440_data {scalar_t__ id; int info; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max34440_data* FUNC_0 (int *,int,int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct i2c_client*,struct max34440_data*) ;
 int FUNC_2 (struct i2c_client*,struct i2c_device_id const*,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4,
     const struct i2c_device_id *VAR_5)
{
 struct max34440_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_4->dev, sizeof(struct max34440_data),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->id = VAR_5->driver_data;
 VAR_6->info = VAR_2[VAR_5->driver_data];

 if (VAR_6->id == VAR_3) {
  VAR_7 = FUNC_1(VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 return FUNC_2(VAR_4, VAR_5, &VAR_6->info);
}
