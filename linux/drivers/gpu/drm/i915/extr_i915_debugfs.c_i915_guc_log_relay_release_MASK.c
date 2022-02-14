
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_guc {int log; } ;
struct inode {struct drm_i915_private* i_private; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct intel_guc guc; } ;
struct TYPE_4__ {TYPE_1__ uc; } ;
struct drm_i915_private {TYPE_2__ gt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->i_private;
 struct intel_guc *VAR_3 = &VAR_2->gt.uc.guc;

 FUNC_0(&VAR_3->log);
 return 0;
}
