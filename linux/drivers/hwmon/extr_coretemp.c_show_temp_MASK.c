
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temp_data {int valid; int temp; int tjmax; int update_lock; scalar_t__ last_updated; int status_reg; int cpu; } ;
struct sensor_device_attribute {size_t index; } ;
struct platform_data {struct temp_data** core_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct platform_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*,int*) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 u32 VAR_5, VAR_6;
 struct sensor_device_attribute *VAR_7 = FUNC_6(VAR_3);
 struct platform_data *VAR_8 = FUNC_0(VAR_2);
 struct temp_data *VAR_9 = VAR_8->core_data[VAR_7->index];

 FUNC_1(&VAR_9->update_lock);


 if (!VAR_9->valid || FUNC_5(VAR_1, VAR_9->last_updated + VAR_0)) {
  FUNC_3(VAR_9->cpu, VAR_9->status_reg, &VAR_5, &VAR_6);






  VAR_9->temp = VAR_9->tjmax - ((VAR_5 >> 16) & 0x7f) * 1000;
  VAR_9->valid = 1;
  VAR_9->last_updated = VAR_1;
 }

 FUNC_2(&VAR_9->update_lock);
 return FUNC_4(VAR_4, "%d\n", VAR_9->temp);
}
