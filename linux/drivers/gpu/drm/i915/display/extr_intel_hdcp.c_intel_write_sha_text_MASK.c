
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_4, u32 VAR_5)
{
 FUNC_1(VAR_3, VAR_5);
 if (FUNC_2(VAR_4, VAR_1, VAR_2, 1)) {
  FUNC_0("Timed out waiting for SHA1 ready\n");
  return -VAR_0;
 }
 return 0;
}
