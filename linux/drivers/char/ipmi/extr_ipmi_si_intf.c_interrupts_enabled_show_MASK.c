
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq; } ;
struct smi_info {int interrupt_disabled; TYPE_1__ io; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct smi_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct smi_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = VAR_3->io.irq && !VAR_3->interrupt_disabled;

 return FUNC_1(VAR_2, 10, "%d\n", VAR_4);
}
