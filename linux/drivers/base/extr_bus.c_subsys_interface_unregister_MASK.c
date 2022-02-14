
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subsys_interface {int (* remove_dev ) (struct device*,struct subsys_interface*) ;int node; struct bus_type* subsys; } ;
struct subsys_dev_iter {int dummy; } ;
struct device {int dummy; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (struct bus_type*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,struct subsys_interface*) ;
 int FUNC_5 (struct subsys_dev_iter*) ;
 int FUNC_6 (struct subsys_dev_iter*,struct bus_type*,int *,int *) ;
 struct device* FUNC_7 (struct subsys_dev_iter*) ;

void FUNC_8(struct subsys_interface *VAR_0)
{
 struct bus_type *VAR_1;
 struct subsys_dev_iter VAR_2;
 struct device *VAR_3;

 if (!VAR_0 || !VAR_0->subsys)
  return;

 VAR_1 = VAR_0->subsys;

 FUNC_2(&VAR_1->p->mutex);
 FUNC_1(&VAR_0->node);
 if (VAR_0->remove_dev) {
  FUNC_6(&VAR_2, VAR_1, ((void*)0), ((void*)0));
  while ((VAR_3 = FUNC_7(&VAR_2)))
   VAR_0->remove_dev(VAR_3, VAR_0);
  FUNC_5(&VAR_2);
 }
 FUNC_3(&VAR_1->p->mutex);

 FUNC_0(VAR_1);
}
