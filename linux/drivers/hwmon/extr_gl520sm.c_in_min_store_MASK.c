
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct gl520_data {int* in_min; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long) ;
 struct gl520_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct gl520_data *VAR_5 = FUNC_2(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_8(VAR_2)->index;
 u8 VAR_8;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_6(&VAR_5->update_lock);

 if (VAR_7 == 0)
  VAR_8 = FUNC_1(VAR_9);
 else
  VAR_8 = FUNC_0(VAR_9);

 VAR_5->in_min[VAR_7] = VAR_8;

 if (VAR_7 < 4)
  FUNC_4(VAR_6, VAR_0[VAR_7],
      (FUNC_3(VAR_6, VAR_0[VAR_7])
       & ~0xff) | VAR_8);
 else
  FUNC_4(VAR_6, VAR_0[VAR_7], VAR_8);

 FUNC_7(&VAR_5->update_lock);
 return VAR_4;
}
