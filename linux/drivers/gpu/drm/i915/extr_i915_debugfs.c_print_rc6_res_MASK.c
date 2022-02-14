
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (struct drm_i915_private*,int const) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0,
     const char *VAR_1,
     const i915_reg_t VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_0->private);

 FUNC_3(VAR_0, "%s %u (%llu us)\n",
     VAR_1, FUNC_0(VAR_2),
     FUNC_1(VAR_3, VAR_2));
}
