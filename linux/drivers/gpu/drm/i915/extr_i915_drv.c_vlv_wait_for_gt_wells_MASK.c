
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_2,
      bool VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_0 | VAR_1;
 VAR_5 = VAR_3 ? VAR_4 : 0;
 if (FUNC_2(VAR_2, VAR_4, VAR_5))
  FUNC_0("timeout waiting for GT wells to go %s\n",
     FUNC_1(VAR_3));
}
