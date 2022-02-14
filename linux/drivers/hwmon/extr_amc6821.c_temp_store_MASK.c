
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {long* temp; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 long FUNC_0 (long,int,int) ;
 int FUNC_1 (int *,char*) ;
 struct amc6821_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,long) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct amc6821_data *VAR_6 = FUNC_2(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_7(VAR_3)->index;
 long VAR_9;

 int VAR_10 = FUNC_4(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_9 = FUNC_0(VAR_9 / 1000, -128, 127);

 FUNC_5(&VAR_6->update_lock);
 VAR_6->temp[VAR_8] = VAR_9;
 if (FUNC_3(VAR_7, VAR_1[VAR_8], VAR_6->temp[VAR_8])) {
  FUNC_1(&VAR_7->dev, "Register write error, aborting.\n");
  VAR_5 = -VAR_0;
 }
 FUNC_6(&VAR_6->update_lock);
 return VAR_5;
}
