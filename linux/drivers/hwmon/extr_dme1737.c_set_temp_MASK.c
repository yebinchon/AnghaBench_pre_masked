
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct dme1737_data {int update_lock; void** temp_offset; void** temp_max; void** temp_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;



 void* FUNC_3 (long) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct dme1737_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct dme1737_data*,int ,void*) ;
 int FUNC_7 (char const*,int,long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct sensor_device_attribute_2* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct dme1737_data *VAR_4 = FUNC_5(VAR_0);
 struct sensor_device_attribute_2
  *VAR_5 = FUNC_10(VAR_1);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_8(&VAR_4->update_lock);
 switch (VAR_7) {
 case 129:
  VAR_4->temp_min[VAR_6] = FUNC_3(VAR_8);
  FUNC_6(VAR_4, FUNC_1(VAR_6),
         VAR_4->temp_min[VAR_6]);
  break;
 case 130:
  VAR_4->temp_max[VAR_6] = FUNC_3(VAR_8);
  FUNC_6(VAR_4, FUNC_0(VAR_6),
         VAR_4->temp_max[VAR_6]);
  break;
 case 128:
  VAR_4->temp_offset[VAR_6] = FUNC_3(VAR_8);
  FUNC_6(VAR_4, FUNC_2(VAR_6),
         VAR_4->temp_offset[VAR_6]);
  break;
 default:
  FUNC_4(VAR_0, "Unknown function %d.\n", VAR_7);
 }
 FUNC_9(&VAR_4->update_lock);

 return VAR_3;
}
