
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int reg0; int * force_bit; } ;
struct i2c_adapter {struct drm_psb_private* algo_data; } ;
struct drm_psb_private {int dummy; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct drm_psb_private*,int) ;
 int FUNC_2 (int *) ;
 struct intel_gmbus* FUNC_3 (struct i2c_adapter*) ;

void FUNC_4(struct i2c_adapter *VAR_0, bool VAR_1)
{
 struct intel_gmbus *VAR_2 = FUNC_3(VAR_0);

 if (VAR_1) {
  if (VAR_2->force_bit == ((void*)0)) {
   struct drm_psb_private *VAR_3 = VAR_0->algo_data;
   VAR_2->force_bit = FUNC_1(VAR_3,
          VAR_2->reg0 & 0xff);
  }
 } else {
  if (VAR_2->force_bit) {
   FUNC_0(VAR_2->force_bit);
   FUNC_2(VAR_2->force_bit);
   VAR_2->force_bit = ((void*)0);
  }
 }
}
