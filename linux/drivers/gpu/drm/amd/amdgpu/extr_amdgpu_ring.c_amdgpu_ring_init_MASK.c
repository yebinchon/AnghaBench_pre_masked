
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ring {size_t idx; int rptr_offs; int wptr_offs; int fence_offs; int trail_fence_offs; int* trail_fence_cpu_addr; int cond_exe_offs; int* cond_exe_cpu_addr; int ring_size; int buf_mask; int ptr_mask; unsigned int max_dw; int * num_jobs; int priority_mutex; int priority; int ring; int gpu_addr; int * ring_obj; TYPE_4__* funcs; scalar_t__ cond_exe_gpu_addr; scalar_t__ trail_fence_gpu_addr; struct amdgpu_device* adev; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_7__ {int* wb; scalar_t__ gpu_addr; } ;
struct TYPE_6__ {TYPE_1__* instance; } ;
struct amdgpu_device {scalar_t__ num_rings; int dev; TYPE_3__ wb; struct amdgpu_ring** rings; TYPE_2__ sdma; } ;
struct TYPE_8__ {scalar_t__ type; int extra_dw; scalar_t__ support_64bit_ptrs; } ;
struct TYPE_5__ {struct amdgpu_ring page; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct amdgpu_device*,int,int ,int ,int **,int *,void**) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_device*,int*) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*,struct amdgpu_irq_src*,unsigned int) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned int) ;

int FUNC_12(struct amdgpu_device *VAR_8, struct amdgpu_ring *VAR_9,
       unsigned VAR_10, struct amdgpu_irq_src *VAR_11,
       unsigned VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15 = VAR_7;







 if (VAR_9->funcs->type == VAR_2)
  VAR_15 = FUNC_9(VAR_15, 256);
 else if (VAR_9 == &VAR_8->sdma.instance[0].page)
  VAR_15 = 256;

 if (VAR_9->adev == ((void*)0)) {
  if (VAR_8->num_rings >= VAR_1)
   return -VAR_5;

  VAR_9->adev = VAR_8;
  VAR_9->idx = VAR_8->num_rings++;
  VAR_8->rings[VAR_9->idx] = VAR_9;
  VAR_13 = FUNC_4(VAR_9, VAR_15);
  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_8, &VAR_9->rptr_offs);
 if (VAR_13) {
  FUNC_8(VAR_8->dev, "(%d) ring rptr_offs wb alloc failed\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_8, &VAR_9->wptr_offs);
 if (VAR_13) {
  FUNC_8(VAR_8->dev, "(%d) ring wptr_offs wb alloc failed\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_8, &VAR_9->fence_offs);
 if (VAR_13) {
  FUNC_8(VAR_8->dev, "(%d) ring fence_offs wb alloc failed\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_8, &VAR_9->trail_fence_offs);
 if (VAR_13) {
  FUNC_8(VAR_8->dev,
   "(%d) ring trail_fence_offs wb alloc failed\n", VAR_13);
  return VAR_13;
 }
 VAR_9->trail_fence_gpu_addr =
  VAR_8->wb.gpu_addr + (VAR_9->trail_fence_offs * 4);
 VAR_9->trail_fence_cpu_addr = &VAR_8->wb.wb[VAR_9->trail_fence_offs];

 VAR_13 = FUNC_3(VAR_8, &VAR_9->cond_exe_offs);
 if (VAR_13) {
  FUNC_8(VAR_8->dev, "(%d) ring cond_exec_polling wb alloc failed\n", VAR_13);
  return VAR_13;
 }
 VAR_9->cond_exe_gpu_addr = VAR_8->wb.gpu_addr + (VAR_9->cond_exe_offs * 4);
 VAR_9->cond_exe_cpu_addr = &VAR_8->wb.wb[VAR_9->cond_exe_offs];

 *VAR_9->cond_exe_cpu_addr = 1;

 VAR_13 = FUNC_5(VAR_9, VAR_11, VAR_12);
 if (VAR_13) {
  FUNC_8(VAR_8->dev, "failed initializing fences (%d).\n", VAR_13);
  return VAR_13;
 }

 VAR_9->ring_size = FUNC_11(VAR_10 * 4 * VAR_15);

 VAR_9->buf_mask = (VAR_9->ring_size / 4) - 1;
 VAR_9->ptr_mask = VAR_9->funcs->support_64bit_ptrs ?
  0xffffffffffffffff : VAR_9->buf_mask;

 if (VAR_9->ring_obj == ((void*)0)) {
  VAR_13 = FUNC_1(VAR_8, VAR_9->ring_size + VAR_9->funcs->extra_dw, VAR_6,
         VAR_0,
         &VAR_9->ring_obj,
         &VAR_9->gpu_addr,
         (void **)&VAR_9->ring);
  if (VAR_13) {
   FUNC_8(VAR_8->dev, "(%d) ring create failed\n", VAR_13);
   return VAR_13;
  }
  FUNC_6(VAR_9);
 }

 VAR_9->max_dw = VAR_10;
 VAR_9->priority = VAR_4;
 FUNC_10(&VAR_9->priority_mutex);

 for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14)
  FUNC_7(&VAR_9->num_jobs[VAR_14], 0);

 if (FUNC_2(VAR_8, VAR_9)) {
  FUNC_0("Failed to register debugfs file for rings !\n");
 }

 return 0;
}
