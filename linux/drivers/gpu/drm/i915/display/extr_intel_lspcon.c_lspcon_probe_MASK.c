
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lspcon {int mode; } ;
struct i2c_adapter {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;
typedef enum drm_dp_dual_mode_type { ____Placeholder_drm_dp_dual_mode_type } drm_dp_dual_mode_type ;
struct TYPE_3__ {struct i2c_adapter ddc; } ;
struct TYPE_4__ {TYPE_1__ aux; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct intel_lspcon*,int) ;
 TYPE_2__* FUNC_5 (struct intel_lspcon*) ;
 int FUNC_6 (struct intel_lspcon*,int) ;
 scalar_t__ FUNC_7 (struct intel_lspcon*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static bool FUNC_9(struct intel_lspcon *VAR_3)
{
 int VAR_4;
 enum drm_dp_dual_mode_type VAR_5;
 struct i2c_adapter *VAR_6 = &FUNC_5(VAR_3)->aux.ddc;
 enum drm_lspcon_mode VAR_7;

 VAR_7 = FUNC_7(VAR_3) ?
   VAR_2 : VAR_1;


 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_4)
   FUNC_8(500, 1000);

  VAR_5 = FUNC_2(VAR_6);
  if (VAR_5 == VAR_0)
   break;
 }

 if (VAR_5 != VAR_0) {
  FUNC_0("No LSPCON detected, found %s\n",
          FUNC_3(VAR_5));
  return 0;
 }


 FUNC_0("LSPCON detected\n");
 VAR_3->mode = FUNC_6(VAR_3, VAR_7);






 if (VAR_3->mode != VAR_2) {
  if (FUNC_4(VAR_3, VAR_2) < 0) {
   FUNC_1("LSPCON mode change to PCON failed\n");
   return 0;
  }
 }
 return 1;
}
