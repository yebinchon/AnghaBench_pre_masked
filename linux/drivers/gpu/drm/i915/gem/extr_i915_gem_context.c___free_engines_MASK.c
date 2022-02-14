
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_engines {int * engines; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i915_gem_engines*) ;

__attribute__((used)) static void FUNC_2(struct i915_gem_engines *VAR_0, unsigned int VAR_1)
{
 while (VAR_1--) {
  if (!VAR_0->engines[VAR_1])
   continue;

  FUNC_0(VAR_0->engines[VAR_1]);
 }
 FUNC_1(VAR_0);
}
