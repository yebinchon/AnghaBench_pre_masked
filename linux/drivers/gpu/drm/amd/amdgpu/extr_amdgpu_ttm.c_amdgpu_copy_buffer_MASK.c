
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_7__ {int ready; } ;
struct amdgpu_ring {TYPE_1__ sched; struct amdgpu_device* adev; } ;
struct amdgpu_job {int vm_needs_flush; TYPE_5__* ibs; int sync; int vm_pd_addr; } ;
struct TYPE_10__ {int entity; TYPE_2__* buffer_funcs; } ;
struct TYPE_9__ {int bo; } ;
struct amdgpu_device {TYPE_4__ mman; TYPE_3__ gart; } ;
struct TYPE_11__ {unsigned int length_dw; } ;
struct TYPE_8__ {unsigned int copy_num_dw; scalar_t__ copy_max_bytes; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_device*,TYPE_5__*,int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct amdgpu_device*,unsigned int,struct amdgpu_job**) ;
 int FUNC_6 (struct amdgpu_job*) ;
 int FUNC_7 (struct amdgpu_job*,int *,int ,struct dma_fence**) ;
 int FUNC_8 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 int FUNC_9 (struct amdgpu_ring*,TYPE_5__*) ;
 int FUNC_10 (struct amdgpu_device*,int *,struct dma_resv*,int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

int FUNC_12(struct amdgpu_ring *VAR_2, uint64_t VAR_3,
         uint64_t VAR_4, uint32_t VAR_5,
         struct dma_resv *VAR_6,
         struct dma_fence **VAR_7, bool VAR_8,
         bool VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_2->adev;
 struct amdgpu_job *VAR_11;

 uint32_t VAR_12;
 unsigned VAR_13, VAR_14;
 unsigned VAR_15;
 int VAR_16;

 if (VAR_8 && !VAR_2->sched.ready) {
  FUNC_1("Trying to move memory with ring turned off.\n");
  return -VAR_1;
 }

 VAR_12 = VAR_10->mman.buffer_funcs->copy_max_bytes;
 VAR_13 = FUNC_0(VAR_5, VAR_12);
 VAR_14 = VAR_13 * VAR_10->mman.buffer_funcs->copy_num_dw;


 while (VAR_14 & 0x7)
  VAR_14++;

 VAR_16 = FUNC_5(VAR_10, VAR_14 * 4, &VAR_11);
 if (VAR_16)
  return VAR_16;

 if (VAR_9) {
  VAR_11->vm_pd_addr = FUNC_4(VAR_10->gart.bo);
  VAR_11->vm_needs_flush = 1;
 }
 if (VAR_6) {
  VAR_16 = FUNC_10(VAR_10, &VAR_11->sync, VAR_6,
         VAR_0,
         0);
  if (VAR_16) {
   FUNC_1("sync failed (%d).\n", VAR_16);
   goto error_free;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  uint32_t VAR_17 = FUNC_11(VAR_5, VAR_12);

  FUNC_3(VAR_10, &VAR_11->ibs[0], VAR_3,
     VAR_4, VAR_17);

  VAR_3 += VAR_17;
  VAR_4 += VAR_17;
  VAR_5 -= VAR_17;
 }

 FUNC_9(VAR_2, &VAR_11->ibs[0]);
 FUNC_2(VAR_11->ibs[0].length_dw > VAR_14);
 if (VAR_8)
  VAR_16 = FUNC_8(VAR_11, VAR_2, VAR_7);
 else
  VAR_16 = FUNC_7(VAR_11, &VAR_10->mman.entity,
          VAR_0, VAR_7);
 if (VAR_16)
  goto error_free;

 return VAR_16;

error_free:
 FUNC_6(VAR_11);
 FUNC_1("Error scheduling IBs (%d)\n", VAR_16);
 return VAR_16;
}
