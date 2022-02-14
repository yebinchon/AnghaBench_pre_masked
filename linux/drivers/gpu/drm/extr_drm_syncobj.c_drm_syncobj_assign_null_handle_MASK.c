
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj {int dummy; } ;
struct dma_fence {int dummy; } ;


 struct dma_fence* FUNC_0 () ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct drm_syncobj*,struct dma_fence*) ;

__attribute__((used)) static void FUNC_3(struct drm_syncobj *VAR_0)
{
 struct dma_fence *VAR_1 = FUNC_0();

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
