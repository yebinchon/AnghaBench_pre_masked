
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {int name; int shutdown; int remove; int probe; int * bus; struct module* owner; } ;
struct fsl_mc_driver {TYPE_1__ driver; scalar_t__ shutdown; scalar_t__ remove; scalar_t__ probe; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int) ;

int FUNC_2(struct fsl_mc_driver *VAR_4,
        struct module *VAR_5)
{
 int VAR_6;

 VAR_4->driver.owner = VAR_5;
 VAR_4->driver.bus = &VAR_0;

 if (VAR_4->probe)
  VAR_4->driver.probe = VAR_1;

 if (VAR_4->remove)
  VAR_4->driver.remove = VAR_2;

 if (VAR_4->shutdown)
  VAR_4->driver.shutdown = VAR_3;

 VAR_6 = FUNC_0(&VAR_4->driver);
 if (VAR_6 < 0) {
  FUNC_1("driver_register() failed for %s: %d\n",
         VAR_4->driver.name, VAR_6);
  return VAR_6;
 }

 return 0;
}
