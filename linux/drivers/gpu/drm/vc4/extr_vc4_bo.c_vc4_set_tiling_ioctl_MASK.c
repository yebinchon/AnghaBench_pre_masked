
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {int t_format; } ;
struct drm_vc4_set_tiling {scalar_t__ flags; int modifier; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
    struct drm_file *VAR_4)
{
 struct drm_vc4_set_tiling *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 struct vc4_bo *VAR_7;
 bool VAR_8;

 if (VAR_5->flags != 0)
  return -VAR_0;

 switch (VAR_5->modifier) {
 case 128:
  VAR_8 = 0;
  break;
 case 129:
  VAR_8 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_5->handle);
  return -VAR_1;
 }
 VAR_7 = FUNC_3(VAR_6);
 VAR_7->t_format = VAR_8;

 FUNC_2(VAR_6);

 return 0;
}
