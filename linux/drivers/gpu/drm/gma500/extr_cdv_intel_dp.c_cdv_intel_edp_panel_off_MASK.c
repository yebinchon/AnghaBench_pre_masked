
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int panel_on; int panel_power_cycle_delay; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5 (struct gma_encoder *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.dev;
 u32 VAR_9, VAR_10 = VAR_5 ;
 struct cdv_intel_dp *VAR_11 = VAR_7->dev_priv;

 FUNC_0("\n");

 VAR_9 = FUNC_1(VAR_4);

 if ((VAR_9 & VAR_3) == 0)
  return;

 VAR_11->panel_on = 0;
 VAR_9 &= ~VAR_2;


 VAR_9 &= ~VAR_3;
 VAR_9 &= ~VAR_1;
 VAR_9 &= ~VAR_0;
 FUNC_2(VAR_4, VAR_9);
 FUNC_1(VAR_4);
 FUNC_0("PP_STATUS %x\n", FUNC_1(VAR_6));

 if (FUNC_4((FUNC_1(VAR_6) & VAR_10) == 0, 1000)) {
  FUNC_0("Error in turning off Panel\n");
 }

 FUNC_3(VAR_11->panel_power_cycle_delay);
 FUNC_0("Over\n");
}
