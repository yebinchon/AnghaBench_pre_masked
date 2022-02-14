
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_firmware {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;


 struct platform_device* FUNC_0 (struct device_node*) ;
 struct rpi_firmware* FUNC_1 (struct platform_device*) ;

struct rpi_firmware *FUNC_2(struct device_node *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_1);
}
