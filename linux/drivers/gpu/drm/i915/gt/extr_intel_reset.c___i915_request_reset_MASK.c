
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int seqno; int context; } ;
struct i915_request {int gem_context; TYPE_2__ fence; TYPE_1__* engine; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct i915_request*) ;
 int FUNC_6 (struct i915_request*) ;
 int FUNC_7 (struct i915_request*,int ) ;
 int FUNC_8 (int) ;

void FUNC_9(struct i915_request *VAR_2, bool VAR_3)
{
 FUNC_1("%s rq=%llx:%lld, guilty? %s\n",
    VAR_2->engine->name,
    VAR_2->fence.context,
    VAR_2->fence.seqno,
    FUNC_8(VAR_3));

 FUNC_0(FUNC_6(VAR_2));

 if (VAR_3) {
  FUNC_7(VAR_2, -VAR_1);
  if (FUNC_2(VAR_2->gem_context))
   FUNC_5(VAR_2);
 } else {
  FUNC_4(&VAR_2->fence, -VAR_0);
  FUNC_3(VAR_2->gem_context);
 }
}
