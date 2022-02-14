
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int ttm; } ;
struct amdgpu_bo {int flags; TYPE_1__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_4 (struct drm_gem_object*) ;

int FUNC_5(struct drm_file *VAR_3,
     struct drm_device *VAR_4,
     uint32_t VAR_5, uint64_t *VAR_6)
{
 struct drm_gem_object *VAR_7;
 struct amdgpu_bo *VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 if (VAR_7 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_1(VAR_8->tbo.ttm) ||
     (VAR_8->flags & VAR_0)) {
  FUNC_3(VAR_7);
  return -VAR_2;
 }
 *VAR_6 = FUNC_0(VAR_8);
 FUNC_3(VAR_7);
 return 0;
}
