
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** info; int * ops; } ;
struct TYPE_3__ {int* config; int type; } ;
struct tmp421_data {unsigned long channels; int* temp_config; TYPE_2__ chip; TYPE_1__ temp_info; TYPE_1__** info; struct i2c_client* client; int update_lock; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct tmp421_data*,TYPE_2__*,int *) ;
 struct tmp421_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct device *VAR_9;
 struct tmp421_data *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_8, sizeof(struct tmp421_data), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_3(&VAR_10->update_lock);
 if (VAR_6->dev.of_node)
  VAR_10->channels = (unsigned long)
   FUNC_4(&VAR_6->dev);
 else
  VAR_10->channels = VAR_7->driver_data;
 VAR_10->client = VAR_6;

 VAR_12 = FUNC_5(VAR_6);
 if (VAR_12)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_10->channels; VAR_11++)
  VAR_10->temp_config[VAR_11] = VAR_3 | VAR_2;

 VAR_10->chip.ops = &VAR_5;
 VAR_10->chip.info = VAR_10->info;

 VAR_10->info[0] = &VAR_10->temp_info;

 VAR_10->temp_info.type = VAR_4;
 VAR_10->temp_info.config = VAR_10->temp_config;

 VAR_9 = FUNC_1(VAR_8, VAR_6->name,
        VAR_10,
        &VAR_10->chip,
        ((void*)0));
 return FUNC_0(VAR_9);
}
