
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {char const* mod_name; int name; int remove; int probe; struct module* owner; int * bus; } ;
struct rmi_function_handler {struct device_driver driver; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct device_driver*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct rmi_function_handler *VAR_3,
         struct module *VAR_4,
         const char *VAR_5)
{
 struct device_driver *VAR_6 = &VAR_3->driver;
 int VAR_7;

 VAR_6->bus = &VAR_0;
 VAR_6->owner = VAR_4;
 VAR_6->mod_name = VAR_5;
 VAR_6->probe = VAR_1;
 VAR_6->remove = VAR_2;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7) {
  FUNC_1("driver_register() failed for %s, error: %d\n",
   VAR_6->name, VAR_7);
  return VAR_7;
 }

 return 0;
}
