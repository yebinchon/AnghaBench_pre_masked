
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; } ;
struct intel_th_device {TYPE_1__ output; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;
 struct intel_th_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct intel_th_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4->output.port >= 0)
  return FUNC_0(VAR_3, VAR_0, "%u\n", VAR_4->output.port);

 return FUNC_0(VAR_3, VAR_0, "unassigned\n");
}
