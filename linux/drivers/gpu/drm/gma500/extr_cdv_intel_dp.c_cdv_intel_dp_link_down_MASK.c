
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int DP; int output_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct gma_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct cdv_intel_dp *VAR_5 = VAR_3->dev_priv;
 uint32_t VAR_6 = VAR_5->DP;

 if ((FUNC_1(VAR_5->output_reg) & VAR_2) == 0)
  return;

 FUNC_0("\n");


 {
  VAR_6 &= ~VAR_0;
  FUNC_2(VAR_5->output_reg, VAR_6 | VAR_1);
 }
 FUNC_1(VAR_5->output_reg);

 FUNC_3(17);

 FUNC_2(VAR_5->output_reg, VAR_6 & ~VAR_2);
 FUNC_1(VAR_5->output_reg);
}
