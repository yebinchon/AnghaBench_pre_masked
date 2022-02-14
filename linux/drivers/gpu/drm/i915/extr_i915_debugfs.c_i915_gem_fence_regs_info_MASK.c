
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct i915_vma {int obj; } ;
struct i915_fence_reg {int pin_count; struct i915_vma* vma; } ;
struct TYPE_2__ {unsigned int num_fences; struct i915_fence_reg* fence_regs; } ;
struct drm_i915_private {TYPE_1__ ggtt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct seq_file*,char*,unsigned int,...) ;
 int FUNC_6 (struct seq_file*,char) ;
 int FUNC_7 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->private);
 unsigned int VAR_3;

 FUNC_5(VAR_0, "Total fences = %d\n", VAR_2->ggtt.num_fences);

 FUNC_3();
 for (VAR_3 = 0; VAR_3 < VAR_2->ggtt.num_fences; VAR_3++) {
  struct i915_fence_reg *VAR_4 = &VAR_2->ggtt.fence_regs[VAR_3];
  struct i915_vma *VAR_5 = VAR_4->vma;

  FUNC_5(VAR_0, "Fence %d, pin count = %d, object = ",
      VAR_3, FUNC_0(&VAR_4->pin_count));
  if (!VAR_5)
   FUNC_7(VAR_0, "unused");
  else
   FUNC_1(VAR_0, VAR_5->obj);
  FUNC_6(VAR_0, '\n');
 }
 FUNC_4();

 return 0;
}
