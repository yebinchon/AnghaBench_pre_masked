
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_engine_cs {scalar_t__ class; scalar_t__ instance; int i915; } ;
struct intel_context {int state; int vm; struct i915_gem_context* gem_context; } ;
struct i915_gem_context {scalar_t__ hw_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static u64
FUNC_7(struct intel_context *VAR_16, struct intel_engine_cs *VAR_17)
{
 struct i915_gem_context *VAR_18 = VAR_16->gem_context;
 u64 VAR_19;

 FUNC_1(VAR_14 > (FUNC_0(VAR_7)));
 FUNC_1(VAR_2 > (FUNC_0(VAR_4)));

 VAR_19 = VAR_11;
 if (FUNC_6(VAR_16->vm))
  VAR_19 = VAR_12;
 VAR_19 <<= VAR_5;

 VAR_19 |= VAR_10 | VAR_9;
 if (FUNC_4(VAR_17->i915, 8))
  VAR_19 |= VAR_8;

 VAR_19 |= FUNC_5(VAR_16->state) + VAR_13 * VAR_15;






 if (FUNC_3(VAR_17->i915) >= 11) {
  FUNC_2(VAR_18->hw_id >= FUNC_0(VAR_4));
  VAR_19 |= (u64)VAR_18->hw_id << VAR_3;


  VAR_19 |= (u64)VAR_17->instance << VAR_1;




  VAR_19 |= (u64)VAR_17->class << VAR_0;

 } else {
  FUNC_2(VAR_18->hw_id >= FUNC_0(VAR_7));
  VAR_19 |= (u64)VAR_18->hw_id << VAR_6;
 }

 return VAR_19;
}
