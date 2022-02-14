
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgem_file {int fence_mutex; int fence_idr; } ;
struct drm_vgem_fence_attach {int flags; int out_fence; int handle; scalar_t__ pad; } ;
struct drm_gem_object {struct dma_resv* resv; } ;
struct drm_file {struct vgem_file* driver_priv; } ;
struct drm_device {int dummy; } ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_resv*,struct dma_fence*) ;
 int FUNC_3 (struct dma_resv*,struct dma_fence*) ;
 int FUNC_4 (struct dma_resv*,int *) ;
 int FUNC_5 (struct dma_resv*,int) ;
 int FUNC_6 (struct dma_resv*,int) ;
 int FUNC_7 (struct dma_resv*) ;
 struct drm_gem_object* FUNC_8 (struct drm_file*,int ) ;
 int FUNC_9 (struct drm_gem_object*) ;
 int FUNC_10 (int *,struct dma_fence*,int,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct dma_fence* FUNC_13 (struct vgem_file*,int) ;

int FUNC_14(struct drm_device *VAR_6,
       void *VAR_7,
       struct drm_file *VAR_8)
{
 struct drm_vgem_fence_attach *VAR_9 = VAR_7;
 struct vgem_file *VAR_10 = VAR_8->driver_priv;
 struct dma_resv *VAR_11;
 struct drm_gem_object *VAR_12;
 struct dma_fence *VAR_13;
 int VAR_14;

 if (VAR_9->flags & ~VAR_5)
  return -VAR_1;

 if (VAR_9->pad)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_8, VAR_9->handle);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_13(VAR_10, VAR_9->flags);
 if (!VAR_13) {
  VAR_14 = -VAR_3;
  goto err;
 }


 VAR_11 = VAR_12->resv;
 if (!FUNC_6(VAR_11,
        VAR_9->flags & VAR_5)) {
  VAR_14 = -VAR_0;
  goto err_fence;
 }


 VAR_14 = 0;
 FUNC_4(VAR_11, ((void*)0));
 if (VAR_9->flags & VAR_5)
  FUNC_2(VAR_11, VAR_13);
 else if ((VAR_14 = FUNC_5(VAR_11, 1)) == 0)
  FUNC_3(VAR_11, VAR_13);
 FUNC_7(VAR_11);


 if (VAR_14 == 0) {
  FUNC_11(&VAR_10->fence_mutex);
  VAR_14 = FUNC_10(&VAR_10->fence_idr, VAR_13, 1, 0, VAR_4);
  FUNC_12(&VAR_10->fence_mutex);
  if (VAR_14 > 0) {
   VAR_9->out_fence = VAR_14;
   VAR_14 = 0;
  }
 }
err_fence:
 if (VAR_14) {
  FUNC_1(VAR_13);
  FUNC_0(VAR_13);
 }
err:
 FUNC_9(VAR_12);
 return VAR_14;
}
