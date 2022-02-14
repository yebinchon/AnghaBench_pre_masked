
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct dma_buf {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct drm_device*,struct dma_buf*,int ) ;
 int FUNC_1 (struct drm_device*) ;

struct drm_gem_object *FUNC_2(struct drm_device *VAR_0,
         struct dma_buf *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_0));
}
