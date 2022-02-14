
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fschmd_data {size_t kind; long* temp_max; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int ** VAR_0 ;
 int FUNC_0 (long,int,int) ;
 struct fschmd_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,long) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_7(VAR_2)->index;
 struct fschmd_data *VAR_6 = FUNC_1(VAR_1);
 long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_7 / 1000, -128, 127) + 128;

 FUNC_4(&VAR_6->update_lock);
 FUNC_2(FUNC_6(VAR_1),
  VAR_0[VAR_6->kind][VAR_5], VAR_7);
 VAR_6->temp_max[VAR_5] = VAR_7;
 FUNC_5(&VAR_6->update_lock);

 return VAR_4;
}
