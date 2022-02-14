
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_9__ {TYPE_3__* bo; } ;
struct TYPE_10__ {TYPE_4__ base; } ;
struct amdgpu_vm {TYPE_5__ root; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {struct dma_resv* resv; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__ tbo; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct dma_fence*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct dma_resv*,struct dma_fence**,unsigned int*,struct dma_fence***) ;
 int FUNC_3 (struct dma_resv*,int,int,int ) ;
 int FUNC_4 (struct dma_fence**) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_1, struct amdgpu_vm *VAR_2)
{
 struct dma_resv *VAR_3 = VAR_2->root.base.bo->tbo.base.resv;
 struct dma_fence *VAR_4, **VAR_5;
 unsigned VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, &VAR_4,
           &VAR_7, &VAR_5);
 if (VAR_8) {



  FUNC_3(VAR_3, 1, 0,
          VAR_0);
  return;
 }


 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, VAR_5[VAR_6]);
 }

 FUNC_4(VAR_5);
}
