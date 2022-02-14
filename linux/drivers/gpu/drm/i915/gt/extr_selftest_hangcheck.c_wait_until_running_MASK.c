
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqno; } ;
struct i915_request {TYPE_1__ fence; } ;
struct hang {int dummy; } ;


 int FUNC_0 (struct hang*,struct i915_request*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static bool FUNC_4(struct hang *VAR_0, struct i915_request *VAR_1)
{
 return !(FUNC_3(FUNC_1(FUNC_0(VAR_0, VAR_1),
            VAR_1->fence.seqno),
        10) &&
   FUNC_2(FUNC_1(FUNC_0(VAR_0, VAR_1),
         VAR_1->fence.seqno),
     1000));
}
