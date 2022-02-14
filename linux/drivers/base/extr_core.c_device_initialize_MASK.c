
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int suppliers; int consumers; } ;
struct TYPE_4__ {int kset; } ;
struct device {TYPE_1__ links; int msi_list; int devres_head; int devres_lock; int mutex; int lockdep_mutex; int dma_pools; TYPE_2__ kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct device *VAR_3)
{
 VAR_3->kobj.kset = VAR_2;
 FUNC_2(&VAR_3->kobj, &VAR_1);
 FUNC_0(&VAR_3->dma_pools);
 FUNC_4(&VAR_3->mutex);



 FUNC_3(&VAR_3->mutex);
 FUNC_6(&VAR_3->devres_lock);
 FUNC_0(&VAR_3->devres_head);
 FUNC_1(VAR_3);
 FUNC_5(VAR_3, -1);



 FUNC_0(&VAR_3->links.consumers);
 FUNC_0(&VAR_3->links.suppliers);
 VAR_3->links.status = VAR_0;
}
