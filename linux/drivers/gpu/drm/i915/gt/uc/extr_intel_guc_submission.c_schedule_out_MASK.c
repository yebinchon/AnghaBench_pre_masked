
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int gt; } ;


 int FUNC_0 (struct i915_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_request*) ;

__attribute__((used)) static void FUNC_3(struct i915_request *VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_1(VAR_0->engine->gt);
 FUNC_0(VAR_0);
}
