
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int private; } ;
struct i915_psr {int debug; int lock; scalar_t__ psr2_enabled; int last_exit; int last_entry_attempt; int busy_frontbuffer_bits; scalar_t__ enabled; int sink_support; TYPE_1__* dp; } ;
struct drm_i915_private {int runtime_pm; struct i915_psr psr; } ;
typedef int intel_wakeref_t ;
struct TYPE_2__ {int * psr_dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 int FUNC_13 (struct drm_i915_private*,struct seq_file*) ;
 int FUNC_14 (struct seq_file*,char*,...) ;
 int FUNC_15 (struct seq_file*,char*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct seq_file *VAR_9, void *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_12(VAR_9->private);
 struct i915_psr *VAR_12 = &VAR_11->psr;
 intel_wakeref_t VAR_13;
 const char *VAR_14;
 bool VAR_15;
 u32 VAR_16;

 if (!FUNC_0(VAR_11))
  return -VAR_6;

 FUNC_14(VAR_9, "Sink support: %s", FUNC_16(VAR_12->sink_support));
 if (VAR_12->dp)
  FUNC_14(VAR_9, " [0x%02x]", VAR_12->dp->psr_dpcd[0]);
 FUNC_15(VAR_9, "\n");

 if (!VAR_12->sink_support)
  return 0;

 VAR_13 = FUNC_8(&VAR_11->runtime_pm);
 FUNC_10(&VAR_12->lock);

 if (VAR_12->enabled)
  VAR_14 = VAR_12->psr2_enabled ? "PSR2 enabled" : "PSR1 enabled";
 else
  VAR_14 = "disabled";
 FUNC_14(VAR_9, "PSR mode: %s\n", VAR_14);

 if (!VAR_12->enabled)
  goto unlock;

 if (VAR_12->psr2_enabled) {
  VAR_16 = FUNC_1(VAR_0);
  VAR_15 = VAR_16 & VAR_1;
 } else {
  VAR_16 = FUNC_1(VAR_2);
  VAR_15 = VAR_16 & VAR_3;
 }
 FUNC_14(VAR_9, "Source PSR ctl: %s [0x%08x]\n",
     FUNC_7(VAR_15), VAR_16);
 FUNC_13(VAR_11, VAR_9);
 FUNC_14(VAR_9, "Busy frontbuffer bits: 0x%08x\n",
     VAR_12->busy_frontbuffer_bits);




 if (FUNC_3(VAR_11) || FUNC_2(VAR_11)) {
  VAR_16 = FUNC_1(VAR_4) & VAR_5;
  FUNC_14(VAR_9, "Performance counter: %u\n", VAR_16);
 }

 if (VAR_12->debug & VAR_7) {
  FUNC_14(VAR_9, "Last attempted entry at: %lld\n",
      VAR_12->last_entry_attempt);
  FUNC_14(VAR_9, "Last exit at: %lld\n", VAR_12->last_exit);
 }

 if (VAR_12->psr2_enabled) {
  u32 VAR_17[3];
  int VAR_18;





  for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18 += 3)
   VAR_17[VAR_18 / 3] = FUNC_1(FUNC_4(VAR_18));

  FUNC_15(VAR_9, "Frame:\tPSR2 SU blocks:\n");

  for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
   u32 VAR_19;

   VAR_19 = VAR_17[VAR_18 / 3] &
        FUNC_5(VAR_18);
   VAR_19 = VAR_19 >> FUNC_6(VAR_18);
   FUNC_14(VAR_9, "%d\t%d\n", VAR_18, VAR_19);
  }
 }

unlock:
 FUNC_11(&VAR_12->lock);
 FUNC_9(&VAR_11->runtime_pm, VAR_13);

 return 0;
}
