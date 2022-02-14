
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_4__ {char const* mod_name; int * bus; struct module* owner; int name; } ;
struct TYPE_3__ {int list; int lock; } ;
struct hv_driver {TYPE_2__ driver; TYPE_1__ dynids; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

int FUNC_5(struct hv_driver *VAR_1, struct module *VAR_2, const char *VAR_3)
{
 int VAR_4;

 FUNC_2("registering driver %s\n", VAR_1->name);

 VAR_4 = FUNC_4();
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.mod_name = VAR_3;
 VAR_1->driver.bus = &VAR_0;

 FUNC_3(&VAR_1->dynids.lock);
 FUNC_0(&VAR_1->dynids.list);

 VAR_4 = FUNC_1(&VAR_1->driver);

 return VAR_4;
}
