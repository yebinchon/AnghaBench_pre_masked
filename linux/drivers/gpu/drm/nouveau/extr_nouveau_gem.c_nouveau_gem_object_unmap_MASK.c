
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_vma {TYPE_1__* vmm; int head; TYPE_2__* fence; } ;
struct TYPE_6__ {int func; } ;
struct nouveau_gem_object_unmap {TYPE_3__ work; struct nouveau_vma* vma; } ;
struct nouveau_bo {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_5__ {struct dma_fence base; } ;
struct TYPE_4__ {int cli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dma_fence*,int,int) ;
 struct nouveau_gem_object_unmap* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct dma_fence*,TYPE_3__*) ;
 int FUNC_5 (struct nouveau_vma*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct nouveau_bo *VAR_3, struct nouveau_vma *VAR_4)
{
 struct dma_fence *VAR_5 = VAR_4->fence ? &VAR_4->fence->base : ((void*)0);
 struct nouveau_gem_object_unmap *VAR_6;

 FUNC_3(&VAR_4->head);

 if (!VAR_5) {
  FUNC_5(VAR_4);
  return;
 }

 if (!(VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0))) {
  FUNC_0(FUNC_1(VAR_5, 0, 2 * VAR_1) <= 0);
  FUNC_5(VAR_4);
  return;
 }

 VAR_6->work.func = VAR_2;
 VAR_6->vma = VAR_4;
 FUNC_4(VAR_4->vmm->cli, VAR_5, &VAR_6->work);
}
