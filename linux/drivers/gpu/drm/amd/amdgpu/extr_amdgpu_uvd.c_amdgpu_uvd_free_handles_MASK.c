
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {int max_handles; int * handles; struct drm_file** filp; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct amdgpu_ring*,scalar_t__,int,struct dma_fence**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*,int) ;

void FUNC_6(struct amdgpu_device *VAR_0, struct drm_file *VAR_1)
{
 struct amdgpu_ring *VAR_2 = &VAR_0->uvd.inst[0].ring;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->uvd.max_handles; ++VAR_3) {
  uint32_t VAR_5 = FUNC_2(&VAR_0->uvd.handles[VAR_3]);

  if (VAR_5 != 0 && VAR_0->uvd.filp[VAR_3] == VAR_1) {
   struct dma_fence *VAR_6;

   VAR_4 = FUNC_1(VAR_2, VAR_5, 0,
             &VAR_6);
   if (VAR_4) {
    FUNC_0("Error destroying UVD %d!\n", VAR_4);
    continue;
   }

   FUNC_5(VAR_6, 0);
   FUNC_4(VAR_6);

   VAR_0->uvd.filp[VAR_3] = ((void*)0);
   FUNC_3(&VAR_0->uvd.handles[VAR_3], 0);
  }
 }
}
