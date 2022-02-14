
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {int update_lock; scalar_t__ valid; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (struct device*,char*,long) ;
 struct tmp401_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,long) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct tmp401_data *VAR_6 = FUNC_1(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 long VAR_8;

 if (FUNC_3(VAR_4, 10, &VAR_8))
  return -VAR_0;

 if (VAR_8 != 1) {
  FUNC_0(VAR_2,
   "temp_reset_history value %ld not supported. Use 1 to reset the history!\n",
   VAR_8);
  return -VAR_0;
 }
 FUNC_4(&VAR_6->update_lock);
 FUNC_2(VAR_7, VAR_1[5][0], VAR_8);
 VAR_6->valid = 0;
 FUNC_5(&VAR_6->update_lock);

 return VAR_5;
}
