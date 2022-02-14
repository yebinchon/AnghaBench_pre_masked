
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_irqs; unsigned int* irqs; } ;
struct platform_device {TYPE_1__ archdata; } ;
struct device_node {int dummy; } ;


 struct platform_device* FUNC_0 (struct device_node*) ;

unsigned int FUNC_1(struct device_node *VAR_0, int VAR_1)
{
 struct platform_device *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2 || VAR_1 >= VAR_2->archdata.num_irqs)
  return 0;

 return VAR_2->archdata.irqs[VAR_1];
}
