
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
struct TYPE_3__ {int path; } ;
struct i915_error_uc {int guc_log; TYPE_2__ huc_fw; TYPE_1__ guc_fw; } ;
struct i915_gpu_state {struct i915_error_uc uc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i915_gpu_state *VAR_0)
{
 struct i915_error_uc *VAR_1 = &VAR_0->uc;

 FUNC_1(VAR_1->guc_fw.path);
 FUNC_1(VAR_1->huc_fw.path);
 FUNC_0(VAR_1->guc_log);
}
