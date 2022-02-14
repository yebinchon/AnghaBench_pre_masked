
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {char const* mod_name; struct module* owner; int remove; int probe; int name; int * bus; } ;
struct greybus_driver {int name; TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct greybus_driver *VAR_4, struct module *VAR_5,
       const char *VAR_6)
{
 int VAR_7;

 if (FUNC_1())
  return -VAR_0;

 VAR_4->driver.bus = &VAR_1;
 VAR_4->driver.name = VAR_4->name;
 VAR_4->driver.probe = VAR_2;
 VAR_4->driver.remove = VAR_3;
 VAR_4->driver.owner = VAR_5;
 VAR_4->driver.mod_name = VAR_6;

 VAR_7 = FUNC_0(&VAR_4->driver);
 if (VAR_7)
  return VAR_7;

 FUNC_2("registered new driver %s\n", VAR_4->name);
 return 0;
}
