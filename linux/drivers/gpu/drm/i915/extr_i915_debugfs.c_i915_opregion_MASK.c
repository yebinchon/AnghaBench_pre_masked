
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct intel_opregion {scalar_t__ header; } ;
struct drm_device {int struct_mutex; } ;
struct drm_i915_private {struct intel_opregion opregion; struct drm_device drm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_1->private);
 struct drm_device *VAR_4 = &VAR_3->drm;
 struct intel_opregion *VAR_5 = &VAR_3->opregion;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_4->struct_mutex);
 if (VAR_6)
  goto out;

 if (VAR_5->header)
  FUNC_3(VAR_1, VAR_5->header, VAR_0);

 FUNC_1(&VAR_4->struct_mutex);

out:
 return 0;
}
