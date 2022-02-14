
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {int nr; int index; } ;
struct f71805f_data {int update_lock; TYPE_1__* auto_points; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * fan; } ;


 int FUNC_0 (int,int) ;
 struct f71805f_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71805f_data*,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct f71805f_data *VAR_4 = FUNC_1(VAR_0);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_7(VAR_1);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_4->update_lock);
 VAR_4->auto_points[VAR_6].fan[VAR_7] = FUNC_3(VAR_8);
 FUNC_2(VAR_4, FUNC_0(VAR_6, VAR_7),
   VAR_4->auto_points[VAR_6].fan[VAR_7]);
 FUNC_6(&VAR_4->update_lock);

 return VAR_3;
}
