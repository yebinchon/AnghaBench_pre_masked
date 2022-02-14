
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_cfg_agc {int top; int cut_off_current; } ;
struct drxj_data {int standard; struct drxj_cfg_agc qam_rf_agc_cfg; struct drxj_cfg_agc qam_if_agc_cfg; struct drxj_cfg_agc vsb_rf_agc_cfg; struct drxj_cfg_agc vsb_if_agc_cfg; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; scalar_t__ my_common_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_common_attr {int tuner_rf_agc_pol; int tuner_if_agc_pol; } ;






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
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_44)
{
 struct i2c_device_addr *VAR_45 = ((void*)0);
 struct drx_common_attr *VAR_46 = ((void*)0);
 struct drxj_data *VAR_47 = ((void*)0);
 struct drxj_cfg_agc *VAR_48 = ((void*)0);
 struct drxj_cfg_agc *VAR_49 = ((void*)0);
 int VAR_50;
 u16 VAR_51 = 0;
 u16 VAR_52 = 0;
 u16 VAR_53 = 0;
 u16 VAR_54 = 0;
 u16 VAR_55 = 0;
 u16 VAR_56 = 0;
 u16 VAR_57 = 0;
 u16 VAR_58 = 0;
 u16 VAR_59 = 0;
 u16 VAR_60 = 0;
 u16 VAR_61 = 0;
 u16 VAR_62 = 0;
 u16 VAR_63 = 0;
 u16 VAR_64 = 0;
 u16 VAR_65 = 0;

 VAR_45 = VAR_44->my_i2c_dev_addr;
 VAR_46 = (struct drx_common_attr *) VAR_44->my_common_attr;
 VAR_47 = (struct drxj_data *) VAR_44->my_ext_attr;

 switch (VAR_47->standard) {
 case 131:
  VAR_54 = 1023;
  VAR_52 = (u16) (-9);
  VAR_53 = 1023;
  VAR_55 = (u16) (-9);
  VAR_56 = (u16) (-32768);
  VAR_58 = 0x032C;
  VAR_61 = 0xC;
  VAR_59 = 2047;
  VAR_62 = 0x0117;
  VAR_51 = 16383;
  VAR_63 = 0;
  VAR_50 = FUNC_1(VAR_45, VAR_28, 0x7fff, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_25, 0x0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_11, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_4, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_8, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_6, 1, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_42, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_35, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_39, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_37, 1, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_20, 1024, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_43, 22600, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_19, 13200, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_49 = &(VAR_47->vsb_if_agc_cfg);
  VAR_48 = &(VAR_47->vsb_rf_agc_cfg);
  break;

 case 130:
 case 128:
 case 129:
  VAR_51 = 5119;
  VAR_54 = 1023;
  VAR_52 = (u16) (-5);
  VAR_53 = 127;
  VAR_55 = (u16) (-3);
  VAR_56 = 0;
  VAR_58 = 0x0657;
  VAR_59 = 2047;
  VAR_61 = 0x7;
  VAR_62 = 0x0117;
  VAR_63 = 0;
  VAR_50 = FUNC_1(VAR_45, VAR_28, 0x7fff, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_25, 0x0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_11, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_4, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_8, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_6, 1, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_42, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_35, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_39, 0, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_50 = FUNC_1(VAR_45, VAR_37, 1, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_49 = &(VAR_47->qam_if_agc_cfg);
  VAR_48 = &(VAR_47->qam_rf_agc_cfg);
  VAR_50 = FUNC_1(VAR_45, VAR_19, VAR_49->top, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }

  VAR_50 = FUNC_0(VAR_45, VAR_31, &VAR_57, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  VAR_57 &= 0xf000;
  VAR_50 = FUNC_1(VAR_45, VAR_31, VAR_57, 0);
  if (VAR_50 != 0) {
   FUNC_2("error %d\n", VAR_50);
   goto rw_error;
  }
  break;

 default:
  return -VAR_0;
 }


 VAR_50 = FUNC_1(VAR_45, VAR_18, VAR_49->top, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_20, VAR_49->top, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_17, VAR_51, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_14, VAR_59, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_15, 0, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_16, 0, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_32, 0, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_33, 0, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_34, 32767, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_9, VAR_54, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_40, VAR_53, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_24, VAR_56, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_13, 50, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_21, 500, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_36, 500, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_26, 20, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_29, VAR_62, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_27, VAR_58, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_30, 0, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_10, 8, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_5, 500, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_7, VAR_52, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_41, 8, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_38, VAR_55, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_12, 50, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_3, VAR_63, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }

 VAR_64 = 0x800 + VAR_48->cut_off_current;
 if (VAR_46->tuner_rf_agc_pol == 1)
  VAR_64 = 0x87ff - VAR_64;

 VAR_65 = 0x800;
 if (VAR_46->tuner_if_agc_pol == 1)
  VAR_64 = 0x87ff - VAR_64;

 VAR_50 = FUNC_1(VAR_45, VAR_2, VAR_64, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_50 = FUNC_1(VAR_45, VAR_1, VAR_65, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }


 VAR_50 = FUNC_0(VAR_45, VAR_31, &VAR_60, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }
 VAR_60 &= ~VAR_23;
 VAR_60 |= (VAR_61 << VAR_22);
 VAR_50 = FUNC_1(VAR_45, VAR_31, VAR_60, 0);
 if (VAR_50 != 0) {
  FUNC_2("error %d\n", VAR_50);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_50;
}
