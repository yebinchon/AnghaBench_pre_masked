
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct drm_printer {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int sseu; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 struct drm_printer FUNC_1 (struct seq_file*) ;
 int FUNC_2 (int *,struct drm_printer*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->private);
 struct drm_printer VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&FUNC_0(VAR_2)->sseu, &VAR_3);

 return 0;
}
