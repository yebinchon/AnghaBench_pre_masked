
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct intel_rps {unsigned int min_freq; unsigned int max_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int runtime_pm; TYPE_1__ gt_pm; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int*,int *) ;
 int FUNC_8 (struct seq_file*,char*,int ,int,int) ;
 int FUNC_9 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_10(struct seq_file *VAR_3, void *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_3->private);
 struct intel_rps *VAR_6 = &VAR_5->gt_pm.rps;
 unsigned int VAR_7, VAR_8;
 intel_wakeref_t VAR_9;
 int VAR_10, VAR_11;

 if (!FUNC_0(VAR_5))
  return -VAR_0;

 VAR_8 = VAR_6->min_freq;
 VAR_7 = VAR_6->max_freq;
 if (FUNC_2(VAR_5) || FUNC_1(VAR_5) >= 10) {

  VAR_8 /= VAR_2;
  VAR_7 /= VAR_2;
 }

 FUNC_9(VAR_3, "GPU freq (MHz)\tEffective CPU freq (MHz)\tEffective Ring freq (MHz)\n");

 VAR_9 = FUNC_4(&VAR_5->runtime_pm);
 for (VAR_10 = VAR_8; VAR_10 <= VAR_7; VAR_10++) {
  VAR_11 = VAR_10;
  FUNC_7(VAR_5,
           VAR_1,
           &VAR_11, ((void*)0));
  FUNC_8(VAR_3, "%d\t\t%d\t\t\t\t%d\n",
      FUNC_3(VAR_5, (VAR_10 *
           (FUNC_2(VAR_5) ||
            FUNC_1(VAR_5) >= 10 ?
            VAR_2 : 1))),
      ((VAR_11 >> 0) & 0xff) * 100,
      ((VAR_11 >> 8) & 0xff) * 100);
 }
 FUNC_5(&VAR_5->runtime_pm, VAR_9);

 return 0;
}
