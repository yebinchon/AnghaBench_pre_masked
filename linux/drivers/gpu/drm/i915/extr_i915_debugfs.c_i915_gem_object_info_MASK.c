
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {int shrink_memory; int free_count; int shrink_count; } ;
struct drm_i915_private {TYPE_1__ drm; TYPE_2__ mm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,struct drm_i915_private*) ;
 int FUNC_5 (struct seq_file*,char*,int ,int ,int ) ;
 int FUNC_6 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->private);
 int VAR_3;

 FUNC_5(VAR_0, "%u shrinkable [%u free] objects, %llu bytes\n",
     VAR_2->mm.shrink_count,
     FUNC_0(&VAR_2->mm.free_count),
     VAR_2->mm.shrink_memory);

 FUNC_6(VAR_0, '\n');

 VAR_3 = FUNC_1(&VAR_2->drm.struct_mutex);
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_0, VAR_2);
 FUNC_2(&VAR_2->drm.struct_mutex);

 return 0;
}
