
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int queue_priority_hint; } ;
struct TYPE_7__ {TYPE_2__ execlists; int name; } ;
struct virtual_engine {TYPE_3__ base; TYPE_4__** siblings; int request; } ;
struct TYPE_5__ {int seqno; int context; } ;
struct i915_request {TYPE_1__ fence; scalar_t__ execution_mask; } ;
typedef scalar_t__ intel_engine_mask_t ;
struct TYPE_8__ {scalar_t__ mask; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,scalar_t__,int ) ;
 struct i915_request* FUNC_1 (int ) ;
 int FUNC_2 (struct i915_request*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static intel_engine_mask_t FUNC_4(struct virtual_engine *VAR_1)
{
 struct i915_request *VAR_2;
 intel_engine_mask_t VAR_3;

 VAR_2 = FUNC_1(VAR_1->request);
 if (!VAR_2)
  return 0;


 VAR_3 = VAR_2->execution_mask;
 if (FUNC_3(!VAR_3)) {

  FUNC_2(VAR_2, -VAR_0);
  VAR_3 = VAR_1->siblings[0]->mask;
 }

 FUNC_0("%s: rq=%llx:%lld, mask=%x, prio=%d\n",
    VAR_1->base.name,
    VAR_2->fence.context, VAR_2->fence.seqno,
    VAR_3, VAR_1->base.execlists.queue_priority_hint);

 return VAR_3;
}
