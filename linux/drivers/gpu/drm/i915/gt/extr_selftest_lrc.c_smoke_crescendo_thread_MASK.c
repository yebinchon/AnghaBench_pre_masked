
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct preempt_smoke {unsigned long count; TYPE_1__* i915; int batch; } ;
struct i915_gem_context {int dummy; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_3__ {TYPE_2__ drm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i915_gem_context* FUNC_4 (struct preempt_smoke*) ;
 int FUNC_5 (struct preempt_smoke*,struct i915_gem_context*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_2)
{
 struct preempt_smoke *VAR_3 = VAR_2;
 FUNC_0(VAR_1);
 unsigned long VAR_4;

 VAR_4 = 0;
 do {
  struct i915_gem_context *VAR_5 = FUNC_4(VAR_3);
  int VAR_6;

  FUNC_2(&VAR_3->i915->drm.struct_mutex);
  VAR_6 = FUNC_5(VAR_3,
       VAR_5, VAR_4 % VAR_0,
       VAR_3->batch);
  FUNC_3(&VAR_3->i915->drm.struct_mutex);
  if (VAR_6)
   return VAR_6;

  VAR_4++;
 } while (!FUNC_1(VAR_1, ((void*)0)));

 VAR_3->count = VAR_4;
 return 0;
}
