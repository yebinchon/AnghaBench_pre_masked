
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pc87427_data {int pwm_auto_ok; int lock; int * pwm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 struct pc87427_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pc87427_data*,int) ;
 int FUNC_5 (unsigned long,int ) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct pc87427_data*,int,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct pc87427_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_6(VAR_2)->index;
 unsigned long VAR_7;

 if (FUNC_1(VAR_3, 10, &VAR_7) < 0 || VAR_7 > 2)
  return -VAR_0;

 if (VAR_7 == 2 && !(VAR_5->pwm_auto_ok & (1 << VAR_6)))
  return -VAR_0;

 FUNC_2(&VAR_5->lock);
 FUNC_4(VAR_5, VAR_6);
 FUNC_7(VAR_5, VAR_6, FUNC_5(VAR_7, VAR_5->pwm[VAR_6]));
 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
