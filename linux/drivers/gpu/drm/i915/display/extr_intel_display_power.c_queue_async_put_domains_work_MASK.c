
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_power_domains {int async_put_wakeref; int async_put_work; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct i915_power_domains *VAR_1,
        intel_wakeref_t VAR_2)
{
 FUNC_0(VAR_1->async_put_wakeref);
 VAR_1->async_put_wakeref = VAR_2;
 FUNC_0(!FUNC_2(VAR_0,
        &VAR_1->async_put_work,
        FUNC_1(100)));
}
