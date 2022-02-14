
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; unsigned int first_signaled; } ;
struct TYPE_3__ {unsigned int fence_count; int timeout_ns; } ;
union drm_amdgpu_wait_fences {TYPE_2__ out; TYPE_1__ in; } ;
typedef unsigned int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_amdgpu_fence {int dummy; } ;
struct dma_fence {long error; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 long FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 (struct amdgpu_device*,struct drm_file*,struct drm_amdgpu_fence*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct dma_fence*) ;
 long FUNC_5 (struct dma_fence**,unsigned int,int,unsigned long,unsigned int*) ;
 struct dma_fence** FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct dma_fence**) ;
 int FUNC_8 (union drm_amdgpu_wait_fences*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_2,
        struct drm_file *VAR_3,
        union drm_amdgpu_wait_fences *VAR_4,
        struct drm_amdgpu_fence *VAR_5)
{
 unsigned long VAR_6 = FUNC_3(VAR_4->in.timeout_ns);
 uint32_t VAR_7 = VAR_4->in.fence_count;
 uint32_t VAR_8 = ~0;
 struct dma_fence **VAR_9;
 unsigned int VAR_10;
 long VAR_11;


 VAR_9 = FUNC_6(VAR_7, sizeof(struct dma_fence *), VAR_1);

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  struct dma_fence *VAR_12;

  VAR_12 = FUNC_2(VAR_2, VAR_3, &VAR_5[VAR_10]);
  if (FUNC_0(VAR_12)) {
   VAR_11 = FUNC_1(VAR_12);
   goto err_free_fence_array;
  } else if (VAR_12) {
   VAR_9[VAR_10] = VAR_12;
  } else {
   VAR_11 = 1;
   VAR_8 = VAR_10;
   goto out;
  }
 }

 VAR_11 = FUNC_5(VAR_9, VAR_7, 1, VAR_6,
           &VAR_8);
 if (VAR_11 < 0)
  goto err_free_fence_array;

out:
 FUNC_8(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->out.status = (VAR_11 > 0);
 VAR_4->out.first_signaled = VAR_8;

 if (VAR_8 < VAR_7 && VAR_9[VAR_8])
  VAR_11 = VAR_9[VAR_8]->error;
 else
  VAR_11 = 0;

err_free_fence_array:
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_4(VAR_9[VAR_10]);
 FUNC_7(VAR_9);

 return VAR_11;
}
