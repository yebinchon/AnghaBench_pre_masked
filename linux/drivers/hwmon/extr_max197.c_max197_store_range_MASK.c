
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct max197_data {int limit; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct max197_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (struct max197_data*,int) ;
 int FUNC_3 (struct max197_data*,int) ;
 int FUNC_4 (struct max197_data*,int) ;
 int FUNC_5 (struct max197_data*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct max197_data *VAR_6 = FUNC_0(VAR_2);
 struct sensor_device_attribute_2 *VAR_7 = FUNC_8(VAR_3);
 int VAR_8 = VAR_7->index;
 bool VAR_9 = VAR_7->nr;
 long VAR_10;
 int VAR_11 = VAR_6->limit / 2;
 int VAR_12 = VAR_6->limit;

 if (FUNC_1(VAR_4, 10, &VAR_10))
  return -VAR_0;

 if (VAR_9) {
  if (VAR_10 <= -VAR_12)
   VAR_10 = -VAR_12;
  else if (VAR_10 < 0)
   VAR_10 = -VAR_11;
  else
   VAR_10 = 0;
 } else {
  if (VAR_10 >= VAR_12)
   VAR_10 = VAR_12;
  else
   VAR_10 = VAR_11;
 }

 if (FUNC_6(&VAR_6->lock))
  return -VAR_1;

 if (VAR_10 == 0) {

  FUNC_5(VAR_6, VAR_8);
 } else if (VAR_10 == -VAR_11) {
  FUNC_2(VAR_6, VAR_8);
  FUNC_4(VAR_6, VAR_8);
 } else if (VAR_10 == -VAR_12) {
  FUNC_2(VAR_6, VAR_8);
  FUNC_3(VAR_6, VAR_8);
 } else if (VAR_10 == VAR_11) {

  FUNC_4(VAR_6, VAR_8);
 } else if (VAR_10 == VAR_12) {

  FUNC_3(VAR_6, VAR_8);
 }

 FUNC_7(&VAR_6->lock);

 return VAR_5;
}
