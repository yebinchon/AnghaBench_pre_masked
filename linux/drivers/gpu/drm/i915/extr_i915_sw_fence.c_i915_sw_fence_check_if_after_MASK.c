
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sw_fence {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_sw_fence*,struct i915_sw_fence const* const) ;
 int FUNC_2 (struct i915_sw_fence*) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_5(struct i915_sw_fence *VAR_2,
      const struct i915_sw_fence * const VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 if (!FUNC_0(VAR_0))
  return 0;

 FUNC_3(&VAR_1, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_1, VAR_4);

 return VAR_5;
}
