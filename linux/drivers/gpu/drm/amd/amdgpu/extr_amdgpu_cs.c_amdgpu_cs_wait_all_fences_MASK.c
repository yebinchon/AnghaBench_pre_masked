
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_3__ {unsigned int fence_count; int timeout_ns; } ;
union drm_amdgpu_wait_fences {TYPE_2__ out; TYPE_1__ in; } ;
typedef unsigned int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_amdgpu_fence {int dummy; } ;
struct dma_fence {int error; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 (struct amdgpu_device*,struct drm_file*,struct drm_amdgpu_fence*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct dma_fence*) ;
 long FUNC_5 (struct dma_fence*,int,unsigned long) ;
 int FUNC_6 (union drm_amdgpu_wait_fences*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_0,
         struct drm_file *VAR_1,
         union drm_amdgpu_wait_fences *VAR_2,
         struct drm_amdgpu_fence *VAR_3)
{
 uint32_t VAR_4 = VAR_2->in.fence_count;
 unsigned int VAR_5;
 long VAR_6 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct dma_fence *VAR_7;
  unsigned long VAR_8 = FUNC_3(VAR_2->in.timeout_ns);

  VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_3[VAR_5]);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  else if (!VAR_7)
   continue;

  VAR_6 = FUNC_5(VAR_7, 1, VAR_8);
  FUNC_4(VAR_7);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_6 == 0)
   break;

  if (VAR_7->error)
   return VAR_7->error;
 }

 FUNC_6(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->out.status = (VAR_6 > 0);

 return 0;
}
