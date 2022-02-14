
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dma_fence {size_t context; } ;
struct TYPE_2__ {int lock; } ;
struct amdgpu_sa_manager {TYPE_1__ wq; int * flist; } ;
struct amdgpu_sa_bo {int flist; int fence; struct amdgpu_sa_manager* manager; } ;
struct amdgpu_device {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct amdgpu_sa_bo*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct amdgpu_device *VAR_1, struct amdgpu_sa_bo **VAR_2,
         struct dma_fence *VAR_3)
{
 struct amdgpu_sa_manager *VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0)) {
  return;
 }

 VAR_4 = (*VAR_2)->manager;
 FUNC_4(&VAR_4->wq.lock);
 if (VAR_3 && !FUNC_2(VAR_3)) {
  uint32_t VAR_5;

  (*VAR_2)->fence = FUNC_1(VAR_3);
  VAR_5 = VAR_3->context % VAR_0;
  FUNC_3(&(*VAR_2)->flist, &VAR_4->flist[VAR_5]);
 } else {
  FUNC_0(*VAR_2);
 }
 FUNC_6(&VAR_4->wq);
 FUNC_5(&VAR_4->wq.lock);
 *VAR_2 = ((void*)0);
}
