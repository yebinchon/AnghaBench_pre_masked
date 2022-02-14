
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_engine_cs {TYPE_3__* i915; } ;
struct TYPE_6__ {int priority; } ;
struct i915_request {TYPE_1__ sched; } ;
struct i915_gem_context {TYPE_1__ sched; } ;
struct drm_file {TYPE_1__ sched; } ;
struct active_engine {int flags; struct intel_engine_cs* engine; } ;
struct TYPE_7__ {int struct_mutex; } ;
struct TYPE_8__ {TYPE_2__ drm; } ;


 unsigned long FUNC_0 (struct i915_request**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 int VAR_0 ;
 int FUNC_4 (struct i915_request*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct i915_request*) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct i915_request*) ;
 struct i915_request* FUNC_9 (struct i915_request*) ;
 struct i915_request* FUNC_10 (struct i915_request*,struct intel_engine_cs*) ;
 int FUNC_11 () ;
 struct i915_request* FUNC_12 (TYPE_3__*,struct i915_request*) ;
 struct i915_request* FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,struct i915_request*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_17(void *VAR_2)
{
 FUNC_1(VAR_1);
 struct active_engine *VAR_3 = VAR_2;
 struct intel_engine_cs *VAR_4 = VAR_3->engine;
 struct i915_request *VAR_5[8] = {};
 struct i915_gem_context *VAR_6[FUNC_0(VAR_5)];
 struct drm_file *VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;

 VAR_7 = FUNC_13(VAR_4->i915);
 if (FUNC_2(VAR_7))
  return FUNC_3(VAR_7);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  FUNC_15(&VAR_4->i915->drm.struct_mutex);
  VAR_6[VAR_8] = FUNC_12(VAR_4->i915, VAR_7);
  FUNC_16(&VAR_4->i915->drm.struct_mutex);
  if (FUNC_2(VAR_6[VAR_8])) {
   VAR_9 = FUNC_3(VAR_6[VAR_8]);
   while (--VAR_8)
    FUNC_6(VAR_6[VAR_8]);
   goto err_file;
  }
 }

 while (!FUNC_11()) {
  unsigned int VAR_10 = VAR_8++ & (FUNC_0(VAR_5) - 1);
  struct i915_request *VAR_11 = VAR_5[VAR_10];
  struct i915_request *VAR_12;

  FUNC_15(&VAR_4->i915->drm.struct_mutex);
  VAR_12 = FUNC_10(VAR_6[VAR_10], VAR_4);
  if (FUNC_2(VAR_12)) {
   FUNC_16(&VAR_4->i915->drm.struct_mutex);
   VAR_9 = FUNC_3(VAR_12);
   break;
  }

  if (VAR_3->flags & VAR_0)
   VAR_6[VAR_10]->sched.priority =
    FUNC_7(512, &VAR_1);

  VAR_5[VAR_10] = FUNC_9(VAR_12);
  FUNC_8(VAR_12);
  FUNC_16(&VAR_4->i915->drm.struct_mutex);

  VAR_9 = FUNC_4(VAR_11);
  if (VAR_9)
   break;

  FUNC_5();
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++) {
  int VAR_13 = FUNC_4(VAR_5[VAR_8]);


  if (!VAR_9)
   VAR_9 = VAR_13;
 }

err_file:
 FUNC_14(VAR_4->i915, VAR_7);
 return VAR_9;
}
