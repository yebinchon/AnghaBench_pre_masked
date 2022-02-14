
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm85_data {int update_lock; TYPE_1__* zone; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int hyst; int limit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct lm85_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_7(VAR_3)->index;
 struct lm85_data *VAR_7 = FUNC_2(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_5(&VAR_7->update_lock);
 VAR_9 = FUNC_1(VAR_7->zone[VAR_6].limit);
 VAR_7->zone[VAR_6].hyst = FUNC_0(VAR_9 - VAR_10);
 if (VAR_6 == 0 || VAR_6 == 1) {
  FUNC_4(VAR_8, VAR_0,
   (VAR_7->zone[0].hyst << 4)
   | VAR_7->zone[1].hyst);
 } else {
  FUNC_4(VAR_8, VAR_1,
   (VAR_7->zone[2].hyst << 4));
 }
 FUNC_6(&VAR_7->update_lock);
 return VAR_5;
}
