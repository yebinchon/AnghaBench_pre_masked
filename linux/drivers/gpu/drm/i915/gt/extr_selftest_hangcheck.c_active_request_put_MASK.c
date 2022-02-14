
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seqno; int context; } ;
struct i915_request {TYPE_2__* engine; TYPE_1__ fence; } ;
struct TYPE_4__ {int gt; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct i915_request*) ;
 scalar_t__ FUNC_3 (struct i915_request*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i915_request *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return 0;

 if (FUNC_3(VAR_2, 0, 5 * VAR_1) < 0) {
  FUNC_0("%s timed out waiting for completion of fence %llx:%lld\n",
     VAR_2->engine->name,
     VAR_2->fence.context,
     VAR_2->fence.seqno);
  FUNC_1();

  FUNC_4(VAR_2->engine->gt);
  VAR_3 = -VAR_0;
 }

 FUNC_2(VAR_2);

 return VAR_3;
}
