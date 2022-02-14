
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lspcon {int dummy; } ;
struct i2c_adapter {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;
struct TYPE_3__ {struct i2c_adapter ddc; } ;
struct TYPE_4__ {TYPE_1__ aux; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int*) ;
 TYPE_2__* FUNC_2 (struct intel_lspcon*) ;

__attribute__((used)) static enum drm_lspcon_mode FUNC_3(struct intel_lspcon *VAR_1)
{
 enum drm_lspcon_mode VAR_2;
 struct i2c_adapter *VAR_3 = &FUNC_2(VAR_1)->aux.ddc;

 if (FUNC_1(VAR_3, &VAR_2)) {
  FUNC_0("Error reading LSPCON mode\n");
  return VAR_0;
 }
 return VAR_2;
}
