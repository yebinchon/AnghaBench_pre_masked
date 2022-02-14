
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct radeon_ps {int class; scalar_t__ vclk; scalar_t__ dclk; void* class2; void* caps; } ;
struct TYPE_3__ {struct radeon_ps* uvd_ps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int ulDCLK; int ulVCLK; int usClassification2; int usClassification; int ulCapsAndSettings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,void*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_5,
          struct radeon_ps *VAR_6,
          struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_7,
          u8 VAR_8)
{
 VAR_6->caps = FUNC_1(VAR_7->ulCapsAndSettings);
 VAR_6->class = FUNC_0(VAR_7->usClassification);
 VAR_6->class2 = FUNC_0(VAR_7->usClassification2);

 if (VAR_2 < VAR_8) {
  VAR_6->vclk = FUNC_1(VAR_7->ulVCLK);
  VAR_6->dclk = FUNC_1(VAR_7->ulDCLK);
 } else {
  VAR_6->vclk = 0;
  VAR_6->dclk = 0;
 }

 if (FUNC_2(VAR_6->class, VAR_6->class2)) {
  if ((VAR_6->vclk == 0) || (VAR_6->dclk == 0)) {
   VAR_6->vclk = VAR_4;
   VAR_6->dclk = VAR_3;
  }
 }

 if (VAR_6->class & VAR_0)
  VAR_5->pm.dpm.boot_ps = VAR_6;
 if (VAR_6->class & VAR_1)
  VAR_5->pm.dpm.uvd_ps = VAR_6;
}
