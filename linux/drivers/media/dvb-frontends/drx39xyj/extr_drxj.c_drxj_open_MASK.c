
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxu_code_info {int * mc_file; } ;
struct drxj_data {int aud_data; int standard; } ;
struct drx_demod_instance {TYPE_1__* my_common_attr; int * my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_common_attr {int is_opened; int verify_microcode; int scan_desired_lock; int scan_demod_lock_timeout; int * microcode_file; int mpeg_cfg; } ;
struct drx_cfg_mpeg_output {int enable_mpeg_output; } ;
typedef enum drx_power_mode { ____Placeholder_drx_power_mode } drx_power_mode ;
typedef int cfg_mpeg_output ;
struct TYPE_2__ {int is_opened; int current_power_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (struct drx_demod_instance*,int*) ;
 int FUNC_2 (struct drx_demod_instance*,struct drx_cfg_mpeg_output*) ;
 int FUNC_3 (struct drx_demod_instance*,int *) ;
 int FUNC_4 (struct drx_demod_instance*,struct drxu_code_info*,int ) ;
 int FUNC_5 (struct i2c_device_addr*,int ,int,int ) ;
 int VAR_23 ;
 int FUNC_6 (struct drxj_data*) ;
 int FUNC_7 (struct drx_demod_instance*,int) ;
 int FUNC_8 (struct drx_demod_instance*) ;
 int FUNC_9 (struct drx_demod_instance*) ;
 int FUNC_10 (struct drx_cfg_mpeg_output*,int *,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct drx_demod_instance*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct drx_demod_instance*,int) ;
 int FUNC_15 (struct drx_demod_instance*,int) ;
 int FUNC_16 (struct drx_demod_instance*) ;

__attribute__((used)) static int FUNC_17(struct drx_demod_instance *VAR_24)
{
 struct i2c_device_addr *VAR_25 = ((void*)0);
 struct drxj_data *VAR_26 = ((void*)0);
 struct drx_common_attr *VAR_27 = ((void*)0);
 u32 VAR_28 = 0;
 struct drxu_code_info VAR_29;
 struct drx_cfg_mpeg_output VAR_30;
 int VAR_31;
 enum drx_power_mode VAR_32 = VAR_5;

 if ((VAR_24 == ((void*)0)) ||
     (VAR_24->my_common_attr == ((void*)0)) ||
     (VAR_24->my_ext_attr == ((void*)0)) ||
     (VAR_24->my_i2c_dev_addr == ((void*)0)) ||
     (VAR_24->my_common_attr->is_opened)) {
  return -VAR_7;
 }


 if (VAR_24->my_ext_attr == ((void*)0))
  return -VAR_7;

 VAR_25 = VAR_24->my_i2c_dev_addr;
 VAR_26 = (struct drxj_data *) VAR_24->my_ext_attr;
 VAR_27 = (struct drx_common_attr *) VAR_24->my_common_attr;

 VAR_31 = FUNC_1(VAR_24, &VAR_32);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 if (VAR_32 != VAR_5) {
  VAR_31 = -VAR_7;
  FUNC_13("failed to powerup device\n");
  goto rw_error;
 }


 VAR_31 = FUNC_8(VAR_24);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 VAR_31 = FUNC_5(VAR_25, VAR_15, (0x04 | VAR_14 | VAR_13), 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 VAR_31 = FUNC_5(VAR_25, VAR_17, VAR_16, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 FUNC_11(1);



 VAR_31 = FUNC_5(VAR_25, VAR_2, (~VAR_0) | VAR_1, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }

 VAR_31 = FUNC_14(VAR_24, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 VAR_31 = FUNC_15(VAR_24, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }

 VAR_31 = FUNC_9(VAR_24);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }


 FUNC_10(&VAR_30, &VAR_27->mpeg_cfg, sizeof(VAR_30));
 VAR_30.enable_mpeg_output = 0;

 VAR_31 = FUNC_2(VAR_24, &VAR_30);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }

 VAR_31 = FUNC_12(VAR_24);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }

 VAR_31 = FUNC_5(VAR_25, VAR_10, VAR_9, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }


 if (VAR_27->microcode_file != ((void*)0)) {


  VAR_27->is_opened = 1;
  VAR_29.mc_file = VAR_27->microcode_file;

  if (FUNC_0(VAR_24->my_common_attr->current_power_mode)) {
   FUNC_13("Should powerup before loading the firmware.");
   return -VAR_7;
  }

  VAR_31 = FUNC_4(VAR_24, &VAR_29, VAR_18);
  if (VAR_31 != 0) {
   FUNC_13("error %d while uploading the firmware\n", VAR_31);
   goto rw_error;
  }
  if (VAR_27->verify_microcode == 1) {
   VAR_31 = FUNC_4(VAR_24, &VAR_29, VAR_19);
   if (VAR_31 != 0) {
    FUNC_13("error %d while verifying the firmware\n",
           VAR_31);
    goto rw_error;
   }
  }
  VAR_27->is_opened = 0;
 }


 VAR_31 = FUNC_5(VAR_25, VAR_10, VAR_8, 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }


 VAR_27->scan_demod_lock_timeout = VAR_3;
 VAR_27->scan_desired_lock = VAR_4;

 FUNC_6(VAR_26);
 VAR_26->standard = VAR_6;

 VAR_31 = FUNC_16(VAR_24);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }





 VAR_28 = (VAR_20 / 100) % 10;
 VAR_28 <<= 4;
 VAR_28 += (VAR_20 / 10) % 10;
 VAR_28 <<= 4;
 VAR_28 += (VAR_20 % 10);
 VAR_28 <<= 4;
 VAR_28 += (VAR_21 % 10);
 VAR_28 <<= 4;
 VAR_28 += (VAR_22 / 1000) % 10;
 VAR_28 <<= 4;
 VAR_28 += (VAR_22 / 100) % 10;
 VAR_28 <<= 4;
 VAR_28 += (VAR_22 / 10) % 10;
 VAR_28 <<= 4;
 VAR_28 += (VAR_22 % 10);
 VAR_31 = FUNC_5(VAR_25, VAR_11, (u16)(VAR_28 >> 16), 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }
 VAR_31 = FUNC_5(VAR_25, VAR_12, (u16)(VAR_28 & 0xFFFF), 0);
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }

 VAR_31 = FUNC_3(VAR_24, ((void*)0));
 if (VAR_31 != 0) {
  FUNC_13("error %d\n", VAR_31);
  goto rw_error;
 }


 VAR_26->aud_data = VAR_23;

 VAR_24->my_common_attr->is_opened = 1;
 FUNC_7(VAR_24, 0);
 return 0;
rw_error:
 VAR_27->is_opened = 0;
 return VAR_31;
}
