
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* mod_name; struct module* owner; int name; int * bus; } ;
struct scmi_driver {int name; TYPE_1__ driver; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;

int FUNC_2(struct scmi_driver *VAR_1, struct module *VAR_2,
    const char *VAR_3)
{
 int VAR_4;

 VAR_1->driver.bus = &VAR_0;
 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.mod_name = VAR_3;

 VAR_4 = FUNC_0(&VAR_1->driver);
 if (!VAR_4)
  FUNC_1("registered new scmi driver %s\n", VAR_1->name);

 return VAR_4;
}
