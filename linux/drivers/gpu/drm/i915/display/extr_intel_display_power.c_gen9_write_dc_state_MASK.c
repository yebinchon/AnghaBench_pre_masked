
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_1,
    u32 VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 u32 VAR_5;

 FUNC_3(VAR_0, VAR_2);






 do {
  VAR_5 = FUNC_2(VAR_0);

  if (VAR_5 != VAR_2) {
   FUNC_3(VAR_0, VAR_2);
   VAR_3++;
   VAR_4 = 0;
  } else if (VAR_4++ > 5) {
   break;
  }

 } while (VAR_3 < 100);

 if (VAR_5 != VAR_2)
  FUNC_1("Writing dc state to 0x%x failed, now 0x%x\n",
     VAR_2, VAR_5);


 if (VAR_3 > 1)
  FUNC_0("Rewrote dc state to 0x%x %d times\n",
         VAR_2, VAR_3);
}
