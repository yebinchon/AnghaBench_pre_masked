
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int ttm; } ;
struct radeon_bo {TYPE_1__ tbo; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_bo*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct drm_file *VAR_2,
     struct drm_device *VAR_3,
     uint32_t VAR_4, uint64_t *VAR_5)
{
 struct drm_gem_object *VAR_6;
 struct radeon_bo *VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 if (VAR_6 == ((void*)0)) {
  return -VAR_0;
 }
 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_4(VAR_7->tbo.ttm)) {
  FUNC_1(VAR_6);
  return -VAR_1;
 }
 *VAR_5 = FUNC_3(VAR_7);
 FUNC_1(VAR_6);
 return 0;
}
