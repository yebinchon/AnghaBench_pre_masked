
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device_driver {TYPE_1__* p; } ;
struct device {TYPE_2__* p; } ;
struct TYPE_4__ {int knode_driver; } ;
struct TYPE_3__ {int klist_devices; } ;


 int VAR_0 ;
 int FUNC_0 (struct klist_iter*) ;
 int FUNC_1 (int *,struct klist_iter*,int *) ;
 struct device* FUNC_2 (struct klist_iter*) ;

int FUNC_3(struct device_driver *VAR_1, struct device *VAR_2,
      void *VAR_3, int (*VAR_4)(struct device *, void *))
{
 struct klist_iter VAR_5;
 struct device *VAR_6;
 int VAR_7 = 0;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_1->p->klist_devices, &VAR_5,
        VAR_2 ? &VAR_2->p->knode_driver : ((void*)0));
 while (!VAR_7 && (VAR_6 = FUNC_2(&VAR_5)))
  VAR_7 = VAR_4(VAR_6, VAR_3);
 FUNC_0(&VAR_5);
 return VAR_7;
}
