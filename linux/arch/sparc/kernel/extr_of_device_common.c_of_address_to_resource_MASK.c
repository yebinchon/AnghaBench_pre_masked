
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int * resource; } ;
struct platform_device {int num_resources; TYPE_1__ archdata; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct resource*,int *,int) ;
 struct platform_device* FUNC_1 (struct device_node*) ;

int FUNC_2(struct device_node *VAR_1, int VAR_2,
      struct resource *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4 || VAR_2 >= VAR_4->num_resources)
  return -VAR_0;

 FUNC_0(VAR_3, &VAR_4->archdata.resource[VAR_2], sizeof(*VAR_3));
 return 0;
}
