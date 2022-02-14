
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int new_active_crtc_count; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct TYPE_5__ {int reference_freq; } ;
struct TYPE_6__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_4__ pm; TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_0);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = VAR_8->clock.spll.reference_freq;
 u32 VAR_13 = FUNC_7(VAR_8);
 u32 VAR_14 = FUNC_6(VAR_8);

 VAR_9 &= ~VAR_2;
 if (VAR_8->pm.dpm.new_active_crtc_count > 0)
  VAR_9 |= FUNC_0(VAR_5);
 else
  VAR_9 |= FUNC_0(VAR_4);
 FUNC_2(VAR_0, VAR_9);

 if (VAR_13 == 0)
  VAR_13 = 60;
 if (VAR_14 == 0xffffffff)
  VAR_14 = 500;
 VAR_11 = 1000000 / VAR_13;
 VAR_10 =
  VAR_11 - 200 - VAR_14;
 VAR_9 = VAR_10 * (VAR_12 / 100);

 FUNC_2(VAR_1, VAR_9);
 FUNC_4(VAR_8, FUNC_5(VAR_6, VAR_3), 0x64);
 FUNC_4(VAR_8, FUNC_5(VAR_6, VAR_7), (VAR_11 - VAR_10));


 FUNC_3(VAR_8, (VAR_8->pm.dpm.new_active_crtc_count == 1));

}
