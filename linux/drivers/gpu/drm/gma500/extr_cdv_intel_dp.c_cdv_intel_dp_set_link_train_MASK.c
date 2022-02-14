
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int output_reg; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gma_encoder*,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(struct gma_encoder *VAR_1,
   uint32_t VAR_2,
   uint8_t VAR_3)
{

 struct drm_device *VAR_4 = VAR_1->base.dev;
 int VAR_5;
 struct cdv_intel_dp *VAR_6 = VAR_1->dev_priv;

 FUNC_2(VAR_6->output_reg, VAR_2);
 FUNC_1(VAR_6->output_reg);

 VAR_5 = FUNC_3(VAR_1,
        VAR_0,
        VAR_3);

 if (VAR_5 != 1) {
  FUNC_0("Failure in setting link pattern %x\n",
    VAR_3);
  return 0;
 }

 return 1;
}
