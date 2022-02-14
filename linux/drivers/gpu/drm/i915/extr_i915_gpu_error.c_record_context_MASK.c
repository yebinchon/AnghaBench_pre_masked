
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int pid; int comm; } ;
struct i915_request {struct i915_gem_context* gem_context; } ;
struct i915_gem_context {int active_count; int guilty_count; int sched; int hw_id; scalar_t__ pid; } ;
struct drm_i915_error_context {void* active; void* guilty; int sched_attr; int hw_id; int pid; int comm; } ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct i915_gem_context const*) ;
 struct task_struct* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct drm_i915_error_context *VAR_1,
      const struct i915_request *VAR_2)
{
 const struct i915_gem_context *VAR_3 = VAR_2->gem_context;

 if (VAR_3->pid) {
  struct task_struct *VAR_4;

  FUNC_3();
  VAR_4 = FUNC_2(VAR_3->pid, VAR_0);
  if (VAR_4) {
   FUNC_5(VAR_1->comm, VAR_4->comm);
   VAR_1->pid = VAR_4->pid;
  }
  FUNC_4();
 }

 VAR_1->hw_id = VAR_3->hw_id;
 VAR_1->sched_attr = VAR_3->sched;
 VAR_1->guilty = FUNC_0(&VAR_3->guilty_count);
 VAR_1->active = FUNC_0(&VAR_3->active_count);

 return FUNC_1(VAR_3);
}
