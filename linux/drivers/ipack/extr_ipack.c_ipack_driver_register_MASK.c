
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {char const* name; int * bus; struct module* owner; } ;
struct ipack_driver {TYPE_1__ driver; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_1(struct ipack_driver *VAR_1, struct module *VAR_2,
     const char *VAR_3)
{
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.name = VAR_3;
 VAR_1->driver.bus = &VAR_0;
 return FUNC_0(&VAR_1->driver);
}
