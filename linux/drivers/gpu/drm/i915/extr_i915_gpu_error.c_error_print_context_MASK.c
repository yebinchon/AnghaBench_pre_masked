
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_error_state_buf {int dummy; } ;
struct TYPE_2__ {int priority; } ;
struct drm_i915_error_context {int active; int guilty; TYPE_1__ sched_attr; int hw_id; int pid; int comm; } ;


 int FUNC_0 (struct drm_i915_error_state_buf*,char*,char const*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_error_state_buf *VAR_0,
    const char *VAR_1,
    const struct drm_i915_error_context *VAR_2)
{
 FUNC_0(VAR_0, "%s%s[%d] hw_id %d, prio %d, guilty %d active %d\n",
     VAR_1, VAR_2->comm, VAR_2->pid, VAR_2->hw_id,
     VAR_2->sched_attr.priority, VAR_2->guilty, VAR_2->active);
}
