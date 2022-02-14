
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {char const* mod_name; int * bus; struct module* owner; } ;
struct mcb_driver {TYPE_1__ driver; int remove; int probe; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_1(struct mcb_driver *VAR_2, struct module *VAR_3,
   const char *VAR_4)
{
 if (!VAR_2->probe || !VAR_2->remove)
  return -VAR_0;

 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.mod_name = VAR_4;

 return FUNC_0(&VAR_2->driver);
}
