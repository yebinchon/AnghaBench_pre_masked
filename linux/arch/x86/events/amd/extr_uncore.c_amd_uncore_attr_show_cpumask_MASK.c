
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmu {scalar_t__ type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int cpumask_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int,char*,int *) ;
 struct pmu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 cpumask_t *VAR_7;
 struct pmu *VAR_8 = FUNC_1(VAR_4);

 if (VAR_8->type == VAR_3.type)
  VAR_7 = &VAR_2;
 else if (VAR_8->type == VAR_1.type)
  VAR_7 = &VAR_0;
 else
  return 0;

 return FUNC_0(1, VAR_6, VAR_7);
}
