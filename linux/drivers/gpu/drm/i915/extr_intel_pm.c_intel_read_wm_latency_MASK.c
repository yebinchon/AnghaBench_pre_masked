
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_16gb_dimm; } ;
struct drm_i915_private {TYPE_1__ dram_info; struct intel_uncore uncore; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct intel_uncore*,int ) ;
 int FUNC_8 (struct intel_uncore*,int ) ;
 int FUNC_9 (struct drm_i915_private*,int ,scalar_t__*,int *) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_15,
      u16 VAR_16[8])
{
 struct intel_uncore *VAR_17 = &VAR_15->uncore;

 if (FUNC_2(VAR_15) >= 9) {
  u32 VAR_18;
  int VAR_19, VAR_20;
  int VAR_21, VAR_22 = FUNC_6(VAR_15);


  VAR_18 = 0;
  VAR_19 = FUNC_9(VAR_15,
          VAR_4,
          &VAR_18, ((void*)0));

  if (VAR_19) {
   FUNC_0("SKL Mailbox read error = %d\n", VAR_19);
   return;
  }

  VAR_16[0] = VAR_18 & VAR_3;
  VAR_16[1] = (VAR_18 >> VAR_0) &
    VAR_3;
  VAR_16[2] = (VAR_18 >> VAR_1) &
    VAR_3;
  VAR_16[3] = (VAR_18 >> VAR_2) &
    VAR_3;


  VAR_18 = 1;
  VAR_19 = FUNC_9(VAR_15,
          VAR_4,
          &VAR_18, ((void*)0));
  if (VAR_19) {
   FUNC_0("SKL Mailbox read error = %d\n", VAR_19);
   return;
  }

  VAR_16[4] = VAR_18 & VAR_3;
  VAR_16[5] = (VAR_18 >> VAR_0) &
    VAR_3;
  VAR_16[6] = (VAR_18 >> VAR_1) &
    VAR_3;
  VAR_16[7] = (VAR_18 >> VAR_2) &
    VAR_3;






  for (VAR_21 = 1; VAR_21 <= VAR_22; VAR_21++) {
   if (VAR_16[VAR_21] == 0) {
    for (VAR_20 = VAR_21 + 1; VAR_20 <= VAR_22; VAR_20++)
     VAR_16[VAR_20] = 0;
    break;
   }
  }
  if (VAR_16[0] == 0) {
   VAR_16[0] += 2;
   for (VAR_21 = 1; VAR_21 <= VAR_22; VAR_21++) {
    if (VAR_16[VAR_21] == 0)
     break;
    VAR_16[VAR_21] += 2;
   }
  }







  if (VAR_15->dram_info.is_16gb_dimm)
   VAR_16[0] += 1;

 } else if (FUNC_4(VAR_15) || FUNC_3(VAR_15)) {
  u64 VAR_23 = FUNC_8(VAR_17, VAR_6);

  VAR_16[0] = (VAR_23 >> 56) & 0xFF;
  if (VAR_16[0] == 0)
   VAR_16[0] = VAR_23 & 0xF;
  VAR_16[1] = (VAR_23 >> 4) & 0xFF;
  VAR_16[2] = (VAR_23 >> 12) & 0xFF;
  VAR_16[3] = (VAR_23 >> 20) & 0x1FF;
  VAR_16[4] = (VAR_23 >> 32) & 0x1FF;
 } else if (FUNC_2(VAR_15) >= 6) {
  u32 VAR_24 = FUNC_7(VAR_17, VAR_6);

  VAR_16[0] = (VAR_24 >> VAR_10) & VAR_14;
  VAR_16[1] = (VAR_24 >> VAR_11) & VAR_14;
  VAR_16[2] = (VAR_24 >> VAR_12) & VAR_14;
  VAR_16[3] = (VAR_24 >> VAR_13) & VAR_14;
 } else if (FUNC_2(VAR_15) >= 5) {
  u32 VAR_25 = FUNC_7(VAR_17, VAR_7);


  VAR_16[0] = 7;
  VAR_16[1] = (VAR_25 >> VAR_8) & VAR_5;
  VAR_16[2] = (VAR_25 >> VAR_9) & VAR_5;
 } else {
  FUNC_5(FUNC_1(VAR_15));
 }
}
