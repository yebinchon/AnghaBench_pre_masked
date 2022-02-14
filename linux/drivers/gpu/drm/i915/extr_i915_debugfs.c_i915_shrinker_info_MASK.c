
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_3__ {int batch; int seeks; } ;
struct TYPE_4__ {TYPE_1__ shrinker; } ;
struct drm_i915_private {TYPE_2__ mm; } ;


 struct drm_i915_private* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_0(VAR_0->private);

 FUNC_1(VAR_0, "seeks = %d\n", VAR_2->mm.shrinker.seeks);
 FUNC_1(VAR_0, "batch = %lu\n", VAR_2->mm.shrinker.batch);

 return 0;
}
