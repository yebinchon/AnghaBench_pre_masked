
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct seq_file {struct drm_i915_private* private; } ;
struct drm_device {int dummy; } ;
struct drm_i915_private {struct drm_device drm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct seq_file*,char*,int,unsigned int const,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct seq_file *VAR_0, const u16 VAR_1[8])
{
 struct drm_i915_private *VAR_2 = VAR_0->private;
 struct drm_device *VAR_3 = &VAR_2->drm;
 int VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2))
  VAR_5 = 3;
 else if (FUNC_3(VAR_2))
  VAR_5 = 1;
 else if (FUNC_2(VAR_2))
  VAR_5 = 3;
 else
  VAR_5 = FUNC_6(VAR_2) + 1;

 FUNC_4(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  unsigned int VAR_6 = VAR_1[VAR_4];





  if (FUNC_0(VAR_2) >= 9 ||
      FUNC_3(VAR_2) ||
      FUNC_1(VAR_2) ||
      FUNC_2(VAR_2))
   VAR_6 *= 10;
  else if (VAR_4 > 0)
   VAR_6 *= 5;

  FUNC_7(VAR_0, "WM%d %u (%u.%u usec)\n",
      VAR_4, VAR_1[VAR_4], VAR_6 / 10, VAR_6 % 10);
 }

 FUNC_5(VAR_3);
}
