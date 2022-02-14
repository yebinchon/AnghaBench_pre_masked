
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int name; } ;
struct device {int dummy; } ;
struct amba_driver {int id_table; } ;
struct amba_device {scalar_t__ driver_override; } ;


 int * FUNC_0 (int ,struct amba_device*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct amba_device* FUNC_2 (struct device*) ;
 struct amba_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct amba_device *VAR_2 = FUNC_2(VAR_0);
 struct amba_driver *VAR_3 = FUNC_3(VAR_1);


 if (VAR_2->driver_override)
  return !FUNC_1(VAR_2->driver_override, VAR_1->name);

 return FUNC_0(VAR_3->id_table, VAR_2) != ((void*)0);
}
