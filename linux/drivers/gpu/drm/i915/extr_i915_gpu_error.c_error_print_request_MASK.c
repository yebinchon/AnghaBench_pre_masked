
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_error_state_buf {int dummy; } ;
struct TYPE_2__ {int priority; } ;
struct drm_i915_error_request {int tail; int head; int start; scalar_t__ jiffies; TYPE_1__ sched_attr; int flags; int seqno; int context; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_error_state_buf*,char*,char const*,int ,int ,int ,char*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_error_state_buf *VAR_2,
    const char *VAR_3,
    const struct drm_i915_error_request *VAR_4,
    const unsigned long VAR_5)
{
 if (!VAR_4->seqno)
  return;

 FUNC_0(VAR_2, "%s pid %d, seqno %8x:%08x%s%s, prio %d, emitted %dms, start %08x, head %08x, tail %08x\n",
     VAR_3, VAR_4->pid, VAR_4->context, VAR_4->seqno,
     FUNC_2(VAR_1,
       &VAR_4->flags) ? "!" : "",
     FUNC_2(VAR_0,
       &VAR_4->flags) ? "+" : "",
     VAR_4->sched_attr.priority,
     FUNC_1(VAR_4->jiffies - VAR_5),
     VAR_4->start, VAR_4->head, VAR_4->tail);
}
