
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int new_active_crtc_count; int new_active_crtcs; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {int num_crtc; TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_0) & ~(VAR_4 | VAR_5);
 if (VAR_8->pm.dpm.new_active_crtc_count > 0)
  VAR_9 |= FUNC_1(VAR_7);
 else
  VAR_9 |= FUNC_1(VAR_6);

 if (VAR_8->pm.dpm.new_active_crtc_count > 1)
  VAR_9 |= FUNC_2(VAR_7);
 else
  VAR_9 |= FUNC_2(VAR_6);

 FUNC_4(VAR_0, VAR_9);

 VAR_9 = FUNC_3(VAR_3);
 VAR_10 = (VAR_9 & VAR_1) >> VAR_2;

 if ((VAR_8->pm.dpm.new_active_crtc_count > 0) &&
     (!(VAR_8->pm.dpm.new_active_crtcs & (1 << VAR_10)))) {

  for (VAR_11 = 0; VAR_11 < VAR_8->num_crtc; VAR_11++) {
   if (VAR_8->pm.dpm.new_active_crtcs & (1 << VAR_11))
    break;
  }
  if (VAR_11 == VAR_8->num_crtc)
   VAR_10 = 0;
  else
   VAR_10 = VAR_11;

  VAR_9 &= ~VAR_1;
  VAR_9 |= FUNC_0(VAR_10);
  FUNC_4(VAR_3, VAR_9);
 }

 FUNC_5(VAR_8, VAR_8->pm.dpm.new_active_crtc_count > 0);
}
