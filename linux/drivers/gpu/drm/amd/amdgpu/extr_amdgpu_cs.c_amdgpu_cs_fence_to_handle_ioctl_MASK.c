
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {int what; int fence; } ;
union drm_amdgpu_fence_to_handle {TYPE_2__ out; TYPE_1__ in; } ;
struct sync_file {int file; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_device {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int VAR_2 ;
 int FUNC_1 (struct dma_fence*) ;
 struct dma_fence* FUNC_2 (struct amdgpu_device*,struct drm_file*,int *) ;
 struct dma_fence* FUNC_3 () ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct drm_syncobj**,int ,struct dma_fence*) ;
 int FUNC_6 (struct drm_syncobj*,int*) ;
 int FUNC_7 (struct drm_file*,struct drm_syncobj*,int*) ;
 int FUNC_8 (struct drm_syncobj*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 struct sync_file* FUNC_12 (struct dma_fence*) ;

int FUNC_13(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->dev_private;
 union drm_amdgpu_fence_to_handle *VAR_7 = VAR_4;
 struct dma_fence *VAR_8;
 struct drm_syncobj *VAR_9;
 struct sync_file *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = FUNC_2(VAR_6, VAR_5, &VAR_7->in.fence);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (!VAR_8)
  VAR_8 = FUNC_3();

 switch (VAR_7->in.what) {
 case 130:
  VAR_12 = FUNC_5(&VAR_9, 0, VAR_8);
  FUNC_4(VAR_8);
  if (VAR_12)
   return VAR_12;
  VAR_12 = FUNC_7(VAR_5, VAR_9, &VAR_7->out.handle);
  FUNC_8(VAR_9);
  return VAR_12;

 case 129:
  VAR_12 = FUNC_5(&VAR_9, 0, VAR_8);
  FUNC_4(VAR_8);
  if (VAR_12)
   return VAR_12;
  VAR_12 = FUNC_6(VAR_9, (int*)&VAR_7->out.handle);
  FUNC_8(VAR_9);
  return VAR_12;

 case 128:
  VAR_11 = FUNC_10(VAR_2);
  if (VAR_11 < 0) {
   FUNC_4(VAR_8);
   return VAR_11;
  }

  VAR_10 = FUNC_12(VAR_8);
  FUNC_4(VAR_8);
  if (!VAR_10) {
   FUNC_11(VAR_11);
   return -VAR_1;
  }

  FUNC_9(VAR_11, VAR_10->file);
  VAR_7->out.handle = VAR_11;
  return 0;

 default:
  return -VAR_0;
 }
}
