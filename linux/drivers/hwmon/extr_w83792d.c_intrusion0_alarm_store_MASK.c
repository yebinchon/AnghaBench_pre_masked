
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83792d_data {int update_lock; scalar_t__ valid; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct w83792d_data* FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_4(VAR_2);
 struct w83792d_data *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8;
 u8 VAR_9;

 if (FUNC_1(VAR_4, 10, &VAR_8) || VAR_8 != 0)
  return -VAR_0;

 FUNC_2(&VAR_7->update_lock);
 VAR_9 = FUNC_5(VAR_6, VAR_1);
 FUNC_6(VAR_6, VAR_1, VAR_9 | 0x80);
 VAR_7->valid = 0;
 FUNC_3(&VAR_7->update_lock);

 return VAR_5;
}
