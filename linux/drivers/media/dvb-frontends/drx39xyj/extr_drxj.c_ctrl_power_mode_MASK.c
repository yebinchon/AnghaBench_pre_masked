
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int standard; int hi_cfg_ctrl; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; scalar_t__ my_ext_attr; scalar_t__ my_common_attr; } ;
struct drx_common_attr {int current_power_mode; } ;
typedef enum drx_power_mode { ____Placeholder_drx_power_mode } drx_power_mode ;
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
 int FUNC_0 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_1 (struct drxj_data*) ;
 int FUNC_2 (struct drx_demod_instance*) ;
 int FUNC_3 (struct drx_demod_instance*) ;
 int FUNC_4 (struct drx_demod_instance*,int,int) ;
 int FUNC_5 (struct drx_demod_instance*,int) ;
 int FUNC_6 (struct drx_demod_instance*,int) ;
 int FUNC_7 (struct drx_demod_instance*) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int
FUNC_9(struct drx_demod_instance *VAR_10, enum drx_power_mode *VAR_11)
{
 struct drx_common_attr *VAR_12 = (struct drx_common_attr *) ((void*)0);
 struct drxj_data *VAR_13 = (struct drxj_data *) ((void*)0);
 struct i2c_device_addr *VAR_14 = (struct i2c_device_addr *)((void*)0);
 int VAR_15;
 u16 VAR_16 = 0;

 VAR_12 = (struct drx_common_attr *) VAR_10->my_common_attr;
 VAR_13 = (struct drxj_data *) VAR_10->my_ext_attr;
 VAR_14 = VAR_10->my_i2c_dev_addr;


 if (VAR_11 == ((void*)0))
  return -VAR_0;


 if (VAR_12->current_power_mode == *VAR_11)
  return 0;

 switch (*VAR_11) {
 case 141:
 case 144:
  VAR_16 = VAR_3;
  break;
 case 145:
  VAR_16 = VAR_2;
  break;
 case 143:
  VAR_16 = VAR_5;
  break;
 case 142:
  VAR_16 = VAR_4;
  break;
 default:

  return -VAR_0;
  break;
 }


 if ((VAR_12->current_power_mode != 141)) {
  VAR_15 = FUNC_7(VAR_10);
  if (VAR_15 != 0) {
   FUNC_8("error %d\n", VAR_15);
   goto rw_error;
  }
 }

 if (*VAR_11 == 141) {



  FUNC_1(VAR_13);
 } else {
  switch (VAR_13->standard) {
  case 137:
  case 136:
  case 135:
   VAR_15 = FUNC_5(VAR_10, 1);
   if (VAR_15 != 0) {
    FUNC_8("error %d\n", VAR_15);
    goto rw_error;
   }
   break;
  case 140:
   VAR_15 = FUNC_6(VAR_10, 1);
   if (VAR_15 != 0) {
    FUNC_8("error %d\n", VAR_15);
    goto rw_error;
   }
   break;
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 134:
  case 138:
   VAR_15 = FUNC_4(VAR_10, VAR_13->standard, 1);
   if (VAR_15 != 0) {
    FUNC_8("error %d\n", VAR_15);
    goto rw_error;
   }
   break;
  case 128:

   break;
  case 139:
  default:
   return -VAR_1;
  }
  VAR_13->standard = 128;
 }

 if (*VAR_11 != 144) {
  VAR_15 = FUNC_0(VAR_14, VAR_6, VAR_16, 0);
  if (VAR_15 != 0) {
   FUNC_8("error %d\n", VAR_15);
   goto rw_error;
  }
  VAR_15 = FUNC_0(VAR_14, VAR_8, VAR_7, 0);
  if (VAR_15 != 0) {
   FUNC_8("error %d\n", VAR_15);
   goto rw_error;
  }

  if ((*VAR_11 != 141)) {

   VAR_15 = FUNC_3(VAR_10);
   if (VAR_15 != 0) {
    FUNC_8("error %d\n", VAR_15);
    goto rw_error;
   }

   VAR_13->hi_cfg_ctrl |= VAR_9;
   VAR_15 = FUNC_2(VAR_10);
   if (VAR_15 != 0) {
    FUNC_8("error %d\n", VAR_15);
    goto rw_error;
   }
  }
 }

 VAR_12->current_power_mode = *VAR_11;

 return 0;
rw_error:
 return VAR_15;
}
