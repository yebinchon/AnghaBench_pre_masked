
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct i915_sw_fence {int pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct i915_sw_fence*,int ) ;
 int FUNC_1 (struct i915_sw_fence*,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_sw_fence*) ;
 int FUNC_4 (struct i915_sw_fence*) ;
 int FUNC_5 (struct i915_sw_fence*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct i915_sw_fence *VAR_5,
         struct list_head *VAR_6)
{
 FUNC_3(VAR_5);

 if (!FUNC_2(&VAR_5->pending))
  return;

 FUNC_5(VAR_5, VAR_0, VAR_1);

 if (FUNC_0(VAR_5, VAR_2) != VAR_4)
  return;

 FUNC_5(VAR_5, VAR_1, VAR_0);

 FUNC_1(VAR_5, VAR_6);

 FUNC_4(VAR_5);
 FUNC_0(VAR_5, VAR_3);
}
