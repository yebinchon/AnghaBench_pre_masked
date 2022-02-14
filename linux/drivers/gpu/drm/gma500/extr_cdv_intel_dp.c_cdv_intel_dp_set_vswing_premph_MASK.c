
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct ddi_regoff {int PreEmph2; int PreEmph1; int VSwing1; int VSwing3; int VSwing2; int VSwing5; } ;
struct cdv_intel_dp {scalar_t__ output_reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,int ,int) ;
 struct ddi_regoff* VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct gma_encoder *VAR_7, uint8_t VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->base.dev;
 struct cdv_intel_dp *VAR_10 = VAR_7->dev_priv;
 struct ddi_regoff *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_10->output_reg == VAR_0)
  VAR_11 = &VAR_5[0];
 else
  VAR_11 = &VAR_5[1];

 VAR_12 = (VAR_8 & VAR_4);
 VAR_13 = ((VAR_8 & VAR_1)) >>
    VAR_2;

 if (VAR_12 + VAR_13 > 3)
  return;



 FUNC_0("Test2\n");

 FUNC_1(VAR_9);


 FUNC_2(VAR_9, VAR_11->VSwing5, 0x0505313A);


 FUNC_2(VAR_9, VAR_11->VSwing1, 0x43406055);




 VAR_14 = (VAR_12 + VAR_13) * 2;
 if (VAR_13 == 1 && VAR_12 == 1) {
  FUNC_2(VAR_9, VAR_11->VSwing2, 0x055738954);
 } else
  FUNC_2(VAR_9, VAR_11->VSwing2, VAR_6[VAR_14]);


 if ((VAR_12 + VAR_13) == VAR_3)
  FUNC_2(VAR_9, VAR_11->VSwing3, 0x70802040);
 else
  FUNC_2(VAR_9, VAR_11->VSwing3, 0x40802040);





 FUNC_2(VAR_9, VAR_11->VSwing1, 0xc3406055);




 FUNC_2(VAR_9, VAR_11->PreEmph1, 0x1f030040);


 VAR_14 = 2 * VAR_13 + 1;
 FUNC_2(VAR_9, VAR_11->PreEmph2, VAR_6[VAR_14]);
 return;
}
