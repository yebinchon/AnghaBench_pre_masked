
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct drm_i915_private {int edram_size_mb; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,char*,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->private);
 const bool VAR_3 = FUNC_1(VAR_2) > 8;

 FUNC_3(VAR_0, "LLC: %s\n", FUNC_4(FUNC_0(VAR_2)));
 FUNC_3(VAR_0, "%s: %uMB\n", VAR_3 ? "eDRAM" : "eLLC",
     VAR_2->edram_size_mb);

 return 0;
}
