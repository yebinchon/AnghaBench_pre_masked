
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if ((VAR_4 & VAR_1) != VAR_2)
  FUNC_0("Wrong MCH_SSKPD value: 0x%08x This can cause underruns.\n",
         VAR_4);
}
