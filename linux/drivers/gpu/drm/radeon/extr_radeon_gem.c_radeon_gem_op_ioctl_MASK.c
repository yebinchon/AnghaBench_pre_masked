
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ttm; } ;
struct radeon_bo {int initial_domain; TYPE_1__ tbo; } ;
struct drm_radeon_gem_op {int op; int value; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct radeon_bo*,int) ;
 int FUNC_4 (struct radeon_bo*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct drm_device *VAR_6, void *VAR_7,
   struct drm_file *VAR_8)
{
 struct drm_radeon_gem_op *VAR_9 = VAR_7;
 struct drm_gem_object *VAR_10;
 struct radeon_bo *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_0(VAR_8, VAR_9->handle);
 if (VAR_10 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_11 = FUNC_2(VAR_10);

 VAR_12 = -VAR_2;
 if (FUNC_5(VAR_11->tbo.ttm))
  goto out;

 VAR_12 = FUNC_3(VAR_11, 0);
 if (FUNC_6(VAR_12))
  goto out;

 switch (VAR_9->op) {
 case 129:
  VAR_9->value = VAR_11->initial_domain;
  break;
 case 128:
  VAR_11->initial_domain = VAR_9->value & (VAR_5 |
            VAR_4 |
            VAR_3);
  break;
 default:
  VAR_12 = -VAR_0;
 }

 FUNC_4(VAR_11);
out:
 FUNC_1(VAR_10);
 return VAR_12;
}
