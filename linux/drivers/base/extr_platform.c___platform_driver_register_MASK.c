
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown; int remove; int probe; int * bus; struct module* owner; } ;
struct platform_driver {TYPE_1__ driver; } ;
struct module {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct platform_driver *VAR_4,
    struct module *VAR_5)
{
 VAR_4->driver.owner = VAR_5;
 VAR_4->driver.bus = &VAR_0;
 VAR_4->driver.probe = VAR_1;
 VAR_4->driver.remove = VAR_2;
 VAR_4->driver.shutdown = VAR_3;

 return FUNC_0(&VAR_4->driver);
}
