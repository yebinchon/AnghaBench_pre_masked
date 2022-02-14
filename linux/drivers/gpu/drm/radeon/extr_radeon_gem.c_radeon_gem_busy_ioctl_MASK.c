
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int mem_type; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_6__ {TYPE_2__ mem; TYPE_1__ base; } ;
struct radeon_bo {TYPE_3__ tbo; } ;
struct drm_radeon_gem_busy {int domain; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct drm_device *VAR_2, void *VAR_3,
     struct drm_file *VAR_4)
{
 struct drm_radeon_gem_busy *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 struct radeon_bo *VAR_7;
 int VAR_8;
 uint32_t VAR_9 = 0;

 VAR_6 = FUNC_2(VAR_4, VAR_5->handle);
 if (VAR_6 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_7 = FUNC_4(VAR_6);

 VAR_8 = FUNC_1(VAR_7->tbo.base.resv, 1);
 if (VAR_8 == 0)
  VAR_8 = -VAR_0;
 else
  VAR_8 = 0;

 VAR_9 = FUNC_0(VAR_7->tbo.mem.mem_type);
 VAR_5->domain = FUNC_5(VAR_9);
 FUNC_3(VAR_6);
 return VAR_8;
}
