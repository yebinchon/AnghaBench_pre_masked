
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {scalar_t__ t_format; } ;
struct drm_vc4_get_tiling {scalar_t__ flags; scalar_t__ modifier; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_device *VAR_4, void *VAR_5,
    struct drm_file *VAR_6)
{
 struct drm_vc4_get_tiling *VAR_7 = VAR_5;
 struct drm_gem_object *VAR_8;
 struct vc4_bo *VAR_9;

 if (VAR_7->flags != 0 || VAR_7->modifier != 0)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_7->handle);
 if (!VAR_8) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_7->handle);
  return -VAR_3;
 }
 VAR_9 = FUNC_3(VAR_8);

 if (VAR_9->t_format)
  VAR_7->modifier = VAR_0;
 else
  VAR_7->modifier = VAR_1;

 FUNC_2(VAR_8);

 return 0;
}
