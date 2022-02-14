
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83795_data {int pwm_fomc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (char*,char*,unsigned int) ;
 TYPE_1__* FUNC_1 (struct device_attribute*) ;
 struct w83795_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_1(VAR_1)->index;
 unsigned int VAR_5;

 if (VAR_3->pwm_fomc & (1 << VAR_4))
  VAR_5 = 0;
 else
  VAR_5 = 1;

 return FUNC_0(VAR_2, "%u\n", VAR_5);
}
