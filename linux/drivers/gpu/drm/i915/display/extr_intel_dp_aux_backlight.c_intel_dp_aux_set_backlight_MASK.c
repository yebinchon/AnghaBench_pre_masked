
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vals ;
typedef int u8 ;
typedef int u32 ;
struct intel_dp {int* edp_dpcd; int aux; } ;
struct intel_connector {TYPE_1__* encoder; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int*,int) ;
 struct intel_dp* FUNC_2 (int *) ;
 struct intel_connector* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(const struct drm_connector_state *VAR_2, u32 VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_3(VAR_2->connector);
 struct intel_dp *VAR_5 = FUNC_2(&VAR_4->encoder->base);
 u8 VAR_6[2] = { 0x0 };

 VAR_6[0] = VAR_3;


 if (VAR_5->edp_dpcd[2] & VAR_0) {
  VAR_6[0] = (VAR_3 & 0xFF00) >> 8;
  VAR_6[1] = (VAR_3 & 0xFF);
 }
 if (FUNC_1(&VAR_5->aux, VAR_1,
         VAR_6, sizeof(VAR_6)) < 0) {
  FUNC_0("Failed to write aux backlight level\n");
  return;
 }
}
