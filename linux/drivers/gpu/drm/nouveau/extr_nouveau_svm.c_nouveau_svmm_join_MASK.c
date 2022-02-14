
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_svmm {TYPE_4__* vmm; } ;
struct nouveau_ivmm {int head; int inst; struct nouveau_svmm* svmm; } ;
struct TYPE_8__ {TYPE_3__* cli; } ;
struct TYPE_7__ {TYPE_2__* drm; } ;
struct TYPE_6__ {TYPE_1__* svm; } ;
struct TYPE_5__ {int mutex; int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_ivmm* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct nouveau_svmm *VAR_2, u64 VAR_3)
{
 struct nouveau_ivmm *VAR_4;
 if (VAR_2) {
  if (!(VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1)))
   return -VAR_0;
  VAR_4->svmm = VAR_2;
  VAR_4->inst = VAR_3;

  FUNC_2(&VAR_2->vmm->cli->drm->svm->mutex);
  FUNC_1(&VAR_4->head, &VAR_2->vmm->cli->drm->svm->inst);
  FUNC_3(&VAR_2->vmm->cli->drm->svm->mutex);
 }
 return 0;
}
