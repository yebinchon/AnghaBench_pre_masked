
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int initialized; unsigned int num_fences_mask; int fences; int lock; int fallback_timer; int last_seq; scalar_t__ sync_seq; scalar_t__ gpu_addr; int * cpu_addr; } ;
struct amdgpu_ring {int name; int sched; struct amdgpu_device* adev; TYPE_2__* funcs; TYPE_1__ fence_drv; } ;
struct amdgpu_device {long gfx_timeout; long compute_timeout; long sdma_timeout; long video_timeout; } ;
struct TYPE_4__ {int type; } ;




 int VAR_0 ;

 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,unsigned int,int ,long,int ) ;
 int FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

int FUNC_7(struct amdgpu_ring *VAR_7,
      unsigned VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_7->adev;
 long VAR_10;
 int VAR_11;

 if (!VAR_9)
  return -VAR_1;


 if ((VAR_8 & (VAR_8 - 1)) != 0)
  return -VAR_1;

 VAR_7->fence_drv.cpu_addr = ((void*)0);
 VAR_7->fence_drv.gpu_addr = 0;
 VAR_7->fence_drv.sync_seq = 0;
 FUNC_2(&VAR_7->fence_drv.last_seq, 0);
 VAR_7->fence_drv.initialized = 0;

 FUNC_6(&VAR_7->fence_drv.fallback_timer, VAR_4, 0);

 VAR_7->fence_drv.num_fences_mask = VAR_8 * 2 - 1;
 FUNC_5(&VAR_7->fence_drv.lock);
 VAR_7->fence_drv.fences = FUNC_4(VAR_8 * 2, sizeof(void *),
      VAR_3);
 if (!VAR_7->fence_drv.fences)
  return -VAR_2;


 if (VAR_7->funcs->type != VAR_0) {
  switch (VAR_7->funcs->type) {
  case 129:
   VAR_10 = VAR_9->gfx_timeout;
   break;
  case 130:
   if (!FUNC_1(VAR_7->adev))
    VAR_10 = VAR_9->compute_timeout;
   else
    VAR_10 = VAR_9->gfx_timeout;
   break;
  case 128:
   VAR_10 = VAR_9->sdma_timeout;
   break;
  default:
   VAR_10 = VAR_9->video_timeout;
   break;
  }

  VAR_11 = FUNC_3(&VAR_7->sched, &VAR_6,
       VAR_8, VAR_5,
       VAR_10, VAR_7->name);
  if (VAR_11) {
   FUNC_0("Failed to create scheduler on ring %s.\n",
      VAR_7->name);
   return VAR_11;
  }
 }

 return 0;
}
