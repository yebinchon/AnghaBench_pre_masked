
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_3__ {char const* mod_name; int name; struct module* owner; int * bus; } ;
struct gameport_driver {int ignore; TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (struct gameport_driver*,int *,int ) ;
 int FUNC_3 (char*,int ,int) ;

int FUNC_4(struct gameport_driver *VAR_2, struct module *VAR_3,
    const char *VAR_4)
{
 int VAR_5;

 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.mod_name = VAR_4;





 VAR_2->ignore = 1;

 VAR_5 = FUNC_0(&VAR_2->driver);
 if (VAR_5) {
  FUNC_3("driver_register() failed for %s, error: %d\n",
   VAR_2->driver.name, VAR_5);
  return VAR_5;
 }




 VAR_2->ignore = 0;
 VAR_5 = FUNC_2(VAR_2, ((void*)0), VAR_0);
 if (VAR_5) {
  FUNC_1(&VAR_2->driver);
  return VAR_5;
 }

 return 0;
}
