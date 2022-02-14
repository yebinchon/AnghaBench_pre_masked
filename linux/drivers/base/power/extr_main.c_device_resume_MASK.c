
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int is_prepared; int is_suspended; int completion; scalar_t__ direct_complete; scalar_t__ syscore; } ;
struct device {TYPE_6__ power; TYPE_5__* driver; TYPE_4__* bus; TYPE_3__* class; TYPE_2__* type; TYPE_1__* pm_domain; } ;
typedef int pm_message_t ;
typedef int * pm_callback_t ;
struct TYPE_11__ {int * pm; } ;
struct TYPE_10__ {int * resume; int * pm; } ;
struct TYPE_9__ {int * pm; } ;
struct TYPE_8__ {int * pm; } ;
struct TYPE_7__ {int ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,struct device*,int ,char const*) ;
 int FUNC_7 (struct device*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct device*) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_12(struct device *VAR_1, pm_message_t VAR_2, bool VAR_3)
{
 pm_callback_t VAR_4 = ((void*)0);
 const char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(0);

 if (VAR_1->power.syscore)
  goto Complete;

 if (VAR_1->power.direct_complete) {

  FUNC_11(VAR_1);
  goto Complete;
 }

 FUNC_7(VAR_1, VAR_3);
 FUNC_9(&VAR_0, VAR_1);
 FUNC_4(VAR_1);





 VAR_1->power.is_prepared = 0;

 if (!VAR_1->power.is_suspended)
  goto Unlock;

 if (VAR_1->pm_domain) {
  VAR_5 = "power domain ";
  VAR_4 = FUNC_10(&VAR_1->pm_domain->ops, VAR_2);
  goto Driver;
 }

 if (VAR_1->type && VAR_1->type->pm) {
  VAR_5 = "type ";
  VAR_4 = FUNC_10(VAR_1->type->pm, VAR_2);
  goto Driver;
 }

 if (VAR_1->class && VAR_1->class->pm) {
  VAR_5 = "class ";
  VAR_4 = FUNC_10(VAR_1->class->pm, VAR_2);
  goto Driver;
 }

 if (VAR_1->bus) {
  if (VAR_1->bus->pm) {
   VAR_5 = "bus ";
   VAR_4 = FUNC_10(VAR_1->bus->pm, VAR_2);
  } else if (VAR_1->bus->resume) {
   VAR_5 = "legacy bus ";
   VAR_4 = VAR_1->bus->resume;
   goto End;
  }
 }

 Driver:
 if (!VAR_4 && VAR_1->driver && VAR_1->driver->pm) {
  VAR_5 = "driver ";
  VAR_4 = FUNC_10(VAR_1->driver->pm, VAR_2);
 }

 End:
 VAR_6 = FUNC_6(VAR_4, VAR_1, VAR_2, VAR_5);
 VAR_1->power.is_suspended = 0;

 Unlock:
 FUNC_5(VAR_1);
 FUNC_8(&VAR_0);

 Complete:
 FUNC_3(&VAR_1->power.completion);

 FUNC_2(VAR_6);

 return VAR_6;
}
