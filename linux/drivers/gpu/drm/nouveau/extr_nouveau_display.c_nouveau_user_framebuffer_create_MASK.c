
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct nouveau_framebuffer {struct drm_framebuffer base; } ;
struct nouveau_bo {int dummy; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct nouveau_bo*,struct nouveau_framebuffer**) ;
 struct nouveau_bo* FUNC_4 (struct drm_gem_object*) ;

struct drm_framebuffer *
FUNC_5(struct drm_device *VAR_1,
    struct drm_file *VAR_2,
    const struct drm_mode_fb_cmd2 *VAR_3)
{
 struct nouveau_framebuffer *VAR_4;
 struct nouveau_bo *VAR_5;
 struct drm_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_3->handles[0]);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_4(VAR_6);

 VAR_7 = FUNC_3(VAR_1, VAR_3, VAR_5, &VAR_4);
 if (VAR_7 == 0)
  return &VAR_4->base;

 FUNC_2(VAR_6);
 return FUNC_0(VAR_7);
}
