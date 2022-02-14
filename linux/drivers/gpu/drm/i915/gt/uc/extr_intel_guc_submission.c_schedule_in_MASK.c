
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int gt; } ;


 struct i915_request* FUNC_0 (struct i915_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_request*,int) ;

__attribute__((used)) static struct i915_request *FUNC_3(struct i915_request *VAR_0, int VAR_1)
{
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0->engine->gt);
 return FUNC_0(VAR_0);
}
