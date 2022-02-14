
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct emc6w201_data {long** temp; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 long FUNC_0 (long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 long FUNC_3 (long,int,int) ;
 struct emc6w201_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ,long) ;
 int FUNC_6 (char const*,int,long*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct emc6w201_data *VAR_5 = FUNC_4(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_9(VAR_2)->index;
 int VAR_8 = FUNC_9(VAR_2)->nr;
 int VAR_9;
 long VAR_10;
 u8 VAR_11;

 VAR_9 = FUNC_6(VAR_3, 10, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_3(VAR_10, -127000, 127000);
 VAR_10 = FUNC_0(VAR_10, 1000);
 VAR_11 = (VAR_7 == VAR_0) ? FUNC_2(VAR_8)
     : FUNC_1(VAR_8);

 FUNC_7(&VAR_5->update_lock);
 VAR_5->temp[VAR_7][VAR_8] = VAR_10;
 VAR_9 = FUNC_5(VAR_6, VAR_11, VAR_5->temp[VAR_7][VAR_8]);
 FUNC_8(&VAR_5->update_lock);

 return VAR_9 < 0 ? VAR_9 : VAR_4;
}
