
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct intel_dp {int* edp_dpcd; int aux; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_5__ {int level; } ;
struct TYPE_6__ {TYPE_2__ backlight; } ;
struct intel_connector {TYPE_3__ panel; TYPE_1__* encoder; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_4__ {int base; } ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 struct intel_dp* FUNC_3 (int *) ;
 int FUNC_4 (struct drm_connector_state const*,int ) ;
 scalar_t__ FUNC_5 (struct intel_connector*) ;
 int FUNC_6 (struct intel_dp*,int) ;
 struct intel_connector* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_4,
       const struct drm_connector_state *VAR_5)
{
 struct intel_connector *VAR_6 = FUNC_7(VAR_5->connector);
 struct intel_dp *VAR_7 = FUNC_3(&VAR_6->encoder->base);
 u8 VAR_8, VAR_9, VAR_10;

 if (FUNC_1(&VAR_7->aux,
   VAR_3, &VAR_8) != 1) {
  FUNC_0("Failed to read DPCD register 0x%x\n",
         VAR_3);
  return;
 }

 VAR_9 = VAR_8;
 VAR_10 = VAR_8 & VAR_0;

 switch (VAR_10) {
 case 128:
 case 130:
 case 129:
  VAR_9 &= ~VAR_0;
  VAR_9 |= 131;
  break;


 case 131:
 default:
  break;
 }

 if (VAR_7->edp_dpcd[2] & VAR_1)
  if (FUNC_5(VAR_6))
   VAR_9 |= VAR_2;

 if (VAR_9 != VAR_8) {
  if (FUNC_2(&VAR_7->aux,
   VAR_3, VAR_9) < 0) {
   FUNC_0("Failed to write aux backlight mode\n");
  }
 }

 FUNC_6(VAR_7, 1);
 FUNC_4(VAR_5, VAR_6->panel.backlight.level);
}
