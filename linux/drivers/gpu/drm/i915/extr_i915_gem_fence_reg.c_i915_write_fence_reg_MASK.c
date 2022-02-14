
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_3__ {int start; } ;
struct i915_vma {unsigned int fence_size; TYPE_1__ node; int obj; } ;
struct i915_fence_reg {int id; TYPE_2__* i915; } ;
typedef int i915_reg_t ;
struct TYPE_4__ {struct intel_uncore uncore; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_5 (int,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct intel_uncore*,int ) ;
 int FUNC_11 (struct intel_uncore*,int ,int) ;
 int FUNC_12 (unsigned int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(struct i915_fence_reg *VAR_6,
     struct i915_vma *VAR_7)
{
 u32 VAR_8;

 VAR_8 = 0;
 if (VAR_7) {
  unsigned int VAR_9 = FUNC_7(VAR_7->obj);
  bool VAR_10 = VAR_9 == VAR_4;
  unsigned int VAR_11 = FUNC_6(VAR_7->obj);

  FUNC_2(!FUNC_8(VAR_7));
  FUNC_2(VAR_7->node.start & ~VAR_3);
  FUNC_2(!FUNC_12(VAR_7->fence_size));
  FUNC_2(!FUNC_5(VAR_7->node.start, VAR_7->fence_size));

  if (VAR_10 && FUNC_3(VAR_6->i915))
   VAR_11 /= 128;
  else
   VAR_11 /= 512;
  FUNC_2(!FUNC_12(VAR_11));

  VAR_8 = VAR_7->node.start;
  if (VAR_10)
   VAR_8 |= FUNC_0(VAR_2);
  VAR_8 |= FUNC_4(VAR_7->fence_size);
  VAR_8 |= FUNC_9(VAR_11) << VAR_0;

  VAR_8 |= VAR_1;
 }

 if (!VAR_5) {
  struct intel_uncore *VAR_12 = &VAR_6->i915->uncore;
  i915_reg_t VAR_13 = FUNC_1(VAR_6->id);

  FUNC_11(VAR_12, VAR_13, VAR_8);
  FUNC_10(VAR_12, VAR_13);
 }
}
