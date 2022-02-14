
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int fec_bits_desired; int fec_rs_prescale; int standard; int fec_rs_plen; int fec_rs_period; int fec_vd_plen; int qam_vd_prescale; int qam_vd_period; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
typedef enum drx_modulation { ____Placeholder_drx_modulation } drx_modulation ;
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
 int FUNC_0 (struct i2c_device_addr*,int ,int ,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct drx_demod_instance *VAR_12,
      enum drx_modulation VAR_13, u32 VAR_14)
{
 struct i2c_device_addr *VAR_15 = ((void*)0);
 struct drxj_data *VAR_16 = ((void*)0);
 int VAR_17;
 u32 VAR_18 = 0;
 u16 VAR_19 = 0;
 u16 VAR_20 = 0;
 u32 VAR_21 = 0;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u32 VAR_24 = 0;
 u32 VAR_25 = 0;
 u16 VAR_26 = 0;
 u16 VAR_27 = 0;

 VAR_15 = VAR_12->my_i2c_dev_addr;
 VAR_16 = (struct drxj_data *) VAR_12->my_ext_attr;

 VAR_18 = VAR_16->fec_bits_desired;
 VAR_20 = VAR_16->fec_rs_prescale;

 switch (VAR_13) {
 case 134:
  VAR_18 = 4 * VAR_14;
  break;
 case 132:
  VAR_18 = 5 * VAR_14;
  break;
 case 131:
  VAR_18 = 6 * VAR_14;
  break;
 case 135:
  VAR_18 = 7 * VAR_14;
  break;
 case 133:
  VAR_18 = 8 * VAR_14;
  break;
 default:
  return -VAR_0;
 }
 switch (VAR_16->standard) {
 case 130:
 case 128:
  VAR_19 = 204 * 8;
  break;
 case 129:
  VAR_19 = 128 * 7;
  break;
 default:
  return -VAR_0;
 }

 VAR_16->fec_rs_plen = VAR_19;
 VAR_22 = VAR_20 * VAR_19;
 if (VAR_22 == 0) {
  FUNC_2("error: fec_rs_bit_cnt is zero!\n");
  return -VAR_1;
 }
 VAR_21 = VAR_18 / VAR_22 + 1;
 if (VAR_16->standard != 129)
  VAR_23 = VAR_21;


 if (VAR_21 > 0xFFFF)
  VAR_21 = 0xFFFF;


 switch (VAR_16->standard) {
 case 130:
 case 128:
  break;
 case 129:
  switch (VAR_13) {
  case 131:
   VAR_21 = 31581;
   VAR_23 = 17932;
   break;
  case 133:
   VAR_21 = 45446;
   VAR_23 = 25805;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_17 = FUNC_1(VAR_15, VAR_2, (u16)VAR_23, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }
 VAR_17 = FUNC_1(VAR_15, VAR_3, (u16)VAR_21, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }
 VAR_17 = FUNC_1(VAR_15, VAR_4, VAR_20, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }
 VAR_16->fec_rs_period = (u16) VAR_21;
 VAR_16->fec_rs_prescale = VAR_20;
 VAR_17 = FUNC_0(VAR_15, VAR_9, 0, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }
 VAR_17 = FUNC_1(VAR_15, VAR_11, 0, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }
 VAR_17 = FUNC_1(VAR_15, VAR_10, 0, 0);
 if (VAR_17 != 0) {
  FUNC_2("error %d\n", VAR_17);
  goto rw_error;
 }

 if (VAR_16->standard == 129) {
  VAR_26 = VAR_16->fec_vd_plen;
  VAR_27 = VAR_16->qam_vd_prescale;
  VAR_25 = VAR_27 * VAR_26;

  switch (VAR_13) {
  case 131:

   VAR_24 =
       VAR_25 * (VAR_6 + 1)
       * (VAR_6 + 1);
   break;
  case 133:

   VAR_24 =
       VAR_25 * (VAR_5 + 1)
       * (VAR_5 + 1);
   break;
  default:
   return -VAR_0;
  }
  if (VAR_24 == 0) {
   FUNC_2("error: qam_vd_period is zero!\n");
   return -VAR_1;
  }
  VAR_24 = VAR_18 / VAR_24;

  if (VAR_24 > 0xFFFF)
   VAR_24 = 0xFFFF;


  VAR_25 *= VAR_24;

  VAR_17 = FUNC_1(VAR_15, VAR_7, (u16)VAR_24, 0);
  if (VAR_17 != 0) {
   FUNC_2("error %d\n", VAR_17);
   goto rw_error;
  }
  VAR_17 = FUNC_1(VAR_15, VAR_8, VAR_27, 0);
  if (VAR_17 != 0) {
   FUNC_2("error %d\n", VAR_17);
   goto rw_error;
  }
  VAR_16->qam_vd_period = (u16) VAR_24;
  VAR_16->qam_vd_prescale = VAR_27;
 }

 return 0;
rw_error:
 return VAR_17;
}
