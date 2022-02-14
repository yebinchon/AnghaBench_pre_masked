
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int deferred_probe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_2)
{
 FUNC_3(&VAR_0);
 if (FUNC_2(&VAR_2->p->deferred_probe)) {
  FUNC_0(VAR_2, "Added to deferred list\n");
  FUNC_1(&VAR_2->p->deferred_probe, &VAR_1);
 }
 FUNC_4(&VAR_0);
}
