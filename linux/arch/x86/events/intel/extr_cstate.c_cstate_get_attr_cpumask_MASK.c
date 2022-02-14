
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int,char*,int *) ;
 int VAR_0 ;
 struct pmu VAR_1 ;
 int VAR_2 ;
 struct pmu VAR_3 ;
 struct pmu* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
           struct device_attribute *VAR_5,
           char *VAR_6)
{
 struct pmu *VAR_7 = FUNC_1(VAR_4);

 if (VAR_7 == &VAR_1)
  return FUNC_0(1, VAR_6, &VAR_0);
 else if (VAR_7 == &VAR_3)
  return FUNC_0(1, VAR_6, &VAR_2);
 else
  return 0;
}
