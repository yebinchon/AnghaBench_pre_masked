
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct nct6775_data {unsigned long* target_temp; int update_lock; int target_temp_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int ,int ,int ) ;
 struct nct6775_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nct6775_data*,int) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct nct6775_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->index;
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(FUNC_0(VAR_7, 1000), 0,
   VAR_4->target_temp_mask);

 FUNC_4(&VAR_4->update_lock);
 VAR_4->target_temp[VAR_6] = VAR_7;
 FUNC_6(VAR_4, VAR_6);
 FUNC_5(&VAR_4->update_lock);
 return VAR_3;
}
