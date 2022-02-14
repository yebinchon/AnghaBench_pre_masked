
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {struct drm_gem_object** obj; } ;



struct drm_gem_object *FUNC_0(struct drm_framebuffer *VAR_0,
       unsigned int VAR_1)
{
 if (VAR_1 >= 4)
  return ((void*)0);

 return VAR_0->obj[VAR_1];
}
