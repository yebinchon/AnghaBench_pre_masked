
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct ina209_data {int* regs; int update_lock; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct ina209_data*) ;
 int FUNC_1 (struct ina209_data*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int,int,long) ;
 struct ina209_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct ina209_data *VAR_4 = FUNC_4(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_1);
 int VAR_6 = VAR_5->index;
 long VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_8 = FUNC_5(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_6(&VAR_4->update_lock);
 VAR_8 = FUNC_3(VAR_6, VAR_4->regs[VAR_6], VAR_7);
 if (VAR_8 < 0) {
  VAR_3 = VAR_8;
  goto abort;
 }
 FUNC_2(VAR_4->client, VAR_6, VAR_8);
 VAR_4->regs[VAR_6] = VAR_8;
abort:
 FUNC_7(&VAR_4->update_lock);
 return VAR_3;
}
