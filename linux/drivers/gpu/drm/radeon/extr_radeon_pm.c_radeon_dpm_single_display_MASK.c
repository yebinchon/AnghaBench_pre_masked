
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int new_active_crtc_count; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_4__* asic; TYPE_2__ pm; } ;
struct TYPE_7__ {scalar_t__ vblank_too_short; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_0)
{
 bool VAR_1 = (VAR_0->pm.dpm.new_active_crtc_count < 2) ?
  1 : 0;


 if (VAR_1 && VAR_0->asic->dpm.vblank_too_short) {
  if (FUNC_1(VAR_0))
   VAR_1 = 0;
 }




 if (VAR_1 && (FUNC_0(VAR_0) >= 120))
  VAR_1 = 0;

 return VAR_1;
}
