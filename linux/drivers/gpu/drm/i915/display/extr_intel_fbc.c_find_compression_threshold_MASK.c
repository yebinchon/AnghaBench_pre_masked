
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_node {int dummy; } ;
struct drm_i915_private {int dsm; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct drm_i915_private*,struct drm_mm_node*,int,int,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_1,
          struct drm_mm_node *VAR_2,
          int VAR_3,
          int VAR_4)
{
 int VAR_5 = 1;
 int VAR_6;
 u64 VAR_7;





 if (FUNC_1(VAR_1) || FUNC_2(VAR_1))
  VAR_7 = FUNC_4(&VAR_1->dsm) - 8 * 1024 * 1024;
 else
  VAR_7 = VAR_0;
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3 <<= 1,
         4096, 0, VAR_7);
 if (VAR_6 == 0)
  return VAR_5;

again:

 if (VAR_5 > 4 ||
     (VAR_4 == 2 && VAR_5 == 2))
  return 0;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3 >>= 1,
         4096, 0, VAR_7);
 if (VAR_6 && FUNC_0(VAR_1) <= 4) {
  return 0;
 } else if (VAR_6) {
  VAR_5 <<= 1;
  goto again;
 } else {
  return VAR_5;
 }
}
