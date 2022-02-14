
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_4, uint16_t VAR_5)
{
 struct radeon_device *VAR_6 = VAR_4->dev_private;

 if (VAR_5) {
  while (FUNC_0(VAR_5)) {
   uint16_t VAR_7 = ((FUNC_0(VAR_5) & 0xe000) >> 13);
   uint32_t VAR_8 = (FUNC_0(VAR_5) & 0x1fff);
   uint32_t VAR_9, VAR_10, VAR_11;
   uint32_t VAR_12;

   VAR_5 += 2;
   switch (VAR_7) {
   case 0:
    VAR_9 = FUNC_1(VAR_5);
    VAR_5 += 4;
    FUNC_4(VAR_8, VAR_9);
    break;
   case 1:
    VAR_9 = FUNC_1(VAR_5);
    VAR_5 += 4;
    FUNC_4(VAR_8, VAR_9);
    break;
   case 2:
    VAR_10 = FUNC_1(VAR_5);
    VAR_5 += 4;
    VAR_11 = FUNC_1(VAR_5);
    VAR_5 += 4;
    VAR_12 = FUNC_2(VAR_8);
    VAR_12 &= VAR_10;
    VAR_12 |= VAR_11;
    FUNC_4(VAR_8, VAR_12);
    break;
   case 3:
    VAR_10 = FUNC_1(VAR_5);
    VAR_5 += 4;
    VAR_11 = FUNC_1(VAR_5);
    VAR_5 += 4;
    VAR_12 = FUNC_2(VAR_8);
    VAR_12 &= VAR_10;
    VAR_12 |= VAR_11;
    FUNC_4(VAR_8, VAR_12);
    break;
   case 4:
    VAR_9 = FUNC_0(VAR_5);
    VAR_5 += 2;
    FUNC_5(VAR_9);
    break;
   case 5:
    VAR_9 = FUNC_0(VAR_5);
    VAR_5 += 2;
    switch (VAR_8) {
    case 8:
     while (VAR_9--) {
      if (!
          (FUNC_3
           (VAR_0) &
           VAR_1))
       break;
     }
     break;
    case 9:
     while (VAR_9--) {
      if ((FUNC_2(VAR_3) &
           VAR_2))
       break;
     }
     break;
    default:
     break;
    }
    break;
   default:
    break;
   }
  }
 }
}
