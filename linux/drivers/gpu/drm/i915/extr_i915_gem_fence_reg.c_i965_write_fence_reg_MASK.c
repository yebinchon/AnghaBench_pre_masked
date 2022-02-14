
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct intel_uncore {int dummy; } ;
struct TYPE_3__ {unsigned int start; } ;
struct i915_vma {unsigned int fence_size; int obj; TYPE_1__ node; } ;
struct i915_fence_reg {TYPE_2__* i915; int id; } ;
typedef int i915_reg_t ;
struct TYPE_4__ {struct intel_uncore uncore; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (unsigned int,int) ;
 unsigned int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct i915_vma*) ;
 int FUNC_11 (struct intel_uncore*,int ) ;
 int FUNC_12 (struct intel_uncore*,int ,int ) ;
 int FUNC_13 (int) ;
 int VAR_6 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct i915_fence_reg *VAR_7,
     struct i915_vma *VAR_8)
{
 i915_reg_t VAR_9, VAR_10;
 int VAR_11;
 u64 VAR_12;

 if (FUNC_6(VAR_7->i915) >= 6) {
  VAR_9 = FUNC_4(VAR_7->id);
  VAR_10 = FUNC_3(VAR_7->id);
  VAR_11 = VAR_0;

 } else {
  VAR_9 = FUNC_2(VAR_7->id);
  VAR_10 = FUNC_1(VAR_7->id);
  VAR_11 = VAR_3;
 }

 VAR_12 = 0;
 if (VAR_8) {
  unsigned int VAR_13 = FUNC_8(VAR_8->obj);

  FUNC_5(!FUNC_10(VAR_8));
  FUNC_5(!FUNC_7(VAR_8->node.start, VAR_2));
  FUNC_5(!FUNC_7(VAR_8->fence_size, VAR_2));
  FUNC_5(!FUNC_7(VAR_13, 128));

  VAR_12 = (VAR_8->node.start + VAR_8->fence_size - VAR_2) << 32;
  VAR_12 |= VAR_8->node.start;
  VAR_12 |= (u64)((VAR_13 / 128) - 1) << VAR_11;
  if (FUNC_9(VAR_8->obj) == VAR_1)
   VAR_12 |= FUNC_0(VAR_5);
  VAR_12 |= VAR_4;
 }

 if (!VAR_6) {
  struct intel_uncore *VAR_14 = &VAR_7->i915->uncore;
  FUNC_12(VAR_14, VAR_9, 0);
  FUNC_11(VAR_14, VAR_9);

  FUNC_12(VAR_14, VAR_10, FUNC_14(VAR_12));
  FUNC_12(VAR_14, VAR_9, FUNC_13(VAR_12));
  FUNC_11(VAR_14, VAR_9);
 }
}
