
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {char const* mod_name; struct module* owner; int * bus; int name; } ;
struct hid_driver {TYPE_1__ driver; int dyn_lock; int dyn_list; int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hid_driver *VAR_2, struct module *VAR_3,
  const char *VAR_4)
{
 int VAR_5;

 VAR_2->driver.name = VAR_2->name;
 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.mod_name = VAR_4;

 FUNC_0(&VAR_2->dyn_list);
 FUNC_3(&VAR_2->dyn_lock);

 VAR_5 = FUNC_2(&VAR_2->driver);

 if (VAR_5 == 0)
  FUNC_1(&VAR_1, ((void*)0), ((void*)0),
     VAR_0);

 return VAR_5;
}
