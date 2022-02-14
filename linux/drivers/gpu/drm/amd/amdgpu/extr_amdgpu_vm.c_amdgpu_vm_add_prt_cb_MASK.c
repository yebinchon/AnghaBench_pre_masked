
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_prt_cb {int cb; struct amdgpu_device* adev; } ;
struct TYPE_4__ {TYPE_1__* gmc_funcs; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;
struct TYPE_3__ {int set_prt; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct dma_fence*,int *,int (*) (struct dma_fence*,int *)) ;
 int FUNC_3 (struct dma_fence*,int) ;
 struct amdgpu_prt_cb* FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_1,
     struct dma_fence *VAR_2)
{
 struct amdgpu_prt_cb *VAR_3;

 if (!VAR_1->gmc.gmc_funcs->set_prt)
  return;

 VAR_3 = FUNC_4(sizeof(struct amdgpu_prt_cb), VAR_0);
 if (!VAR_3) {

  if (VAR_2)
   FUNC_3(VAR_2, 0);

  FUNC_1(VAR_1);
 } else {
  VAR_3->adev = VAR_1;
  if (!VAR_2 || FUNC_2(VAR_2, &VAR_3->cb,
           FUNC_0))
   FUNC_0(VAR_2, &VAR_3->cb);
 }
}
