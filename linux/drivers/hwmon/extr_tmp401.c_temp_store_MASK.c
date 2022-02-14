
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tmp401_data {scalar_t__ kind; int** temp; int update_lock; int config; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int nr; int index; } ;


 size_t VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;
 struct tmp401_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (long,int ,int) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
     struct device_attribute *VAR_5, const char *VAR_6,
     size_t VAR_7)
{
 int VAR_8 = FUNC_7(VAR_5)->nr;
 int VAR_9 = FUNC_7(VAR_5)->index;
 struct tmp401_data *VAR_10 = FUNC_0(VAR_4);
 struct i2c_client *VAR_11 = VAR_10->client;
 long VAR_12;
 u16 VAR_13;
 u8 VAR_14;

 if (FUNC_3(VAR_6, 10, &VAR_12))
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_12, VAR_10->config, VAR_8 == 3 ? 8 : 4);

 FUNC_4(&VAR_10->update_lock);

 VAR_14 = VAR_10->kind == VAR_3 ? VAR_2[VAR_8][VAR_9]
           : VAR_1[VAR_8][VAR_9];
 if (VAR_8 == 3) {
  FUNC_1(VAR_11, VAR_14, VAR_13 >> 8);
 } else {

  FUNC_2(VAR_11, VAR_14, VAR_13);
 }
 VAR_10->temp[VAR_8][VAR_9] = VAR_13;

 FUNC_5(&VAR_10->update_lock);

 return VAR_7;
}
