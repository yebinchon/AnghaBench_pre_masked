
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct seq_file {struct drm_i915_private* private; } ;
struct TYPE_2__ {int * spr_latency; int * skl_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct seq_file*,int const*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->private;
 const u16 *VAR_3;

 if (FUNC_0(VAR_2) >= 9)
  VAR_3 = VAR_2->wm.skl_latency;
 else
  VAR_3 = VAR_2->wm.spr_latency;

 FUNC_1(VAR_0, VAR_3);

 return 0;
}
