
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int update_lock; void** in_max; void** in_min; } ;
struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 void* FUNC_0 (int,long) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct vt1211_data* FUNC_4 (struct device*) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct vt1211_data*,int ,void*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct vt1211_data *VAR_4 = FUNC_4(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 =
      FUNC_8(VAR_1);
 int VAR_6 = VAR_5->index;
 int VAR_7 = VAR_5->nr;
 long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_4->update_lock);
 switch (VAR_7) {
 case 128:
  VAR_4->in_min[VAR_6] = FUNC_0(VAR_6, VAR_8);
  FUNC_9(VAR_4, FUNC_2(VAR_6), VAR_4->in_min[VAR_6]);
  break;
 case 129:
  VAR_4->in_max[VAR_6] = FUNC_0(VAR_6, VAR_8);
  FUNC_9(VAR_4, FUNC_1(VAR_6), VAR_4->in_max[VAR_6]);
  break;
 default:
  FUNC_3(VAR_0, "Unknown attr fetch (%d)\n", VAR_7);
 }
 FUNC_7(&VAR_4->update_lock);

 return VAR_3;
}
