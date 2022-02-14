
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct intel_engine_cs {int name; } ;
struct drm_i915_reg_descriptor {int mask; size_t const value; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_4__ {size_t step; size_t offset; size_t const mask; } ;
struct drm_i915_cmd_descriptor {int flags; TYPE_3__* bits; TYPE_2__ cmd; TYPE_1__ reg; } ;
struct TYPE_6__ {size_t const mask; scalar_t__ condition_mask; size_t condition_offset; size_t offset; size_t expected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,size_t const,...) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct drm_i915_reg_descriptor* FUNC_2 (struct intel_engine_cs const*,size_t const) ;

__attribute__((used)) static bool FUNC_3(const struct intel_engine_cs *VAR_7,
        const struct drm_i915_cmd_descriptor *VAR_8,
        const u32 *VAR_9, u32 VAR_10)
{
 if (VAR_8->flags & VAR_3)
  return 1;

 if (VAR_8->flags & VAR_2) {
  FUNC_0("CMD: Rejected command: 0x%08X\n", *VAR_9);
  return 0;
 }

 if (VAR_8->flags & VAR_1) {





  const u32 VAR_11 = VAR_8->reg.step ? VAR_8->reg.step : VAR_10;
  u32 VAR_12;

  for (VAR_12 = VAR_8->reg.offset; VAR_12 < VAR_10;
       VAR_12 += VAR_11) {
   const u32 VAR_13 = VAR_9[VAR_12] & VAR_8->reg.mask;
   const struct drm_i915_reg_descriptor *VAR_14 =
    FUNC_2(VAR_7, VAR_13);

   if (!VAR_14) {
    FUNC_0("CMD: Rejected register 0x%08X in command: 0x%08X (%s)\n",
       VAR_13, *VAR_9, VAR_7->name);
    return 0;
   }





   if (VAR_14->mask) {
    if (VAR_8->cmd.value == VAR_5) {
     FUNC_0("CMD: Rejected LRM to masked register 0x%08X\n",
        VAR_13);
     return 0;
    }

    if (VAR_8->cmd.value == VAR_6) {
     FUNC_0("CMD: Rejected LRR to masked register 0x%08X\n",
        VAR_13);
     return 0;
    }

    if (VAR_8->cmd.value == FUNC_1(1) &&
        (VAR_12 + 2 > VAR_10 ||
         (VAR_9[VAR_12 + 1] & VAR_14->mask) != VAR_14->value)) {
     FUNC_0("CMD: Rejected LRI to masked register 0x%08X\n",
        VAR_13);
     return 0;
    }
   }
  }
 }

 if (VAR_8->flags & VAR_0) {
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   u32 VAR_16;

   if (VAR_8->bits[VAR_15].mask == 0)
    break;

   if (VAR_8->bits[VAR_15].condition_mask != 0) {
    u32 VAR_17 =
     VAR_8->bits[VAR_15].condition_offset;
    u32 VAR_18 = VAR_9[VAR_17] &
     VAR_8->bits[VAR_15].condition_mask;

    if (VAR_18 == 0)
     continue;
   }

   if (VAR_8->bits[VAR_15].offset >= VAR_10) {
    FUNC_0("CMD: Rejected command 0x%08X, too short to check bitmask (%s)\n",
       *VAR_9, VAR_7->name);
    return 0;
   }

   VAR_16 = VAR_9[VAR_8->bits[VAR_15].offset] &
    VAR_8->bits[VAR_15].mask;

   if (VAR_16 != VAR_8->bits[VAR_15].expected) {
    FUNC_0("CMD: Rejected command 0x%08X for bitmask 0x%08X (exp=0x%08X act=0x%08X) (%s)\n",
       *VAR_9,
       VAR_8->bits[VAR_15].mask,
       VAR_8->bits[VAR_15].expected,
       VAR_16, VAR_7->name);
    return 0;
   }
  }
 }

 return 1;
}
