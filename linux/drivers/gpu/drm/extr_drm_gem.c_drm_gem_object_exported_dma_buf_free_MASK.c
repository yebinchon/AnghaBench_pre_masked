
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int * dma_buf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drm_gem_object *VAR_0)
{

 if (VAR_0->dma_buf) {
  FUNC_0(VAR_0->dma_buf);
  VAR_0->dma_buf = ((void*)0);
 }
}
