
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm77_data {long* temp; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (long) ;
 long FUNC_1 (long,int ,int ) ;
 struct lm77_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
          struct device_attribute *VAR_6,
          const char *VAR_7, size_t VAR_8)
{
 struct lm77_data *VAR_9 = FUNC_2(VAR_5);
 struct i2c_client *VAR_10 = VAR_9->client;
 long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_7, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_5(&VAR_9->update_lock);
 VAR_11 = FUNC_1(VAR_9->temp[VAR_3] - VAR_11, VAR_2, VAR_1);
 VAR_9->temp[VAR_4] = VAR_11;
 FUNC_4(VAR_10, VAR_0,
    FUNC_0(VAR_9->temp[VAR_4]));
 FUNC_6(&VAR_9->update_lock);
 return VAR_8;
}
