
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {int (* shutdown ) (struct platform_device*) ;} ;
struct platform_device {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (struct device*) ;
 struct platform_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_1(VAR_0);
 struct platform_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_0->driver && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
