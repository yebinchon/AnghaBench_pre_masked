
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,int,int) ;
 unsigned int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct drm_i915_private *VAR_1,
     int VAR_2)
{
 if (FUNC_0(VAR_1, 11))





  return FUNC_2(FUNC_1(VAR_1, VAR_2, 0),
       FUNC_1(VAR_1, VAR_2, 1),
       FUNC_1(VAR_1, VAR_2, 2));
 else
  return VAR_0;
}
