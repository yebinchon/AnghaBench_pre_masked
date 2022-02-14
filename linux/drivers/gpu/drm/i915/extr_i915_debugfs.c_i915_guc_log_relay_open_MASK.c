
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_guc_log {int dummy; } ;
struct intel_guc {struct intel_guc_log log; } ;
struct inode {struct drm_i915_private* i_private; } ;
struct file {struct intel_guc_log* private_data; } ;
struct TYPE_3__ {struct intel_guc guc; } ;
struct TYPE_4__ {TYPE_1__ uc; } ;
struct drm_i915_private {TYPE_2__ gt; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_guc*) ;
 int FUNC_1 (struct intel_guc_log*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->i_private;
 struct intel_guc *VAR_4 = &VAR_3->gt.uc.guc;
 struct intel_guc_log *VAR_5 = &VAR_4->log;

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 VAR_2->private_data = VAR_5;

 return FUNC_1(VAR_5);
}
