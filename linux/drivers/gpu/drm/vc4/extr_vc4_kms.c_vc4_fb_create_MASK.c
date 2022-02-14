
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {scalar_t__ t_format; } ;
struct drm_mode_fb_cmd2 {int flags; int * modifier; int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_framebuffer* FUNC_1 (int ) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct vc4_bo* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static struct drm_framebuffer *FUNC_6(struct drm_device *VAR_4,
          struct drm_file *VAR_5,
          const struct drm_mode_fb_cmd2 *VAR_6)
{
 struct drm_mode_fb_cmd2 VAR_7;




 if (!(VAR_6->flags & VAR_2)) {
  struct drm_gem_object *VAR_8;
  struct vc4_bo *VAR_9;

  VAR_8 = FUNC_3(VAR_5,
      VAR_6->handles[0]);
  if (!VAR_8) {
   FUNC_0("Failed to look up GEM BO %d\n",
      VAR_6->handles[0]);
   return FUNC_1(-VAR_3);
  }
  VAR_9 = FUNC_5(VAR_8);

  VAR_7 = *VAR_6;

  if (VAR_9->t_format) {
   VAR_7.modifier[0] =
    VAR_0;
  } else {
   VAR_7.modifier[0] = VAR_1;
  }

  FUNC_4(VAR_8);

  VAR_6 = &VAR_7;
 }

 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
