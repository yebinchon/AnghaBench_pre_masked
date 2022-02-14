
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum tc_port { ____Placeholder_tc_port } tc_port ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static inline
u32 FUNC_5(struct drm_i915_private *VAR_0,
         enum phy VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1)) {
  return FUNC_0(VAR_1);
 } else if (FUNC_3(VAR_0, VAR_1)) {
  enum tc_port VAR_2 = FUNC_4(VAR_0,
       (enum port)VAR_1);

  return FUNC_1(VAR_2);
 }

 return 0;
}
