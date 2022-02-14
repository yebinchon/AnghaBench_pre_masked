
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {struct dma_fence* fence; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;

void
FUNC_1(struct drm_plane_state *VAR_0,
          struct dma_fence *VAR_1)
{
 if (VAR_0->fence) {
  FUNC_0(VAR_1);
  return;
 }

 VAR_0->fence = VAR_1;
}
