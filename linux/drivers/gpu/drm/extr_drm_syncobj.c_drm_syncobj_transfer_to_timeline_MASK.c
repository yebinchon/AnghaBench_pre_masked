
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj_transfer {int dst_point; int flags; int src_point; int src_handle; int dst_handle; } ;
struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence_chain {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (struct drm_syncobj*,struct dma_fence_chain*,struct dma_fence*,int ) ;
 struct drm_syncobj* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_file*,int ,int ,int ,struct dma_fence**) ;
 int FUNC_4 (struct drm_syncobj*) ;
 struct dma_fence_chain* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct drm_file *VAR_3,
         struct drm_syncobj_transfer *VAR_4)
{
 struct drm_syncobj *VAR_5 = ((void*)0);
 struct dma_fence *VAR_6;
 struct dma_fence_chain *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_4->dst_handle);
 if (!VAR_5) {
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_3, VAR_4->src_handle,
         VAR_4->src_point, VAR_4->flags,
         &VAR_6);
 if (VAR_8)
  goto err;
 VAR_7 = FUNC_5(sizeof(struct dma_fence_chain), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto err1;
 }
 FUNC_1(VAR_5, VAR_7, VAR_6, VAR_4->dst_point);
err1:
 FUNC_0(VAR_6);
err:
 FUNC_4(VAR_5);

 return VAR_8;
}
