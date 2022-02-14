
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int update_lock; scalar_t__ valid; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct w83795_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 unsigned long FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2,
      struct device_attribute *VAR_3, const char *VAR_4,
      size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_2);
 struct w83795_data *VAR_7 = FUNC_1(VAR_6);
 unsigned long VAR_8;

 if (FUNC_2(VAR_4, 10, &VAR_8) < 0 || VAR_8 != 0)
  return -VAR_0;

 FUNC_3(&VAR_7->update_lock);
 VAR_8 = FUNC_6(VAR_6, VAR_1);
 VAR_8 |= 0x80;
 FUNC_7(VAR_6, VAR_1, VAR_8);


 FUNC_6(VAR_6, FUNC_0(5));
 VAR_7->valid = 0;
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
