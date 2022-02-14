
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83l786ng_data {int* tolerance; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ,int) ;
 struct w83l786ng_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_5(VAR_2)->index;
 struct w83l786ng_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8, VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_3, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_6->update_lock);
 VAR_9 = FUNC_6(VAR_7,
     VAR_0) & ((VAR_5 == 1) ? 0x0f : 0xf0);
 VAR_8 = FUNC_0(VAR_10, 0, 15);
 VAR_8 &= 0x0f;
 VAR_6->tolerance[VAR_5] = VAR_8;
 if (VAR_5 == 1)
  VAR_8 <<= 4;

 FUNC_7(VAR_7, VAR_0,
         VAR_9 | VAR_8);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
