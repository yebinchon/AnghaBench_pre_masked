
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct radeon_encoder_ext_tmds {int slave_addr; int i2c_bus; } ;
struct radeon_encoder {struct radeon_encoder_ext_tmds* enc_priv; } ;
struct radeon_device {int flags; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int,int) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;
 int FUNC_12 (int) ;

bool FUNC_13(struct drm_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder *VAR_6 = FUNC_11(VAR_3);
 uint16_t VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
 struct radeon_encoder_ext_tmds *VAR_17 = VAR_6->enc_priv;

 if (!VAR_17)
  return 0;

 if (VAR_5->flags & VAR_2) {
  VAR_7 = FUNC_8(VAR_4, VAR_1);
  VAR_10 = FUNC_3(VAR_7);
  if (VAR_7) {
   VAR_10 = FUNC_3(VAR_7);
   if (VAR_10 > 1) {
    VAR_8 = FUNC_3(VAR_7 + 3);
    VAR_11 = VAR_7 + 4;
    while (VAR_8 > 0) {
     VAR_12 = FUNC_1(VAR_11);
     VAR_11 += 2;
     switch (VAR_12 >> 13) {
     case 0:
      VAR_13 = (VAR_12 & 0x1fff) * 4;
      VAR_14 = FUNC_2(VAR_11);
      VAR_11 += 4;
      FUNC_6(VAR_13, VAR_14);
      break;
     case 2:
      VAR_13 = (VAR_12 & 0x1fff) * 4;
      VAR_15 = FUNC_2(VAR_11);
      VAR_11 += 4;
      VAR_16 = FUNC_2(VAR_11);
      VAR_11 += 4;
      VAR_14 = FUNC_4(VAR_13);
      VAR_14 = (VAR_14 & VAR_15) | VAR_16;
      FUNC_6(VAR_13, VAR_14);
      break;
     case 3:
      VAR_14 = FUNC_1(VAR_11);
      VAR_11 += 2;
      FUNC_12(VAR_14);
      break;
     case 4:
      VAR_14 = FUNC_1(VAR_11);
      VAR_11 += 2;
      FUNC_9(VAR_14);
      break;
     case 6:
      VAR_9 = VAR_12 & 0xff;
      VAR_9 >>= 1;
      VAR_11++;
      VAR_13 = FUNC_3(VAR_11);
      VAR_11++;
      VAR_14 = FUNC_3(VAR_11);
      VAR_11++;
      FUNC_10(VAR_17->i2c_bus,
            VAR_9,
            VAR_13, VAR_14);
      break;
     default:
      FUNC_0("Unknown id %d\n", VAR_12 >> 13);
      break;
     }
     VAR_8--;
    }
    return 1;
   }
  }
 } else {
  VAR_7 = FUNC_8(VAR_4, VAR_0);
  if (VAR_7) {
   VAR_11 = VAR_7 + 10;
   VAR_12 = FUNC_1(VAR_11);
   while (VAR_12 != 0xffff) {
    VAR_11 += 2;
    switch (VAR_12 >> 13) {
    case 0:
     VAR_13 = (VAR_12 & 0x1fff) * 4;
     VAR_14 = FUNC_2(VAR_11);
     FUNC_6(VAR_13, VAR_14);
     break;
    case 2:
     VAR_13 = (VAR_12 & 0x1fff) * 4;
     VAR_15 = FUNC_2(VAR_11);
     VAR_11 += 4;
     VAR_16 = FUNC_2(VAR_11);
     VAR_11 += 4;
     VAR_14 = FUNC_4(VAR_13);
     VAR_14 = (VAR_14 & VAR_15) | VAR_16;
     FUNC_6(VAR_13, VAR_14);
     break;
    case 4:
     VAR_14 = FUNC_1(VAR_11);
     VAR_11 += 2;
     FUNC_12(VAR_14);
     break;
    case 5:
     VAR_13 = VAR_12 & 0x1fff;
     VAR_15 = FUNC_2(VAR_11);
     VAR_11 += 4;
     VAR_16 = FUNC_2(VAR_11);
     VAR_11 += 4;
     VAR_14 = FUNC_5(VAR_13);
     VAR_14 = (VAR_14 & VAR_15) | VAR_16;
     FUNC_7(VAR_13, VAR_14);
     break;
    case 6:
     VAR_13 = VAR_12 & 0x1fff;
     VAR_14 = FUNC_3(VAR_11);
     VAR_11 += 1;
     FUNC_10(VAR_17->i2c_bus,
           VAR_17->slave_addr,
           VAR_13, VAR_14);
     break;
    default:
     FUNC_0("Unknown id %d\n", VAR_12 >> 13);
     break;
    }
    VAR_12 = FUNC_1(VAR_11);
   }
   return 1;
  }
 }
 return 0;
}
