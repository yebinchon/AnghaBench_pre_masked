
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gio_driver {int id_table; } ;
struct gio_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (int ,struct gio_device*) ;
 struct gio_device* FUNC_1 (struct device*) ;
 struct gio_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct gio_device *VAR_2 = FUNC_1(VAR_0);
 struct gio_driver *VAR_3 = FUNC_2(VAR_1);

 return FUNC_0(VAR_3->id_table, VAR_2) != ((void*)0);
}
