
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {int sb_lock; struct intel_uncore uncore; } ;


 int FUNC_0 (char*,char*) ;
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
 scalar_t__ FUNC_1 (struct intel_uncore*,int ,int,int ,int,int ,int *) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int) ;
 scalar_t__ FUNC_4 (struct intel_uncore*,int ,int,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct drm_i915_private *VAR_14,
      u32 VAR_15, u32 VAR_16, u32 VAR_17,
      u32 VAR_18, u32 *VAR_19)
{
 struct intel_uncore *VAR_20 = &VAR_14->uncore;
 const bool VAR_21 = (VAR_17 == VAR_10 || VAR_17 == VAR_9);
 int VAR_22;

 FUNC_6(&VAR_14->sb_lock);
 if (VAR_16 == VAR_6)
  FUNC_5();


 if (FUNC_4(VAR_20,
        VAR_13, VAR_8, 0,
        5)) {
  FUNC_0("IOSF sideband idle wait (%s) timed out\n",
     VAR_21 ? "read" : "write");
  return -VAR_0;
 }

 FUNC_7();

 FUNC_3(VAR_20, VAR_11, VAR_18);
 FUNC_3(VAR_20, VAR_12, VAR_21 ? 0 : *VAR_19);
 FUNC_3(VAR_20, VAR_13,
         (VAR_15 << VAR_4) |
         (VAR_17 << VAR_5) |
         (VAR_16 << VAR_7) |
         (0xf << VAR_3) |
         (0 << VAR_2) |
         VAR_8);

 if (FUNC_1(VAR_20,
      VAR_13, VAR_8, 0,
      10000, 0, ((void*)0)) == 0) {
  if (VAR_21)
   *VAR_19 = FUNC_2(VAR_20, VAR_12);
  VAR_22 = 0;
 } else {
  FUNC_0("IOSF sideband finish wait (%s) timed out\n",
     VAR_21 ? "read" : "write");
  VAR_22 = -VAR_1;
 }

 FUNC_8();

 return VAR_22;
}
