
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_dpm_quirk {scalar_t__ chip_device; scalar_t__ chip_vendor; scalar_t__ subsys_vendor; scalar_t__ subsys_device; } ;
struct TYPE_4__ {scalar_t__ pm_method; } ;
struct radeon_device {int family; int flags; TYPE_2__ pm; int smc_fw; int rlc_fw; TYPE_1__* pdev; } ;
struct TYPE_3__ {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct radeon_dpm_quirk* VAR_4 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct radeon_device *VAR_5)
{
 struct radeon_dpm_quirk *VAR_6 = VAR_4;
 bool VAR_7 = 0;


 while (VAR_6 && VAR_6->chip_device != 0) {
  if (VAR_5->pdev->vendor == VAR_6->chip_vendor &&
      VAR_5->pdev->device == VAR_6->chip_device &&
      VAR_5->pdev->subsystem_vendor == VAR_6->subsys_vendor &&
      VAR_5->pdev->subsystem_device == VAR_6->subsys_device) {
   VAR_7 = 1;
   break;
  }
  ++VAR_6;
 }


 switch (VAR_5->family) {
 case 141:
 case 139:
 case 140:
 case 138:
 case 137:
 case 143:
 case 142:
 case 133:

  if (!VAR_5->rlc_fw)
   VAR_5->pm.pm_method = VAR_1;
  else if ((VAR_5->family >= 133) &&
    (!(VAR_5->flags & VAR_2)) &&
    (!VAR_5->smc_fw))
   VAR_5->pm.pm_method = VAR_1;
  else if (VAR_3 == 1)
   VAR_5->pm.pm_method = VAR_0;
  else
   VAR_5->pm.pm_method = VAR_1;
  break;
 case 135:
 case 136:
 case 134:
 case 156:
 case 144:
 case 151:
 case 155:
 case 152:
 case 146:
 case 132:
 case 131:
 case 160:
 case 129:
 case 158:
 case 157:
 case 161:
 case 130:
 case 145:
 case 128:
 case 147:
 case 154:
 case 159:
 case 150:
 case 149:
 case 153:
 case 148:

  if (!VAR_5->rlc_fw)
   VAR_5->pm.pm_method = VAR_1;
  else if ((VAR_5->family >= 133) &&
    (!(VAR_5->flags & VAR_2)) &&
    (!VAR_5->smc_fw))
   VAR_5->pm.pm_method = VAR_1;
  else if (VAR_7 && (VAR_3 == -1))
   VAR_5->pm.pm_method = VAR_1;
  else if (VAR_3 == 0)
   VAR_5->pm.pm_method = VAR_1;
  else
   VAR_5->pm.pm_method = VAR_0;
  break;
 default:

  VAR_5->pm.pm_method = VAR_1;
  break;
 }

 if (VAR_5->pm.pm_method == VAR_0)
  return FUNC_0(VAR_5);
 else
  return FUNC_1(VAR_5);
}
