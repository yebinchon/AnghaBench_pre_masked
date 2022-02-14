
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_gem_context {int pid; int name; TYPE_1__* vm; struct drm_i915_file_private* file_priv; } ;
struct drm_i915_file_private {int context_idr_lock; int context_idr; } ;
struct TYPE_5__ {int comm; } ;
struct TYPE_4__ {struct drm_i915_file_private* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,struct i915_gem_context*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i915_gem_context *VAR_4,
    struct drm_i915_file_private *VAR_5)
{
 int VAR_6;

 VAR_4->file_priv = VAR_5;
 if (VAR_4->vm)
  VAR_4->vm->file = VAR_5;

 VAR_4->pid = FUNC_1(VAR_3, VAR_2);
 VAR_4->name = FUNC_3(VAR_1, "%s[%d]",
         VAR_3->comm, FUNC_7(VAR_4->pid));
 if (!VAR_4->name) {
  VAR_6 = -VAR_0;
  goto err_pid;
 }


 FUNC_5(&VAR_5->context_idr_lock);
 VAR_6 = FUNC_2(&VAR_5->context_idr, VAR_4, 0, 0, VAR_1);
 FUNC_6(&VAR_5->context_idr_lock);
 if (VAR_6 >= 0)
  goto out;

 FUNC_4(FUNC_0(&VAR_4->name));
err_pid:
 FUNC_8(FUNC_0(&VAR_4->pid));
out:
 return VAR_6;
}
