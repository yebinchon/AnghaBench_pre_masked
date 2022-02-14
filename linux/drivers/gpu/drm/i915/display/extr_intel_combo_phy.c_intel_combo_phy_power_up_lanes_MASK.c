
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;

void FUNC_5(struct drm_i915_private *VAR_10,
        enum phy VAR_11, bool VAR_12,
        int VAR_13, bool VAR_14)
{
 u8 VAR_15;
 u32 VAR_16;

 if (VAR_12) {
  FUNC_4(VAR_14);

  switch (VAR_13) {
  case 1:
   VAR_15 = VAR_4;
   break;
  case 2:
   VAR_15 = VAR_3;
   break;
  case 3:
   VAR_15 = VAR_2;
   break;
  default:
   FUNC_3(VAR_13);

  case 4:
   VAR_15 = VAR_9;
   break;
  }
 } else {
  switch (VAR_13) {
  case 1:
   VAR_15 = VAR_14 ? VAR_1 :
          VAR_6;
   break;
  case 2:
   VAR_15 = VAR_14 ? VAR_0 :
          VAR_5;
   break;
  default:
   FUNC_3(VAR_13);

  case 4:
   VAR_15 = VAR_9;
   break;
  }
 }

 VAR_16 = FUNC_0(FUNC_2(VAR_11));
 VAR_16 &= ~VAR_7;
 VAR_16 |= VAR_15 << VAR_8;
 FUNC_1(FUNC_2(VAR_11), VAR_16);
}
