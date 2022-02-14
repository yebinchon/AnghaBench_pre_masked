
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int start; } ;
struct v3d_bo {TYPE_1__ node; } ;
struct drm_v3d_get_bo_offset {int offset; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct v3d_bo* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
       struct drm_file *VAR_4)
{
 struct drm_v3d_get_bo_offset *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 struct v3d_bo *VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_5->handle);
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_6);

 VAR_5->offset = VAR_7->node.start << VAR_1;

 FUNC_2(VAR_6);
 return 0;
}
