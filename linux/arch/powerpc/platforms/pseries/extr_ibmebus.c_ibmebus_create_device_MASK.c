
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dma_ops; int * bus; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (struct device_node*,int *,int *) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_4)
{
 struct platform_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, ((void*)0), &VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.dma_ops = &VAR_3;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  FUNC_2(VAR_5);
 return VAR_6;
}
