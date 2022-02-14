
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgem_file {int fence_mutex; int fence_idr; } ;
struct drm_vgem_fence_signal {int fence; scalar_t__ flags; } ;
struct drm_file {struct vgem_file* driver_priv; } ;
struct drm_device {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct dma_fence*) ;
 struct dma_fence* FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct drm_device *VAR_3,
       void *VAR_4,
       struct drm_file *VAR_5)
{
 struct vgem_file *VAR_6 = VAR_5->driver_priv;
 struct drm_vgem_fence_signal *VAR_7 = VAR_4;
 struct dma_fence *VAR_8;
 int VAR_9 = 0;

 if (VAR_7->flags)
  return -VAR_0;

 FUNC_6(&VAR_6->fence_mutex);
 VAR_8 = FUNC_5(&VAR_6->fence_idr, ((void*)0), VAR_7->fence);
 FUNC_7(&VAR_6->fence_mutex);
 if (!VAR_8)
  return -VAR_1;
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (FUNC_2(VAR_8))
  VAR_9 = -VAR_2;

 FUNC_4(VAR_8);
 FUNC_3(VAR_8);
 return VAR_9;
}
