
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subsys_interface {int (* add_dev ) (struct device*,struct subsys_interface*) ;int node; int subsys; } ;
struct subsys_dev_iter {int dummy; } ;
struct device {int dummy; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {int mutex; int interfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bus_type* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,struct subsys_interface*) ;
 int FUNC_5 (struct subsys_dev_iter*) ;
 int FUNC_6 (struct subsys_dev_iter*,struct bus_type*,int *,int *) ;
 struct device* FUNC_7 (struct subsys_dev_iter*) ;

int FUNC_8(struct subsys_interface *VAR_2)
{
 struct bus_type *VAR_3;
 struct subsys_dev_iter VAR_4;
 struct device *VAR_5;

 if (!VAR_2 || !VAR_2->subsys)
  return -VAR_1;

 VAR_3 = FUNC_0(VAR_2->subsys);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->p->mutex);
 FUNC_1(&VAR_2->node, &VAR_3->p->interfaces);
 if (VAR_2->add_dev) {
  FUNC_6(&VAR_4, VAR_3, ((void*)0), ((void*)0));
  while ((VAR_5 = FUNC_7(&VAR_4)))
   VAR_2->add_dev(VAR_5, VAR_2);
  FUNC_5(&VAR_4);
 }
 FUNC_3(&VAR_3->p->mutex);

 return 0;
}
