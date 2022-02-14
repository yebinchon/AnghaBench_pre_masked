
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm1021_data {scalar_t__ type; int ** groups; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_3 ;
 struct device* FUNC_2 (struct device*,int ,struct adm1021_data*,int **) ;
 struct adm1021_data* FUNC_3 (struct device*,int,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct adm1021_data *VAR_9;
 struct device *VAR_10;

 VAR_9 = FUNC_3(VAR_8, sizeof(struct adm1021_data), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->client = VAR_6;
 VAR_9->type = VAR_7->driver_data;
 FUNC_4(&VAR_9->update_lock);


 if (VAR_9->type != VAR_4 && !VAR_5)
  FUNC_1(VAR_6);

 VAR_9->groups[0] = &VAR_2;
 if (VAR_9->type != VAR_4)
  VAR_9->groups[1] = &VAR_3;

 VAR_10 = FUNC_2(VAR_8, VAR_6->name,
          VAR_9, VAR_9->groups);

 return FUNC_0(VAR_10);
}
