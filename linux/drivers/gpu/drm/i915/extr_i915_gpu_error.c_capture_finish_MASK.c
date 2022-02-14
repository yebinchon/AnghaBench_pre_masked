
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct i915_gpu_state {TYPE_1__* i915; } ;
struct TYPE_6__ {int (* clear_range ) (TYPE_3__*,int const,int ) ;} ;
struct TYPE_5__ {int start; } ;
struct i915_ggtt {TYPE_3__ vm; TYPE_2__ error_capture; } ;
struct TYPE_4__ {struct i915_ggtt ggtt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int const,int ) ;

__attribute__((used)) static void FUNC_1(struct i915_gpu_state *VAR_1)
{
 struct i915_ggtt *VAR_2 = &VAR_1->i915->ggtt;
 const u64 VAR_3 = VAR_2->error_capture.start;

 VAR_2->vm.clear_range(&VAR_2->vm, VAR_3, VAR_0);
}
