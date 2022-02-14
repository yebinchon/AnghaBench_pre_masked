
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_cli {TYPE_2__* drm; int base; int device; int mmu; int vmm; int svm; int worker; int work; } ;
struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {TYPE_1__ master; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct nouveau_cli*) ;

__attribute__((used)) static void
FUNC_10(struct nouveau_cli *VAR_0)
{





 FUNC_1(&VAR_0->work);
 FUNC_0(!FUNC_2(&VAR_0->worker));

 FUNC_9(VAR_0);
 FUNC_5(&VAR_0->svm);
 FUNC_5(&VAR_0->vmm);
 FUNC_8(&VAR_0->mmu);
 FUNC_7(&VAR_0->device);
 FUNC_3(&VAR_0->drm->master.lock);
 FUNC_6(&VAR_0->base);
 FUNC_4(&VAR_0->drm->master.lock);
}
