
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int aux; } ;
struct i915_psr {int sink_not_reliable; int lock; struct intel_dp* dp; int enabled; } ;
struct drm_i915_private {struct i915_psr psr; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct intel_dp *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_7);
 struct i915_psr *VAR_9 = &VAR_8->psr;
 u8 VAR_10;
 const u8 VAR_11 = VAR_2 |
     VAR_6 |
     VAR_1;

 if (!FUNC_0(VAR_8) || !FUNC_6(VAR_7))
  return;

 FUNC_8(&VAR_9->lock);

 if (!VAR_9->enabled || VAR_9->dp != VAR_7)
  goto exit;

 if (FUNC_4(&VAR_7->aux, VAR_5, &VAR_10) != 1) {
  FUNC_2("PSR_STATUS dpcd read failed\n");
  goto exit;
 }

 if ((VAR_10 & VAR_4) == VAR_3) {
  FUNC_1("PSR sink internal error, disabling PSR\n");
  FUNC_7(VAR_7);
  VAR_9->sink_not_reliable = 1;
 }

 if (FUNC_4(&VAR_7->aux, VAR_0, &VAR_10) != 1) {
  FUNC_2("PSR_ERROR_STATUS dpcd read failed\n");
  goto exit;
 }

 if (VAR_10 & VAR_2)
  FUNC_1("PSR RFB storage error, disabling PSR\n");
 if (VAR_10 & VAR_6)
  FUNC_1("PSR VSC SDP uncorrectable error, disabling PSR\n");
 if (VAR_10 & VAR_1)
  FUNC_2("PSR Link CRC error, disabling PSR\n");

 if (VAR_10 & ~VAR_11)
  FUNC_2("PSR_ERROR_STATUS unhandled errors %x\n",
     VAR_10 & ~VAR_11);
 if (VAR_10 & VAR_11) {
  FUNC_7(VAR_7);
  VAR_9->sink_not_reliable = 1;
 }

 FUNC_5(&VAR_7->aux, VAR_0, VAR_10);
exit:
 FUNC_9(&VAR_9->lock);
}
