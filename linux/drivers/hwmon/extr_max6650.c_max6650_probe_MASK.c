
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct max6650_data {int nr_fans; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int of_node; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thermal_cooling_device*) ;
 int FUNC_2 (struct thermal_cooling_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct device* FUNC_5 (struct device*,int ,struct max6650_data*,int *,int ) ;
 struct max6650_data* FUNC_6 (struct device*,int,int ) ;
 struct thermal_cooling_device* FUNC_7 (struct device*,int ,int ,struct max6650_data*,int *) ;
 int FUNC_8 (struct i2c_client*,struct max6650_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct max6650_data*,struct i2c_client*) ;
 int FUNC_10 (int *) ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct thermal_cooling_device *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 const struct of_device_id *VAR_11 =
  FUNC_11(FUNC_12(VAR_5), VAR_10);
 struct max6650_data *VAR_12;
 struct device *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_6(VAR_10, sizeof(struct max6650_data), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->client = VAR_7;
 FUNC_8(VAR_7, VAR_12);
 FUNC_10(&VAR_12->update_lock);
 VAR_12->nr_fans = VAR_11 ? (int)(uintptr_t)VAR_11->data : VAR_8->driver_data;




 VAR_14 = FUNC_9(VAR_12, VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_13 = FUNC_5(VAR_10,
        VAR_7->name, VAR_12,
        &VAR_3,
        VAR_6);
 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14)
  return VAR_14;

 if (FUNC_0(VAR_0)) {
  VAR_9 = FUNC_7(VAR_10,
      VAR_10->of_node, VAR_7->name,
      VAR_12, &VAR_4);
  if (FUNC_1(VAR_9)) {
   FUNC_4(VAR_10, "thermal cooling device register failed: %ld\n",
     FUNC_2(VAR_9));
  }
 }

 return 0;
}
