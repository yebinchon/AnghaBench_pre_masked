
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int new_active_crtcs; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_0);

 VAR_6 &= ~(VAR_1 | VAR_2);
 if (VAR_5->pm.dpm.new_active_crtcs & 1) {
  VAR_6 |= FUNC_0(VAR_4);
  VAR_6 |= FUNC_1(VAR_3);
 } else if (VAR_5->pm.dpm.new_active_crtcs & 2) {
  VAR_6 |= FUNC_0(VAR_3);
  VAR_6 |= FUNC_1(VAR_4);
 } else {
  VAR_6 |= FUNC_0(VAR_3);
  VAR_6 |= FUNC_1(VAR_3);
 }
 FUNC_3(VAR_0, VAR_6);
}
