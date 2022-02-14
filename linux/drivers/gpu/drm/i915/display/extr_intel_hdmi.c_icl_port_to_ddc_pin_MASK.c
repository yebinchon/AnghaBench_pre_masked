
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u8 FUNC_6(struct drm_i915_private *VAR_3, enum port VAR_4)
{
 enum phy VAR_5 = FUNC_3(VAR_3, VAR_4);

 if (FUNC_1(VAR_3, VAR_5))
  return VAR_0 + VAR_4;
 else if (FUNC_2(VAR_3, VAR_5))
  return VAR_2 + FUNC_4(VAR_3, VAR_4);

 FUNC_0(1, "Unknown port:%c\n", FUNC_5(VAR_4));
 return VAR_1;
}
