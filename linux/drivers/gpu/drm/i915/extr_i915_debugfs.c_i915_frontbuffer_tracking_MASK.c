
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct TYPE_2__ {int flip_bits; int busy_bits; } ;
struct drm_i915_private {TYPE_1__ fb_tracking; } ;


 struct drm_i915_private* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_0(VAR_0->private);

 FUNC_1(VAR_0, "FB tracking busy bits: 0x%08x\n",
     VAR_2->fb_tracking.busy_bits);

 FUNC_1(VAR_0, "FB tracking flip bits: 0x%08x\n",
     VAR_2->fb_tracking.flip_bits);

 return 0;
}
