
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8591_data {int update_lock; int control; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pcf8591_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct pcf8591_data *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_6->update_lock);
 if (VAR_7)
  VAR_6->control |= VAR_0;
 else
  VAR_6->control &= ~VAR_0;
 FUNC_1(VAR_5, VAR_6->control);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
