
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_clip_rect {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_4(struct drm_framebuffer *VAR_1,
     struct drm_file *VAR_2,
     unsigned VAR_3, unsigned VAR_4,
     struct drm_clip_rect *VAR_5,
     unsigned VAR_6)
{
 struct drm_i915_gem_object *VAR_7 = FUNC_1(VAR_1);

 FUNC_0(VAR_7);
 FUNC_2(FUNC_3(VAR_1), VAR_0);

 return 0;
}
