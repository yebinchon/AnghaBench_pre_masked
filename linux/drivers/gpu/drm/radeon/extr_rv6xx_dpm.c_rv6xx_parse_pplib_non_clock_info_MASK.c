
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int class; scalar_t__ dclk; scalar_t__ vclk; void* class2; int caps; } ;
struct TYPE_3__ {struct radeon_ps* uvd_ps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int usClassification2; int usClassification; int ulCapsAndSettings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,void*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4,
          struct radeon_ps *VAR_5,
          struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_6)
{
 VAR_5->caps = FUNC_1(VAR_6->ulCapsAndSettings);
 VAR_5->class = FUNC_0(VAR_6->usClassification);
 VAR_5->class2 = FUNC_0(VAR_6->usClassification2);

 if (FUNC_2(VAR_5->class, VAR_5->class2)) {
  VAR_5->vclk = VAR_3;
  VAR_5->dclk = VAR_2;
 } else {
  VAR_5->vclk = 0;
  VAR_5->dclk = 0;
 }

 if (VAR_5->class & VAR_0)
  VAR_4->pm.dpm.boot_ps = VAR_5;
 if (VAR_5->class & VAR_1)
  VAR_4->pm.dpm.uvd_ps = VAR_5;
}
