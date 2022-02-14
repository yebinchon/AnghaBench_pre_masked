
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct emc6w201_data {long** in; int update_lock; struct i2c_client* client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 long FUNC_0 (long,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 long FUNC_3 (long,int ,int) ;
 struct emc6w201_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ,long) ;
 int FUNC_6 (char const*,int,long*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int* VAR_1 ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct emc6w201_data *VAR_6 = FUNC_4(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_9(VAR_3)->index;
 int VAR_9 = FUNC_9(VAR_3)->nr;
 int VAR_10;
 long VAR_11;
 u8 VAR_12;

 VAR_10 = FUNC_6(VAR_4, 10, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_3(VAR_11, 0, 255 * VAR_1[VAR_9] / 192);
 VAR_11 = FUNC_0(VAR_11 * 192, VAR_1[VAR_9]);
 VAR_12 = (VAR_8 == VAR_0) ? FUNC_2(VAR_9)
     : FUNC_1(VAR_9);

 FUNC_7(&VAR_6->update_lock);
 VAR_6->in[VAR_8][VAR_9] = VAR_11;
 VAR_10 = FUNC_5(VAR_7, VAR_12, VAR_6->in[VAR_8][VAR_9]);
 FUNC_8(&VAR_6->update_lock);

 return VAR_10 < 0 ? VAR_10 : VAR_5;
}
