
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_uncore {int dummy; } ;
struct TYPE_4__ {TYPE_1__* gt; } ;
struct i915_ggtt {TYPE_2__ vm; } ;
struct TYPE_3__ {struct intel_uncore* uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i915_ggtt*) ;
 int FUNC_1 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i915_ggtt *VAR_2)
{
 struct intel_uncore *VAR_3 = VAR_2->vm.gt->uncore;

 FUNC_0(VAR_2);
 FUNC_1(VAR_3, VAR_0, VAR_1);
}
