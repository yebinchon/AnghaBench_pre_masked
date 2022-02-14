
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_transfer {int flags; int src_point; int src_handle; int dst_handle; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 struct drm_syncobj* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_file*,int ,int ,int ,struct dma_fence**) ;
 int FUNC_3 (struct drm_syncobj*) ;
 int FUNC_4 (struct drm_syncobj*,struct dma_fence*) ;

__attribute__((used)) static int
FUNC_5(struct drm_file *VAR_1,
          struct drm_syncobj_transfer *VAR_2)
{
 struct drm_syncobj *VAR_3 = ((void*)0);
 struct dma_fence *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_1(VAR_1, VAR_2->dst_handle);
 if (!VAR_3)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_1, VAR_2->src_handle,
         VAR_2->src_point, VAR_2->flags, &VAR_4);
 if (VAR_5)
  goto err;
 FUNC_4(VAR_3, VAR_4);
 FUNC_0(VAR_4);
err:
 FUNC_3(VAR_3);

 return VAR_5;
}
