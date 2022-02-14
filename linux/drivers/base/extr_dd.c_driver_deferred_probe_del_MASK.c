
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int deferred_probe; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_1)
{
 FUNC_3(&VAR_0);
 if (!FUNC_2(&VAR_1->p->deferred_probe)) {
  FUNC_0(VAR_1, "Removed from deferred list\n");
  FUNC_1(&VAR_1->p->deferred_probe);
 }
 FUNC_4(&VAR_0);
}
