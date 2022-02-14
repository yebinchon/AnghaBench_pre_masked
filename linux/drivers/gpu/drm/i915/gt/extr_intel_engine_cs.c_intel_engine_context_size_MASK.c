
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_10 ;



 int FUNC_8 (int,scalar_t__) ;

u32 FUNC_9(struct drm_i915_private *VAR_11, u8 VAR_12)
{
 u32 VAR_13;

 FUNC_0(VAR_9 != VAR_10);

 switch (VAR_12) {
 case 130:
  switch (FUNC_5(VAR_11)) {
  default:
   FUNC_7(FUNC_5(VAR_11));
   return VAR_1;
  case 12:
  case 11:
   return VAR_3;
  case 10:
   return VAR_2;
  case 9:
   return VAR_7;
  case 8:
   return VAR_6;
  case 7:
   if (FUNC_6(VAR_11))
    return VAR_8;

   VAR_13 = FUNC_4(VAR_4);
   return FUNC_8(FUNC_3(VAR_13) * 64,
     VAR_10);
  case 6:
   VAR_13 = FUNC_4(VAR_0);
   return FUNC_8(FUNC_2(VAR_13) * 64,
     VAR_10);
  case 5:
  case 4:
   VAR_13 = FUNC_4(VAR_0) + 1;
   FUNC_1("gen%d CXT_SIZE = %d bytes [0x%08x]\n",
      FUNC_5(VAR_11),
      VAR_13 * 64,
      VAR_13 - 1);
   return FUNC_8(VAR_13 * 64, VAR_10);
  case 3:
  case 2:

  case 1:
   return 0;
  }
  break;
 default:
  FUNC_7(VAR_12);

 case 129:
 case 128:
 case 131:
  if (FUNC_5(VAR_11) < 8)
   return 0;
  return VAR_5;
 }
}
