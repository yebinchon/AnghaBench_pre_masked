
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct max197_data {int limit; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct max197_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct max197_data*,int) ;
 scalar_t__ FUNC_2 (struct max197_data*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct max197_data *VAR_4 = FUNC_0(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = VAR_5->index;
 bool VAR_7 = VAR_5->nr;
 int VAR_8;

 if (FUNC_3(&VAR_4->lock))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_4, VAR_6) ?
  VAR_4->limit : VAR_4->limit / 2;
 if (VAR_7) {
  if (FUNC_1(VAR_4, VAR_6))
   VAR_8 = -VAR_8;
  else
   VAR_8 = 0;
 }

 FUNC_4(&VAR_4->lock);

 return FUNC_5(VAR_3, "%d\n", VAR_8);
}
