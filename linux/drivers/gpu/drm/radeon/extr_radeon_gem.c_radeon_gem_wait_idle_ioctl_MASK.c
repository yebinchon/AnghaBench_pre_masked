
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {TYPE_4__* asic; } ;
struct TYPE_8__ {int mem_type; } ;
struct TYPE_7__ {int resv; } ;
struct TYPE_9__ {TYPE_2__ mem; TYPE_1__ base; } ;
struct radeon_bo {TYPE_6__* rdev; TYPE_3__ tbo; } ;
struct drm_radeon_gem_wait_idle {int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_12__ {TYPE_5__* asic; } ;
struct TYPE_11__ {int (* mmio_hdp_flush ) (struct radeon_device*) ;} ;
struct TYPE_10__ {scalar_t__ mmio_hdp_flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (int ,int,int,int) ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct radeon_device*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct radeon_device*) ;

int FUNC_8(struct drm_device *VAR_4, void *VAR_5,
         struct drm_file *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_4->dev_private;
 struct drm_radeon_gem_wait_idle *VAR_8 = VAR_5;
 struct drm_gem_object *VAR_9;
 struct radeon_bo *VAR_10;
 int VAR_11 = 0;
 uint32_t VAR_12 = 0;
 long VAR_13;

 VAR_9 = FUNC_2(VAR_6, VAR_8->handle);
 if (VAR_9 == ((void*)0)) {
  return -VAR_1;
 }
 VAR_10 = FUNC_4(VAR_9);

 VAR_13 = FUNC_1(VAR_10->tbo.base.resv, 1, 1, 30 * VAR_2);
 if (VAR_13 == 0)
  VAR_11 = -VAR_0;
 else if (VAR_13 < 0)
  VAR_11 = VAR_13;


 VAR_12 = FUNC_0(VAR_10->tbo.mem.mem_type);
 if (VAR_7->asic->mmio_hdp_flush &&
     FUNC_6(VAR_12) == VAR_3)
  VAR_10->rdev->asic->mmio_hdp_flush(VAR_7);
 FUNC_3(VAR_9);
 VAR_11 = FUNC_5(VAR_7, VAR_11);
 return VAR_11;
}
