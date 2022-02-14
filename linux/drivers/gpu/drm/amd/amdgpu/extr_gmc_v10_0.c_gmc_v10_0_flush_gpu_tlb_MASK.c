
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {TYPE_3__* funcs; } ;
struct amdgpu_job {int vm_needs_flush; TYPE_5__* ibs; int vm_pd_addr; } ;
struct TYPE_9__ {int gtt_window_lock; int entity; int buffer_funcs_enabled; struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_7__ {int bo; } ;
struct amdgpu_device {TYPE_4__ mman; TYPE_2__ gart; scalar_t__ in_gpu_reset; int ib_pool_ready; TYPE_1__* nbio_funcs; } ;
struct TYPE_10__ {int length_dw; int * ptr; } ;
struct TYPE_8__ {int nop; } ;
struct TYPE_6__ {int (* hdp_flush ) (struct amdgpu_device*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,int,struct amdgpu_job**) ;
 int FUNC_4 (struct amdgpu_job*) ;
 int FUNC_5 (struct amdgpu_job*,int *,int ,struct dma_fence**) ;
 int FUNC_6 (struct amdgpu_ring*,TYPE_5__*) ;
 int FUNC_7 (struct dma_fence*) ;
 int FUNC_8 (struct dma_fence*,int) ;
 int FUNC_9 (struct amdgpu_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct amdgpu_device*,int *) ;

__attribute__((used)) static void FUNC_13(struct amdgpu_device *VAR_3, uint32_t VAR_4,
     uint32_t VAR_5, uint32_t VAR_6)
{
 struct amdgpu_ring *VAR_7 = VAR_3->mman.buffer_funcs_ring;
 struct dma_fence *VAR_8;
 struct amdgpu_job *VAR_9;

 int VAR_10;


 VAR_3->nbio_funcs->hdp_flush(VAR_3, ((void*)0));

 FUNC_10(&VAR_3->mman.gtt_window_lock);

 if (VAR_5 == VAR_2) {
  FUNC_9(VAR_3, VAR_4, VAR_2, 0);
  FUNC_11(&VAR_3->mman.gtt_window_lock);
  return;
 }

 FUNC_0(VAR_5 != VAR_1);

 if (!VAR_3->mman.buffer_funcs_enabled ||
     !VAR_3->ib_pool_ready ||
     VAR_3->in_gpu_reset) {
  FUNC_9(VAR_3, VAR_4, VAR_1, 0);
  FUNC_11(&VAR_3->mman.gtt_window_lock);
  return;
 }






 VAR_10 = FUNC_3(VAR_3, 16 * 4, &VAR_9);
 if (VAR_10)
  goto error_alloc;

 VAR_9->vm_pd_addr = FUNC_2(VAR_3->gart.bo);
 VAR_9->vm_needs_flush = 1;
 VAR_9->ibs->ptr[VAR_9->ibs->length_dw++] = VAR_7->funcs->nop;
 FUNC_6(VAR_7, &VAR_9->ibs[0]);
 VAR_10 = FUNC_5(VAR_9, &VAR_3->mman.entity,
         VAR_0, &VAR_8);
 if (VAR_10)
  goto error_submit;

 FUNC_11(&VAR_3->mman.gtt_window_lock);

 FUNC_8(VAR_8, 0);
 FUNC_7(VAR_8);

 return;

error_submit:
 FUNC_4(VAR_9);

error_alloc:
 FUNC_11(&VAR_3->mman.gtt_window_lock);
 FUNC_1("Error flushing GPU TLB using the SDMA (%d)!\n", VAR_10);
}
