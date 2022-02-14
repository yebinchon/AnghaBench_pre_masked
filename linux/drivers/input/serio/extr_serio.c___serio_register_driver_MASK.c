
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* mod_name; int name; struct module* owner; int * bus; } ;
struct serio_driver {int manual_bind; TYPE_1__ driver; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (struct serio_driver*,int *,int ) ;

int FUNC_4(struct serio_driver *VAR_2, struct module *VAR_3, const char *VAR_4)
{
 bool VAR_5 = VAR_2->manual_bind;
 int VAR_6;

 VAR_2->driver.bus = &VAR_1;
 VAR_2->driver.owner = VAR_3;
 VAR_2->driver.mod_name = VAR_4;





 VAR_2->manual_bind = 1;

 VAR_6 = FUNC_0(&VAR_2->driver);
 if (VAR_6) {
  FUNC_2("driver_register() failed for %s, error: %d\n",
   VAR_2->driver.name, VAR_6);
  return VAR_6;
 }





 if (!VAR_5) {
  VAR_2->manual_bind = 0;
  VAR_6 = FUNC_3(VAR_2, ((void*)0), VAR_0);
  if (VAR_6) {
   FUNC_1(&VAR_2->driver);
   return VAR_6;
  }
 }

 return 0;
}
