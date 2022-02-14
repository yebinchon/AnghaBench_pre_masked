
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_engines {unsigned int num_engines; int ** engines; int rcu; } ;


 int VAR_0 ;
 struct i915_gem_engines* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 struct i915_gem_engines* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i915_gem_engines*,int ,unsigned int) ;

__attribute__((used)) static struct i915_gem_engines *
FUNC_5(struct i915_gem_engines *VAR_3)
{
 struct i915_gem_engines *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_3(FUNC_4(VAR_3, VAR_2, VAR_3->num_engines), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->rcu);
 for (VAR_5 = 0; VAR_5 < VAR_3->num_engines; VAR_5++) {
  if (VAR_3->engines[VAR_5])
   VAR_4->engines[VAR_5] = FUNC_2(VAR_3->engines[VAR_5]);
  else
   VAR_4->engines[VAR_5] = ((void*)0);
 }
 VAR_4->num_engines = VAR_5;

 return VAR_4;
}
