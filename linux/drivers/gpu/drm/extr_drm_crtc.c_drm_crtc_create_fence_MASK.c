
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int fence_seqno; int fence_context; int fence_lock; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *,int *,int ,int ) ;
 int VAR_1 ;
 struct dma_fence* FUNC_1 (int,int ) ;

struct dma_fence *FUNC_2(struct drm_crtc *VAR_2)
{
 struct dma_fence *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(VAR_3, &VAR_1, &VAR_2->fence_lock,
         VAR_2->fence_context, ++VAR_2->fence_seqno);

 return VAR_3;
}
