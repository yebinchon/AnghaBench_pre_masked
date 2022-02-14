
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_i915_private*,int ) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_3,
           enum transcoder VAR_4)
{
 if (VAR_4 == VAR_2)
  return 0;

 if (!FUNC_2(VAR_3, VAR_1))
  return 0;

 return FUNC_1(VAR_0) &
  FUNC_0(VAR_4);
}
