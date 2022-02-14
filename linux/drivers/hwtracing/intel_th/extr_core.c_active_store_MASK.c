
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; } ;
struct intel_th_device {TYPE_1__ output; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct intel_th_device*) ;
 int FUNC_1 (struct intel_th_device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 struct intel_th_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct intel_th_device *VAR_4 = FUNC_3(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!!VAR_5 != VAR_4->output.active) {
  if (VAR_5)
   VAR_6 = FUNC_0(VAR_4);
  else
   FUNC_1(VAR_4);
 }

 return VAR_6 ? VAR_6 : VAR_3;
}
