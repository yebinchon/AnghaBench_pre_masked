
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mdp4_kms {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct TYPE_2__ {int bpc; } ;
struct drm_connector {TYPE_1__ display_info; } ;


 int FUNC_0 (int ,char*,int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 struct drm_connector* FUNC_10 (struct drm_encoder*) ;
 struct mdp4_kms* FUNC_11 (struct drm_encoder*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct mdp4_kms*,int ,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct drm_encoder *VAR_20)
{
 struct drm_device *VAR_21 = VAR_20->dev;
 struct drm_connector *VAR_22 = FUNC_10(VAR_20);
 struct mdp4_kms *VAR_23 = FUNC_11(VAR_20);
 uint32_t VAR_24 = 0, VAR_25 = 0;
 int VAR_26, VAR_27, VAR_28;

 if (!VAR_22)
  return;

 VAR_26 = 3 * VAR_22->display_info.bpc;

 if (!VAR_26)
  VAR_26 = 18;


 VAR_27 = 1;
 VAR_28 = 0;

 switch (VAR_26) {
 case 24:
  FUNC_13(VAR_23, FUNC_8(0),
    FUNC_1(0x08) |
    FUNC_2(0x05) |
    FUNC_3(0x04) |
    FUNC_4(0x03));
  FUNC_13(VAR_23, FUNC_9(0),
    FUNC_5(0x02) |
    FUNC_6(0x01) |
    FUNC_7(0x00));
  FUNC_13(VAR_23, FUNC_8(1),
    FUNC_1(0x11) |
    FUNC_2(0x10) |
    FUNC_3(0x0d) |
    FUNC_4(0x0c));
  FUNC_13(VAR_23, FUNC_9(1),
    FUNC_5(0x0b) |
    FUNC_6(0x0a) |
    FUNC_7(0x09));
  FUNC_13(VAR_23, FUNC_8(2),
    FUNC_1(0x1a) |
    FUNC_2(0x19) |
    FUNC_3(0x18) |
    FUNC_4(0x15));
  FUNC_13(VAR_23, FUNC_9(2),
    FUNC_5(0x14) |
    FUNC_6(0x13) |
    FUNC_7(0x12));
  FUNC_13(VAR_23, FUNC_8(3),
    FUNC_1(0x1b) |
    FUNC_2(0x17) |
    FUNC_3(0x16) |
    FUNC_4(0x0f));
  FUNC_13(VAR_23, FUNC_9(3),
    FUNC_5(0x0e) |
    FUNC_6(0x07) |
    FUNC_7(0x06));
  if (VAR_27 == 2) {
   VAR_24 |= VAR_9 |
     VAR_8 |
     VAR_7 |
     VAR_6 |
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1;
  } else {
   VAR_24 |= VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1;
  }
  break;

 case 18:
  FUNC_13(VAR_23, FUNC_8(0),
    FUNC_1(0x0a) |
    FUNC_2(0x07) |
    FUNC_3(0x06) |
    FUNC_4(0x05));
  FUNC_13(VAR_23, FUNC_9(0),
    FUNC_5(0x04) |
    FUNC_6(0x03) |
    FUNC_7(0x02));
  FUNC_13(VAR_23, FUNC_8(1),
    FUNC_1(0x13) |
    FUNC_2(0x12) |
    FUNC_3(0x0f) |
    FUNC_4(0x0e));
  FUNC_13(VAR_23, FUNC_9(1),
    FUNC_5(0x0d) |
    FUNC_6(0x0c) |
    FUNC_7(0x0b));
  FUNC_13(VAR_23, FUNC_8(2),
    FUNC_1(0x1a) |
    FUNC_2(0x19) |
    FUNC_3(0x18) |
    FUNC_4(0x17));
  FUNC_13(VAR_23, FUNC_9(2),
    FUNC_5(0x16) |
    FUNC_6(0x15) |
    FUNC_7(0x14));
  if (VAR_27 == 2) {
   VAR_24 |= VAR_8 |
     VAR_7 |
     VAR_6 |
     VAR_3 |
     VAR_2 |
     VAR_1;
  } else {
   VAR_24 |= VAR_3 |
     VAR_2 |
     VAR_1;
  }
  VAR_24 |= VAR_13;
  break;

 default:
  FUNC_0(VAR_21->dev, "unknown bpp: %d\n", VAR_26);
  return;
 }

 switch (VAR_27) {
 case 1:
  VAR_25 = VAR_14;
  VAR_24 |= VAR_0 |
    VAR_12;
  break;
 case 2:
  VAR_25 = VAR_14 |
    VAR_15;
  VAR_24 |= VAR_5 |
    VAR_0;
  break;
 default:
  FUNC_0(VAR_21->dev, "unknown # of channels: %d\n", VAR_27);
  return;
 }

 if (VAR_28)
  VAR_24 |= VAR_10;

 VAR_24 |= VAR_11;

 FUNC_13(VAR_23, VAR_18, VAR_25);
 FUNC_13(VAR_23, VAR_17, VAR_24);
 FUNC_13(VAR_23, VAR_19, 0x30);

 FUNC_12();
 FUNC_14(1);
 VAR_25 |= VAR_16;
 FUNC_13(VAR_23, VAR_18, VAR_25);
}
