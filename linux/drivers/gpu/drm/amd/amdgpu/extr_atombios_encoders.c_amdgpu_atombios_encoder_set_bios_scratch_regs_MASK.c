
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct amdgpu_encoder {int devices; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector {int devices; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct amdgpu_connector* FUNC_3 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

void
FUNC_5(struct drm_connector *VAR_41,
           struct drm_encoder *VAR_42,
           bool VAR_43)
{
 struct drm_device *VAR_44 = VAR_41->dev;
 struct amdgpu_device *VAR_45 = VAR_44->dev_private;
 struct amdgpu_connector *VAR_46 =
     FUNC_3(VAR_41);
 struct amdgpu_encoder *VAR_47 = FUNC_4(VAR_42);
 uint32_t VAR_48, VAR_49, VAR_50;

 VAR_48 = FUNC_1(VAR_38);
 VAR_49 = FUNC_1(VAR_39);
 VAR_50 = FUNC_1(VAR_40);

 if ((VAR_47->devices & VAR_8) &&
     (VAR_46->devices & VAR_8)) {
  if (VAR_43) {
   FUNC_0("LCD1 connected\n");
   VAR_48 |= VAR_19;
   VAR_49 |= VAR_28;
   VAR_50 |= VAR_37;
  } else {
   FUNC_0("LCD1 disconnected\n");
   VAR_48 &= ~VAR_19;
   VAR_49 &= ~VAR_28;
   VAR_50 &= ~VAR_37;
  }
 }
 if ((VAR_47->devices & VAR_0) &&
     (VAR_46->devices & VAR_0)) {
  if (VAR_43) {
   FUNC_0("CRT1 connected\n");
   VAR_48 |= VAR_9;
   VAR_49 |= VAR_20;
   VAR_50 |= VAR_29;
  } else {
   FUNC_0("CRT1 disconnected\n");
   VAR_48 &= ~VAR_10;
   VAR_49 &= ~VAR_20;
   VAR_50 &= ~VAR_29;
  }
 }
 if ((VAR_47->devices & VAR_1) &&
     (VAR_46->devices & VAR_1)) {
  if (VAR_43) {
   FUNC_0("CRT2 connected\n");
   VAR_48 |= VAR_11;
   VAR_49 |= VAR_21;
   VAR_50 |= VAR_30;
  } else {
   FUNC_0("CRT2 disconnected\n");
   VAR_48 &= ~VAR_12;
   VAR_49 &= ~VAR_21;
   VAR_50 &= ~VAR_30;
  }
 }
 if ((VAR_47->devices & VAR_2) &&
     (VAR_46->devices & VAR_2)) {
  if (VAR_43) {
   FUNC_0("DFP1 connected\n");
   VAR_48 |= VAR_13;
   VAR_49 |= VAR_22;
   VAR_50 |= VAR_31;
  } else {
   FUNC_0("DFP1 disconnected\n");
   VAR_48 &= ~VAR_13;
   VAR_49 &= ~VAR_22;
   VAR_50 &= ~VAR_31;
  }
 }
 if ((VAR_47->devices & VAR_3) &&
     (VAR_46->devices & VAR_3)) {
  if (VAR_43) {
   FUNC_0("DFP2 connected\n");
   VAR_48 |= VAR_14;
   VAR_49 |= VAR_23;
   VAR_50 |= VAR_32;
  } else {
   FUNC_0("DFP2 disconnected\n");
   VAR_48 &= ~VAR_14;
   VAR_49 &= ~VAR_23;
   VAR_50 &= ~VAR_32;
  }
 }
 if ((VAR_47->devices & VAR_4) &&
     (VAR_46->devices & VAR_4)) {
  if (VAR_43) {
   FUNC_0("DFP3 connected\n");
   VAR_48 |= VAR_15;
   VAR_49 |= VAR_24;
   VAR_50 |= VAR_33;
  } else {
   FUNC_0("DFP3 disconnected\n");
   VAR_48 &= ~VAR_15;
   VAR_49 &= ~VAR_24;
   VAR_50 &= ~VAR_33;
  }
 }
 if ((VAR_47->devices & VAR_5) &&
     (VAR_46->devices & VAR_5)) {
  if (VAR_43) {
   FUNC_0("DFP4 connected\n");
   VAR_48 |= VAR_16;
   VAR_49 |= VAR_25;
   VAR_50 |= VAR_34;
  } else {
   FUNC_0("DFP4 disconnected\n");
   VAR_48 &= ~VAR_16;
   VAR_49 &= ~VAR_25;
   VAR_50 &= ~VAR_34;
  }
 }
 if ((VAR_47->devices & VAR_6) &&
     (VAR_46->devices & VAR_6)) {
  if (VAR_43) {
   FUNC_0("DFP5 connected\n");
   VAR_48 |= VAR_17;
   VAR_49 |= VAR_26;
   VAR_50 |= VAR_35;
  } else {
   FUNC_0("DFP5 disconnected\n");
   VAR_48 &= ~VAR_17;
   VAR_49 &= ~VAR_26;
   VAR_50 &= ~VAR_35;
  }
 }
 if ((VAR_47->devices & VAR_7) &&
     (VAR_46->devices & VAR_7)) {
  if (VAR_43) {
   FUNC_0("DFP6 connected\n");
   VAR_48 |= VAR_18;
   VAR_49 |= VAR_27;
   VAR_50 |= VAR_36;
  } else {
   FUNC_0("DFP6 disconnected\n");
   VAR_48 &= ~VAR_18;
   VAR_49 &= ~VAR_27;
   VAR_50 &= ~VAR_36;
  }
 }

 FUNC_2(VAR_38, VAR_48);
 FUNC_2(VAR_39, VAR_49);
 FUNC_2(VAR_40, VAR_50);
}
