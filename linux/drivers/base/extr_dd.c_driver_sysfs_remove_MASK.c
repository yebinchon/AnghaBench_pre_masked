
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {TYPE_1__* p; scalar_t__ coredump; } ;
struct device {int kobj; struct device_driver* driver; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct device_driver *VAR_2 = VAR_1->driver;

 if (VAR_2) {
  if (VAR_2->coredump)
   FUNC_0(VAR_1, &VAR_0);
  FUNC_2(&VAR_2->p->kobj, FUNC_1(&VAR_1->kobj));
  FUNC_2(&VAR_1->kobj, "driver");
 }
}
