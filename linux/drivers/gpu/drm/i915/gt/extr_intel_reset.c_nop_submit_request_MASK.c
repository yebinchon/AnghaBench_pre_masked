
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; int name; } ;
struct TYPE_4__ {int seqno; int context; } ;
struct i915_request {TYPE_2__ fence; struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (struct intel_engine_cs*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct i915_request *VAR_1)
{
 struct intel_engine_cs *VAR_2 = VAR_1->engine;
 unsigned long VAR_3;

 FUNC_0("%s fence %llx:%lld -> -EIO\n",
    VAR_2->name, VAR_1->fence.context, VAR_1->fence.seqno);
 FUNC_2(&VAR_1->fence, -VAR_0);

 FUNC_5(&VAR_2->active.lock, VAR_3);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(&VAR_2->active.lock, VAR_3);

 FUNC_4(VAR_2);
}
