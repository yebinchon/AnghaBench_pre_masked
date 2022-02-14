
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device {unsigned int id; TYPE_1__* p; } ;
struct bus_type {TYPE_2__* p; } ;
struct TYPE_4__ {int klist_devices; } ;
struct TYPE_3__ {int knode_bus; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct klist_iter*) ;
 int FUNC_2 (int *,struct klist_iter*,int *) ;
 struct device* FUNC_3 (struct klist_iter*) ;

struct device *FUNC_4(struct bus_type *VAR_0, unsigned int VAR_1,
     struct device *VAR_2)
{
 struct klist_iter VAR_3;
 struct device *VAR_4;

 if (!VAR_0)
  return ((void*)0);

 if (VAR_2) {
  FUNC_2(&VAR_0->p->klist_devices, &VAR_3, &VAR_2->p->knode_bus);
  VAR_4 = FUNC_3(&VAR_3);
  if (VAR_4 && VAR_4->id == VAR_1 && FUNC_0(VAR_4)) {
   FUNC_1(&VAR_3);
   return VAR_4;
  }
  FUNC_1(&VAR_3);
 }

 FUNC_2(&VAR_0->p->klist_devices, &VAR_3, ((void*)0));
 while ((VAR_4 = FUNC_3(&VAR_3))) {
  if (VAR_4->id == VAR_1 && FUNC_0(VAR_4)) {
   FUNC_1(&VAR_3);
   return VAR_4;
  }
 }
 FUNC_1(&VAR_3);
 return ((void*)0);
}
