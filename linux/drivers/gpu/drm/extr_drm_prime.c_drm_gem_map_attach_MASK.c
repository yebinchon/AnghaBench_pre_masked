
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct dma_buf_attachment {int dummy; } ;
struct dma_buf {struct drm_gem_object* priv; } ;


 int FUNC_0 (struct drm_gem_object*) ;

int FUNC_1(struct dma_buf *VAR_0,
         struct dma_buf_attachment *VAR_1)
{
 struct drm_gem_object *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_2);
}
