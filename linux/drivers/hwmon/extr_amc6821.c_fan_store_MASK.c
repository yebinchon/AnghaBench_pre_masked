
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int* fan; int update_lock; struct i2c_client* client; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (long,int,int) ;
 int FUNC_1 (int *,char*) ;
 struct amc6821_data* FUNC_2 (struct device*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct amc6821_data *VAR_7 = FUNC_2(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 long VAR_9;
 int VAR_10 = FUNC_7(VAR_4)->index;
 int VAR_11 = FUNC_4(VAR_5, 10, &VAR_9);
 if (VAR_11)
  return VAR_11;
 VAR_9 = 1 > VAR_9 ? 0xFFFF : 6000000/VAR_9;

 FUNC_5(&VAR_7->update_lock);
 VAR_7->fan[VAR_10] = (u16) FUNC_0(VAR_9, 1, 0xFFFF);
 if (FUNC_3(VAR_8, VAR_2[VAR_10],
   VAR_7->fan[VAR_10] & 0xFF)) {
  FUNC_1(&VAR_8->dev, "Register write error, aborting.\n");
  VAR_6 = -VAR_0;
  goto EXIT;
 }
 if (FUNC_3(VAR_8,
   VAR_1[VAR_10], VAR_7->fan[VAR_10] >> 8)) {
  FUNC_1(&VAR_8->dev, "Register write error, aborting.\n");
  VAR_6 = -VAR_0;
 }
EXIT:
 FUNC_6(&VAR_7->update_lock);
 return VAR_6;
}
