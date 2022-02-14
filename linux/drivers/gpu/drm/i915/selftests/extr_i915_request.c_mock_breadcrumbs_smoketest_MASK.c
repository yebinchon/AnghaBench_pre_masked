
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct smoketest {int ncontexts; int max_batch; struct task_struct** contexts; TYPE_2__* engine; int num_fences; int num_waits; int request_alloc; } ;
struct drm_i915_private {TYPE_2__** engine; } ;
struct TYPE_8__ {int timeout_jiffies; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct TYPE_7__ {TYPE_1__ drm; } ;
struct TYPE_6__ {TYPE_3__* i915; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct task_struct**) ;
 void* FUNC_6 (unsigned int,int,int ) ;
 struct task_struct* FUNC_7 (int ,struct smoketest*,char*,unsigned int) ;
 int FUNC_8 (struct task_struct*) ;
 struct task_struct* FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (struct task_struct*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 (char*,int ,int ,unsigned int) ;
 int FUNC_16 (struct task_struct*) ;

__attribute__((used)) static int FUNC_17(void *VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_6;
 struct smoketest VAR_8 = {
  .engine = VAR_7->engine[VAR_2],
  .ncontexts = 1024,
  .max_batch = 1024,
  .request_alloc = VAR_4
 };
 unsigned int VAR_9 = FUNC_14();
 struct task_struct **VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;







 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_8.contexts =
  FUNC_6(VAR_8.ncontexts, sizeof(*VAR_8.contexts), VAR_1);
 if (!VAR_8.contexts) {
  VAR_12 = -VAR_0;
  goto out_threads;
 }

 FUNC_12(&VAR_8.engine->i915->drm.struct_mutex);
 for (VAR_11 = 0; VAR_11 < VAR_8.ncontexts; VAR_11++) {
  VAR_8.contexts[VAR_11] = FUNC_9(VAR_8.engine->i915, "mock");
  if (!VAR_8.contexts[VAR_11]) {
   VAR_12 = -VAR_0;
   goto out_contexts;
  }
 }
 FUNC_13(&VAR_8.engine->i915->drm.struct_mutex);

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_10[VAR_11] = FUNC_7(VAR_3,
      &VAR_8, "igt/%d", VAR_11);
  if (FUNC_0(VAR_10[VAR_11])) {
   VAR_12 = FUNC_1(VAR_10[VAR_11]);
   VAR_9 = VAR_11;
   break;
  }

  FUNC_3(VAR_10[VAR_11]);
 }

 FUNC_11(FUNC_4(VAR_5.timeout_jiffies));

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  int VAR_13;

  VAR_13 = FUNC_8(VAR_10[VAR_11]);
  if (VAR_13 < 0 && !VAR_12)
   VAR_12 = VAR_13;

  FUNC_16(VAR_10[VAR_11]);
 }
 FUNC_15("Completed %lu waits for %lu fence across %d cpus\n",
  FUNC_2(&VAR_8.num_waits),
  FUNC_2(&VAR_8.num_fences),
  VAR_9);

 FUNC_12(&VAR_8.engine->i915->drm.struct_mutex);
out_contexts:
 for (VAR_11 = 0; VAR_11 < VAR_8.ncontexts; VAR_11++) {
  if (!VAR_8.contexts[VAR_11])
   break;
  FUNC_10(VAR_8.contexts[VAR_11]);
 }
 FUNC_13(&VAR_8.engine->i915->drm.struct_mutex);
 FUNC_5(VAR_8.contexts);
out_threads:
 FUNC_5(VAR_10);

 return VAR_12;
}
