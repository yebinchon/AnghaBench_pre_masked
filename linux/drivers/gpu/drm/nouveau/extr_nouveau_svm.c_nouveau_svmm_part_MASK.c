
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_svmm {TYPE_3__* vmm; } ;
struct nouveau_ivmm {int head; } ;
struct TYPE_8__ {int mutex; } ;
struct TYPE_7__ {TYPE_2__* cli; } ;
struct TYPE_6__ {TYPE_1__* drm; } ;
struct TYPE_5__ {TYPE_4__* svm; } ;


 int FUNC_0 (struct nouveau_ivmm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nouveau_ivmm* FUNC_4 (TYPE_4__*,int ) ;

void
FUNC_5(struct nouveau_svmm *VAR_0, u64 VAR_1)
{
 struct nouveau_ivmm *VAR_2;
 if (VAR_0) {
  FUNC_2(&VAR_0->vmm->cli->drm->svm->mutex);
  VAR_2 = FUNC_4(VAR_0->vmm->cli->drm->svm, VAR_1);
  if (VAR_2) {
   FUNC_1(&VAR_2->head);
   FUNC_0(VAR_2);
  }
  FUNC_3(&VAR_0->vmm->cli->drm->svm->mutex);
 }
}
