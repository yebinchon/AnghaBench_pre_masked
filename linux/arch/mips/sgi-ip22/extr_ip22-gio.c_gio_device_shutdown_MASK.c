
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gio_driver {int (* shutdown ) (struct gio_device*) ;} ;
struct gio_device {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int FUNC_0 (struct gio_device*) ;
 struct gio_device* FUNC_1 (struct device*) ;
 struct gio_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct gio_device *VAR_1 = FUNC_1(VAR_0);
 struct gio_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_0->driver && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
