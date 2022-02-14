
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (struct platform_device*) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 if (VAR_0->dev.of_node && FUNC_1(VAR_0) == 0)
  return 0;

 if (FUNC_0(VAR_0) == 0)
  return 0;

 return FUNC_2(VAR_0);
}
