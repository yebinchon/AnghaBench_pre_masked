
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int devices; } ;
struct radeon_device {scalar_t__ family; } ;
struct radeon_connector {int devices; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_0 (char*) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_4 (struct drm_encoder*) ;

void
FUNC_5(struct drm_connector *VAR_53,
           struct drm_encoder *VAR_54,
           bool VAR_55)
{
 struct drm_device *VAR_56 = VAR_53->dev;
 struct radeon_device *VAR_57 = VAR_56->dev_private;
 struct radeon_connector *VAR_58 =
     FUNC_3(VAR_53);
 struct radeon_encoder *VAR_59 = FUNC_4(VAR_54);
 uint32_t VAR_60, VAR_61, VAR_62;

 if (VAR_57->family >= VAR_46) {
  VAR_60 = FUNC_1(VAR_47);
  VAR_61 = FUNC_1(VAR_48);
  VAR_62 = FUNC_1(VAR_49);
 } else {
  VAR_60 = FUNC_1(VAR_50);
  VAR_61 = FUNC_1(VAR_51);
  VAR_62 = FUNC_1(VAR_52);
 }

 if ((VAR_59->devices & VAR_10) &&
     (VAR_58->devices & VAR_10)) {
  if (VAR_55) {
   FUNC_0("TV1 connected\n");
   VAR_61 |= VAR_34;
   VAR_62 |= VAR_45;
  } else {
   FUNC_0("TV1 disconnected\n");
   VAR_60 &= ~VAR_23;
   VAR_61 &= ~VAR_34;
   VAR_62 &= ~VAR_45;
  }
 }
 if ((VAR_59->devices & VAR_2) &&
     (VAR_58->devices & VAR_2)) {
  if (VAR_55) {
   FUNC_0("CV connected\n");
   VAR_61 |= VAR_26;
   VAR_62 |= VAR_37;
  } else {
   FUNC_0("CV disconnected\n");
   VAR_60 &= ~VAR_15;
   VAR_61 &= ~VAR_26;
   VAR_62 &= ~VAR_37;
  }
 }
 if ((VAR_59->devices & VAR_9) &&
     (VAR_58->devices & VAR_9)) {
  if (VAR_55) {
   FUNC_0("LCD1 connected\n");
   VAR_60 |= VAR_22;
   VAR_61 |= VAR_33;
   VAR_62 |= VAR_44;
  } else {
   FUNC_0("LCD1 disconnected\n");
   VAR_60 &= ~VAR_22;
   VAR_61 &= ~VAR_33;
   VAR_62 &= ~VAR_44;
  }
 }
 if ((VAR_59->devices & VAR_0) &&
     (VAR_58->devices & VAR_0)) {
  if (VAR_55) {
   FUNC_0("CRT1 connected\n");
   VAR_60 |= VAR_11;
   VAR_61 |= VAR_24;
   VAR_62 |= VAR_35;
  } else {
   FUNC_0("CRT1 disconnected\n");
   VAR_60 &= ~VAR_12;
   VAR_61 &= ~VAR_24;
   VAR_62 &= ~VAR_35;
  }
 }
 if ((VAR_59->devices & VAR_1) &&
     (VAR_58->devices & VAR_1)) {
  if (VAR_55) {
   FUNC_0("CRT2 connected\n");
   VAR_60 |= VAR_13;
   VAR_61 |= VAR_25;
   VAR_62 |= VAR_36;
  } else {
   FUNC_0("CRT2 disconnected\n");
   VAR_60 &= ~VAR_14;
   VAR_61 &= ~VAR_25;
   VAR_62 &= ~VAR_36;
  }
 }
 if ((VAR_59->devices & VAR_3) &&
     (VAR_58->devices & VAR_3)) {
  if (VAR_55) {
   FUNC_0("DFP1 connected\n");
   VAR_60 |= VAR_16;
   VAR_61 |= VAR_27;
   VAR_62 |= VAR_38;
  } else {
   FUNC_0("DFP1 disconnected\n");
   VAR_60 &= ~VAR_16;
   VAR_61 &= ~VAR_27;
   VAR_62 &= ~VAR_38;
  }
 }
 if ((VAR_59->devices & VAR_4) &&
     (VAR_58->devices & VAR_4)) {
  if (VAR_55) {
   FUNC_0("DFP2 connected\n");
   VAR_60 |= VAR_17;
   VAR_61 |= VAR_28;
   VAR_62 |= VAR_39;
  } else {
   FUNC_0("DFP2 disconnected\n");
   VAR_60 &= ~VAR_17;
   VAR_61 &= ~VAR_28;
   VAR_62 &= ~VAR_39;
  }
 }
 if ((VAR_59->devices & VAR_5) &&
     (VAR_58->devices & VAR_5)) {
  if (VAR_55) {
   FUNC_0("DFP3 connected\n");
   VAR_60 |= VAR_18;
   VAR_61 |= VAR_29;
   VAR_62 |= VAR_40;
  } else {
   FUNC_0("DFP3 disconnected\n");
   VAR_60 &= ~VAR_18;
   VAR_61 &= ~VAR_29;
   VAR_62 &= ~VAR_40;
  }
 }
 if ((VAR_59->devices & VAR_6) &&
     (VAR_58->devices & VAR_6)) {
  if (VAR_55) {
   FUNC_0("DFP4 connected\n");
   VAR_60 |= VAR_19;
   VAR_61 |= VAR_30;
   VAR_62 |= VAR_41;
  } else {
   FUNC_0("DFP4 disconnected\n");
   VAR_60 &= ~VAR_19;
   VAR_61 &= ~VAR_30;
   VAR_62 &= ~VAR_41;
  }
 }
 if ((VAR_59->devices & VAR_7) &&
     (VAR_58->devices & VAR_7)) {
  if (VAR_55) {
   FUNC_0("DFP5 connected\n");
   VAR_60 |= VAR_20;
   VAR_61 |= VAR_31;
   VAR_62 |= VAR_42;
  } else {
   FUNC_0("DFP5 disconnected\n");
   VAR_60 &= ~VAR_20;
   VAR_61 &= ~VAR_31;
   VAR_62 &= ~VAR_42;
  }
 }
 if ((VAR_59->devices & VAR_8) &&
     (VAR_58->devices & VAR_8)) {
  if (VAR_55) {
   FUNC_0("DFP6 connected\n");
   VAR_60 |= VAR_21;
   VAR_61 |= VAR_32;
   VAR_62 |= VAR_43;
  } else {
   FUNC_0("DFP6 disconnected\n");
   VAR_60 &= ~VAR_21;
   VAR_61 &= ~VAR_32;
   VAR_62 &= ~VAR_43;
  }
 }

 if (VAR_57->family >= VAR_46) {
  FUNC_2(VAR_47, VAR_60);
  FUNC_2(VAR_48, VAR_61);
  FUNC_2(VAR_49, VAR_62);
 } else {
  FUNC_2(VAR_50, VAR_60);
  FUNC_2(VAR_51, VAR_61);
  FUNC_2(VAR_52, VAR_62);
 }
}
