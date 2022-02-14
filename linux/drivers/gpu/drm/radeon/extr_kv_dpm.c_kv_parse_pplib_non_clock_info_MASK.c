
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct radeon_ps {int class; void* dclk; void* vclk; void* class2; void* caps; } ;
struct TYPE_3__ {struct radeon_ps* uvd_ps; struct radeon_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct kv_ps {int dummy; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int ulDCLK; int ulVCLK; int usClassification2; int usClassification; int ulCapsAndSettings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct kv_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,struct kv_ps*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3,
       struct radeon_ps *VAR_4,
       struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_5,
       u8 VAR_6)
{
 struct kv_ps *VAR_7 = FUNC_0(VAR_4);

 VAR_4->caps = FUNC_3(VAR_5->ulCapsAndSettings);
 VAR_4->class = FUNC_2(VAR_5->usClassification);
 VAR_4->class2 = FUNC_2(VAR_5->usClassification2);

 if (VAR_2 < VAR_6) {
  VAR_4->vclk = FUNC_3(VAR_5->ulVCLK);
  VAR_4->dclk = FUNC_3(VAR_5->ulDCLK);
 } else {
  VAR_4->vclk = 0;
  VAR_4->dclk = 0;
 }

 if (VAR_4->class & VAR_0) {
  VAR_3->pm.dpm.boot_ps = VAR_4;
  FUNC_1(VAR_3, VAR_7);
 }
 if (VAR_4->class & VAR_1)
  VAR_3->pm.dpm.uvd_ps = VAR_4;
}
