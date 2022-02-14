
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; struct module* owner; } ;
struct moxtet_driver {TYPE_1__ driver; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct module *VAR_1,
        struct moxtet_driver *VAR_2)
{
 VAR_2->driver.owner = VAR_1;
 VAR_2->driver.bus = &VAR_0;
 return FUNC_0(&VAR_2->driver);
}
