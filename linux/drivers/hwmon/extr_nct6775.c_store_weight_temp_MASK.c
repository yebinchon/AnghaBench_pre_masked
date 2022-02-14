
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct nct6775_data {unsigned long** weight_temp; int update_lock; int ** REG_WEIGHT_TEMP; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int ,int ,int) ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nct6775_data*,int ,unsigned long) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_2, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_1(FUNC_0(VAR_8, 1000), 0, 255);

 FUNC_4(&VAR_4->update_lock);
 VAR_4->weight_temp[VAR_7][VAR_6] = VAR_8;
 FUNC_6(VAR_4, VAR_4->REG_WEIGHT_TEMP[VAR_7][VAR_6], VAR_8);
 FUNC_5(&VAR_4->update_lock);
 return VAR_3;
}
