
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rv7xx_power_info {scalar_t__ mclk_strobe_mode_threshold; scalar_t__ mclk_edc_enable_threshold; scalar_t__ mem_gddr5; scalar_t__ pcie_gen2; } ;
struct rv7xx_pl {int flags; scalar_t__ mclk; int vddc; int sclk; } ;
struct radeon_device {scalar_t__ family; } ;
struct TYPE_3__ {int gen2PCIE; int gen2XSP; int backbias; int strobeMode; int mcFlags; int mvdd; int vddc; int mclk; int sclk; int displayWatermark; } ;
typedef TYPE_1__ RV770_SMC_HW_PERFORMANCE_LEVEL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radeon_device*,int ,scalar_t__,int *) ;
 int FUNC_1 (struct radeon_device*,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__,int *) ;
 int FUNC_4 (struct radeon_device*,int ,int *) ;
 struct rv7xx_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int ,scalar_t__,int *) ;
 int FUNC_7 (struct radeon_device*,scalar_t__,int *) ;
 int FUNC_8 (struct radeon_device*,int ,int *) ;
 int FUNC_9 (struct radeon_device*,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct radeon_device *VAR_7,
         struct rv7xx_pl *VAR_8,
         RV770_SMC_HW_PERFORMANCE_LEVEL *VAR_9,
         u8 VAR_10)
{
 struct rv7xx_power_info *VAR_11 = FUNC_5(VAR_7);
 int VAR_12;

 VAR_9->gen2PCIE = VAR_11->pcie_gen2 ?
  ((VAR_8->flags & VAR_1) ? 1 : 0) : 0;
 VAR_9->gen2XSP = (VAR_8->flags & VAR_1) ? 1 : 0;
 VAR_9->backbias = (VAR_8->flags & VAR_0) ? 1 : 0;
 VAR_9->displayWatermark = VAR_10;

 if (VAR_7->family == VAR_4)
  VAR_12 = FUNC_4(VAR_7, VAR_8->sclk,
      &VAR_9->sclk);
 else if ((VAR_7->family == VAR_3) || (VAR_7->family == VAR_2))
  VAR_12 = FUNC_1(VAR_7, VAR_8->sclk,
      &VAR_9->sclk);
 else
  VAR_12 = FUNC_8(VAR_7, VAR_8->sclk,
      &VAR_9->sclk);
 if (VAR_12)
  return VAR_12;

 if (VAR_7->family == VAR_4) {
  if (VAR_11->mem_gddr5) {
   if (VAR_8->mclk <= VAR_11->mclk_strobe_mode_threshold)
    VAR_9->strobeMode =
     FUNC_2(VAR_8->mclk) | 0x10;
   else
    VAR_9->strobeMode = 0;

   if (VAR_8->mclk > VAR_11->mclk_edc_enable_threshold)
    VAR_9->mcFlags = VAR_5 | VAR_6;
   else
    VAR_9->mcFlags = 0;
  }
  VAR_12 = FUNC_3(VAR_7, VAR_8->sclk,
      VAR_8->mclk, &VAR_9->mclk);
 } else if ((VAR_7->family == VAR_3) || (VAR_7->family == VAR_2))
  VAR_12 = FUNC_0(VAR_7, VAR_8->sclk,
      VAR_8->mclk, &VAR_9->mclk);
 else
  VAR_12 = FUNC_6(VAR_7, VAR_8->sclk,
      VAR_8->mclk, &VAR_9->mclk);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_9(VAR_7, VAR_8->vddc,
     &VAR_9->vddc);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_7, VAR_8->mclk, &VAR_9->mvdd);

 return VAR_12;
}
