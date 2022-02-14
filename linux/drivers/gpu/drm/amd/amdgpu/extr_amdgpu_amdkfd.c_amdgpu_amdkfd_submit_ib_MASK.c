
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct kgd_dev {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_job {void* vmid; struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {void** ptr; void* length_dw; int gpu_addr; } ;
struct TYPE_6__ {TYPE_2__* instance; } ;
struct TYPE_4__ {struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {TYPE_3__ sdma; TYPE_1__ gfx; } ;
typedef enum kgd_engine_type { ____Placeholder_kgd_engine_type } kgd_engine_type ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (struct amdgpu_ring*,int,struct amdgpu_ib*,struct amdgpu_job*,struct dma_fence**) ;
 int FUNC_2 (struct amdgpu_device*,int,struct amdgpu_job**,int *) ;
 int FUNC_3 (struct amdgpu_job*) ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*,int) ;
 int FUNC_6 (struct amdgpu_ib*,int ,int) ;
 int FUNC_7 (char*,int) ;

int FUNC_8(struct kgd_dev *VAR_1, enum kgd_engine_type VAR_2,
    uint32_t VAR_3, uint64_t VAR_4,
    uint32_t *VAR_5, uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_1;
 struct amdgpu_job *VAR_8;
 struct amdgpu_ib *VAR_9;
 struct amdgpu_ring *VAR_10;
 struct dma_fence *VAR_11 = ((void*)0);
 int VAR_12;

 switch (VAR_2) {
 case 130:
  VAR_10 = &VAR_7->gfx.compute_ring[0];
  break;
 case 129:
  VAR_10 = &VAR_7->sdma.instance[0].ring;
  break;
 case 128:
  VAR_10 = &VAR_7->sdma.instance[1].ring;
  break;
 default:
  FUNC_7("Invalid engine in IB submission: %d\n", VAR_2);
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_12 = FUNC_2(VAR_7, 1, &VAR_8, ((void*)0));
 if (VAR_12)
  goto err;

 VAR_9 = &VAR_8->ibs[0];
 FUNC_6(VAR_9, 0, sizeof(struct amdgpu_ib));

 VAR_9->gpu_addr = VAR_4;
 VAR_9->ptr = VAR_5;
 VAR_9->length_dw = VAR_6;

 VAR_8->vmid = VAR_3;

 VAR_12 = FUNC_1(VAR_10, 1, VAR_9, VAR_8, &VAR_11);
 if (VAR_12) {
  FUNC_0("amdgpu: failed to schedule IB.\n");
  goto err_ib_sched;
 }

 VAR_12 = FUNC_5(VAR_11, 0);

err_ib_sched:
 FUNC_4(VAR_11);
 FUNC_3(VAR_8);
err:
 return VAR_12;
}
