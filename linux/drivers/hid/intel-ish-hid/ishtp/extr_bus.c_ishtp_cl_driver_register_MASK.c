
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {int * bus; struct module* owner; int name; } ;
struct ishtp_cl_driver {TYPE_1__ driver; int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct ishtp_cl_driver *VAR_3,
        struct module *VAR_4)
{
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;

 VAR_3->driver.name = VAR_3->name;
 VAR_3->driver.owner = VAR_4;
 VAR_3->driver.bus = &VAR_1;

 VAR_5 = FUNC_0(&VAR_3->driver);
 if (VAR_5)
  return VAR_5;

 return 0;
}
