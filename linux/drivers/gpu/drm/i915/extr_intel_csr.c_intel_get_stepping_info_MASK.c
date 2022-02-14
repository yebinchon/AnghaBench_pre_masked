
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stepping_info {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 unsigned int FUNC_0 (struct stepping_info*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 struct stepping_info* VAR_0 ;
 struct stepping_info* VAR_1 ;
 struct stepping_info const VAR_2 ;
 struct stepping_info* VAR_3 ;

__attribute__((used)) static const struct stepping_info *
FUNC_5(struct drm_i915_private *VAR_4)
{
 const struct stepping_info *VAR_5;
 unsigned int VAR_6;

 if (FUNC_3(VAR_4)) {
  VAR_6 = FUNC_0(VAR_1);
  VAR_5 = VAR_1;
 } else if (FUNC_4(VAR_4)) {
  VAR_6 = FUNC_0(VAR_3);
  VAR_5 = VAR_3;
 } else if (FUNC_2(VAR_4)) {
  VAR_6 = FUNC_0(VAR_0);
  VAR_5 = VAR_0;
 } else {
  VAR_6 = 0;
  VAR_5 = ((void*)0);
 }

 if (FUNC_1(VAR_4) < VAR_6)
  return VAR_5 + FUNC_1(VAR_4);

 return &VAR_2;
}
