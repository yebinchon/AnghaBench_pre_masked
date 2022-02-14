
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct drm_i915_private* private; } ;
struct drm_i915_private {int ipc_enabled; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->private;

 FUNC_0(VAR_0, "Isochronous Priority Control: %s\n",
   FUNC_1(VAR_2->ipc_enabled));
 return 0;
}
