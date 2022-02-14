
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7414_data {long* temps; int lock; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int * VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,long) ;
 long FUNC_1 (long,int,int) ;
 struct ad7414_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
        struct device_attribute *VAR_2, const char *VAR_3,
        size_t VAR_4)
{
 struct ad7414_data *VAR_5 = FUNC_2(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = FUNC_6(VAR_2)->index;
 u8 VAR_8 = VAR_0[VAR_7];
 long VAR_9;
 int VAR_10 = FUNC_3(VAR_3, 10, &VAR_9);

 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = FUNC_1(VAR_9, -40000, 85000);
 VAR_9 = (VAR_9 + (VAR_9 < 0 ? -500 : 500)) / 1000;

 FUNC_4(&VAR_5->lock);
 VAR_5->temps[VAR_7] = VAR_9;
 FUNC_0(VAR_6, VAR_8, VAR_9);
 FUNC_5(&VAR_5->lock);
 return VAR_4;
}
