
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv7xx_power_info {int mvdd_mask_low; int * mvdd_low_smio; scalar_t__ mvdd_control; } ;
struct radeon_device {int dummy; } ;
struct TYPE_4__ {int * lowMask; scalar_t__* highMask; } ;
struct TYPE_5__ {TYPE_1__ voltageMaskTable; int * lowSMIO; } ;
typedef TYPE_2__ RV770_SMC_STATETABLE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_3,
      RV770_SMC_STATETABLE *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->mvdd_control) {
  VAR_4->lowSMIO[VAR_0] |=
   FUNC_0(VAR_5->mvdd_low_smio[VAR_0]);
  VAR_4->lowSMIO[VAR_1] |=
   FUNC_0(VAR_5->mvdd_low_smio[VAR_1]);

  VAR_4->voltageMaskTable.highMask[VAR_2] = 0;
  VAR_4->voltageMaskTable.lowMask[VAR_2] =
   FUNC_0(VAR_5->mvdd_mask_low);
 }

 return 0;
}
