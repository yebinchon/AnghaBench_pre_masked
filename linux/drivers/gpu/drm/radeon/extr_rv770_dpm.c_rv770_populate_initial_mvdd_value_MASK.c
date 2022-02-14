
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {int s0_vid_lower_smio_cntl; int mvdd_mask_low; int* mvdd_low_smio; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {size_t index; void* value; } ;
typedef TYPE_1__ RV770_SMC_VOLTAGE_VALUE ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

int FUNC_2(struct radeon_device *VAR_4,
          RV770_SMC_VOLTAGE_VALUE *VAR_5)
{
 struct rv7xx_power_info *VAR_6 = FUNC_1(VAR_4);

 if ((VAR_6->s0_vid_lower_smio_cntl & VAR_6->mvdd_mask_low) ==
      (VAR_6->mvdd_low_smio[VAR_2] & VAR_6->mvdd_mask_low) ) {
  VAR_5->index = VAR_2;
  VAR_5->value = FUNC_0(VAR_3);
 } else {
  VAR_5->index = VAR_0;
  VAR_5->value = FUNC_0(VAR_1);
 }

 return 0;
}
