
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute {int index; } ;
struct max197_data {int lock; scalar_t__ scale; int * ctrl_bytes; TYPE_1__* pdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;
struct TYPE_2__ {int (* convert ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct max197_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct max197_data*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct max197_data *VAR_5 = FUNC_1(VAR_2);
 struct sensor_device_attribute *VAR_6 = FUNC_7(VAR_3);
 int VAR_7 = VAR_6->index;
 s32 VAR_8;
 int VAR_9;

 if (FUNC_3(&VAR_5->lock))
  return -VAR_0;

 VAR_9 = VAR_5->pdata->convert(VAR_5->ctrl_bytes[VAR_7]);
 if (VAR_9 < 0) {
  FUNC_0(VAR_2, "conversion failed\n");
  goto unlock;
 }
 VAR_8 = VAR_9;





 if (VAR_5->scale) {
  VAR_8 *= VAR_1;
  if (FUNC_2(VAR_5, VAR_7))
   VAR_8 *= 2;
  VAR_8 /= 10000;
 }

 VAR_9 = FUNC_5(VAR_4, "%d\n", VAR_8);

unlock:
 FUNC_4(&VAR_5->lock);
 return VAR_9;
}
