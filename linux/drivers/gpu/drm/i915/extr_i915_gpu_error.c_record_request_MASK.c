
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr; } ;
struct TYPE_4__ {int seqno; int context; int flags; } ;
struct i915_request {int tail; int head; TYPE_3__* ring; int emitted_jiffies; TYPE_2__ sched; TYPE_1__ fence; struct i915_gem_context* gem_context; } ;
struct i915_gem_context {scalar_t__ pid; } ;
struct drm_i915_error_request {int pid; int tail; int head; int start; int jiffies; int sched_attr; int seqno; int context; int flags; } ;
struct TYPE_6__ {int vma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(const struct i915_request *VAR_0,
      struct drm_i915_error_request *VAR_1)
{
 const struct i915_gem_context *VAR_2 = VAR_0->gem_context;

 VAR_1->flags = VAR_0->fence.flags;
 VAR_1->context = VAR_0->fence.context;
 VAR_1->seqno = VAR_0->fence.seqno;
 VAR_1->sched_attr = VAR_0->sched.attr;
 VAR_1->jiffies = VAR_0->emitted_jiffies;
 VAR_1->start = FUNC_0(VAR_0->ring->vma);
 VAR_1->head = VAR_0->head;
 VAR_1->tail = VAR_0->tail;

 FUNC_2();
 VAR_1->pid = VAR_2->pid ? FUNC_1(VAR_2->pid) : 0;
 FUNC_3();
}
