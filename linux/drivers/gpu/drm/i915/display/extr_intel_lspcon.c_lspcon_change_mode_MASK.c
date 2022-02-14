
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lspcon {int mode; } ;
struct i2c_adapter {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;
struct TYPE_3__ {struct i2c_adapter ddc; } ;
struct TYPE_4__ {TYPE_1__ aux; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct i2c_adapter*,int*) ;
 int FUNC_3 (struct i2c_adapter*,int) ;
 TYPE_2__* FUNC_4 (struct intel_lspcon*) ;

__attribute__((used)) static int FUNC_5(struct intel_lspcon *VAR_0,
         enum drm_lspcon_mode VAR_1)
{
 int VAR_2;
 enum drm_lspcon_mode VAR_3;
 struct i2c_adapter *VAR_4 = &FUNC_4(VAR_0)->aux.ddc;

 VAR_2 = FUNC_2(VAR_4, &VAR_3);
 if (VAR_2) {
  FUNC_1("Error reading LSPCON mode\n");
  return VAR_2;
 }

 if (VAR_3 == VAR_1) {
  FUNC_0("Current mode = desired LSPCON mode\n");
  return 0;
 }

 VAR_2 = FUNC_3(VAR_4, VAR_1);
 if (VAR_2 < 0) {
  FUNC_1("LSPCON mode change failed\n");
  return VAR_2;
 }

 VAR_0->mode = VAR_1;
 FUNC_0("LSPCON mode changed done\n");
 return 0;
}
