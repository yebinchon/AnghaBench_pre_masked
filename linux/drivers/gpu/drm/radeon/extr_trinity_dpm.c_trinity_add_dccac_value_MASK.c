
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int default_dispclk; } ;
struct TYPE_4__ {int new_active_crtc_count; } ;
struct TYPE_5__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_3__ clock; TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = VAR_4->pm.dpm.new_active_crtc_count;
 u64 VAR_7 = VAR_4->clock.default_dispclk / 100;
 u32 VAR_8;

 VAR_5 =
  (FUNC_0(VAR_1) & VAR_2) >> VAR_3;

 VAR_8 = (u32)((14213 * VAR_7 * VAR_7 * (u64)VAR_6) >>
        (32 - VAR_5));

 FUNC_1(VAR_0, VAR_8);
}
