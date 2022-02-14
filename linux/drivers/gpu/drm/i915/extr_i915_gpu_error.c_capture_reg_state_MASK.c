
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct i915_gpu_state {int ngtier; void* pgtbl_er; void* eir; void* ier; void** gtier; void* gac_eco; void* gam_ecochk; void* ccid; void* done_reg; void* error; void* derrmr; void* forcewake; void* gfx_mode; void* gab_ctl; void* fault_data1; void* fault_data0; void* err_int; struct drm_i915_private* i915; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_7 (struct intel_uncore*,int ) ;
 void* FUNC_8 (struct intel_uncore*,int ) ;
 void* FUNC_9 (struct intel_uncore*,int ) ;

__attribute__((used)) static void FUNC_10(struct i915_gpu_state *VAR_29)
{
 struct drm_i915_private *VAR_30 = VAR_29->i915;
 struct intel_uncore *VAR_31 = &VAR_30->uncore;
 int VAR_32;
 if (FUNC_6(VAR_30)) {
  VAR_29->gtier[0] = FUNC_7(VAR_31, VAR_25);
  VAR_29->ier = FUNC_7(VAR_31, VAR_28);
  VAR_29->forcewake = FUNC_9(VAR_31, VAR_7);
 }

 if (FUNC_4(VAR_30, 7))
  VAR_29->err_int = FUNC_7(VAR_31, VAR_20);

 if (FUNC_3(VAR_30) >= 12) {
  VAR_29->fault_data0 = FUNC_7(VAR_31,
             VAR_17);
  VAR_29->fault_data1 = FUNC_7(VAR_31,
             VAR_18);
 } else if (FUNC_3(VAR_30) >= 8) {
  VAR_29->fault_data0 = FUNC_7(VAR_31,
             VAR_22);
  VAR_29->fault_data1 = FUNC_7(VAR_31,
             VAR_23);
 }

 if (FUNC_4(VAR_30, 6)) {
  VAR_29->forcewake = FUNC_9(VAR_31, VAR_5);
  VAR_29->gab_ctl = FUNC_7(VAR_31, VAR_8);
  VAR_29->gfx_mode = FUNC_7(VAR_31, VAR_24);
 }


 if (FUNC_3(VAR_30) >= 7)
  VAR_29->forcewake = FUNC_9(VAR_31, VAR_6);

 if (FUNC_3(VAR_30) >= 6) {
  VAR_29->derrmr = FUNC_7(VAR_31, VAR_1);
  if (FUNC_3(VAR_30) < 12) {
   VAR_29->error = FUNC_7(VAR_31, VAR_4);
   VAR_29->done_reg = FUNC_7(VAR_31, VAR_2);
  }
 }

 if (FUNC_3(VAR_30) >= 5)
  VAR_29->ccid = FUNC_7(VAR_31, FUNC_0(VAR_27));


 if (FUNC_5(VAR_30, 6, 7)) {
  VAR_29->gam_ecochk = FUNC_7(VAR_31, VAR_10);
  VAR_29->gac_eco = FUNC_7(VAR_31, VAR_9);
 }


 if (FUNC_3(VAR_30) >= 11) {
  VAR_29->ier = FUNC_7(VAR_31, VAR_21);
  VAR_29->gtier[0] =
   FUNC_7(VAR_31,
       VAR_15);
  VAR_29->gtier[1] =
   FUNC_7(VAR_31, VAR_16);
  VAR_29->gtier[2] =
   FUNC_7(VAR_31, VAR_13);
  VAR_29->gtier[3] =
   FUNC_7(VAR_31,
       VAR_12);
  VAR_29->gtier[4] =
   FUNC_7(VAR_31,
       VAR_11);
  VAR_29->gtier[5] =
   FUNC_7(VAR_31,
       VAR_14);
  VAR_29->ngtier = 6;
 } else if (FUNC_3(VAR_30) >= 8) {
  VAR_29->ier = FUNC_7(VAR_31, VAR_21);
  for (VAR_32 = 0; VAR_32 < 4; VAR_32++)
   VAR_29->gtier[VAR_32] = FUNC_7(VAR_31,
           FUNC_1(VAR_32));
  VAR_29->ngtier = 4;
 } else if (FUNC_2(VAR_30)) {
  VAR_29->ier = FUNC_7(VAR_31, VAR_0);
  VAR_29->gtier[0] = FUNC_7(VAR_31, VAR_25);
  VAR_29->ngtier = 1;
 } else if (FUNC_4(VAR_30, 2)) {
  VAR_29->ier = FUNC_8(VAR_31, VAR_19);
 } else if (!FUNC_6(VAR_30)) {
  VAR_29->ier = FUNC_7(VAR_31, VAR_19);
 }
 VAR_29->eir = FUNC_7(VAR_31, VAR_3);
 VAR_29->pgtbl_er = FUNC_7(VAR_31, VAR_26);
}
