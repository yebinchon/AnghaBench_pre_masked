
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int dummy; } ;
struct intel_gt {int dummy; } ;
struct i915_vma {int dummy; } ;


 int VAR_0 ;
 struct intel_timeline* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct intel_timeline*,struct intel_gt*,struct i915_vma*) ;
 int FUNC_2 (struct intel_timeline*) ;
 struct intel_timeline* FUNC_3 (int,int ) ;

struct intel_timeline *
FUNC_4(struct intel_gt *VAR_2, struct i915_vma *VAR_3)
{
 struct intel_timeline *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
