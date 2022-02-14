
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct drm_gem_object*) ;

void *FUNC_2(struct dma_buf *VAR_0)
{
 struct drm_gem_object *VAR_1 = VAR_0->priv;
 void *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2))
  VAR_2 = ((void*)0);

 return VAR_2;
}
