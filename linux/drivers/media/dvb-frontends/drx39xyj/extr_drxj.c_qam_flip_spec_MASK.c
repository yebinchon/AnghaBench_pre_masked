
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {int iqm_fs_rate_ofs; int pos_image; } ;
struct drx_demod_instance {struct drxj_data* my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;
struct drx_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_2 (struct i2c_device_addr*,scalar_t__,int*,int ) ;
 int FUNC_3 (struct i2c_device_addr*,scalar_t__,int,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct drx_demod_instance *VAR_17, struct drx_channel *VAR_18)
{
 struct i2c_device_addr *VAR_19 = VAR_17->my_i2c_dev_addr;
 struct drxj_data *VAR_20 = VAR_17->my_ext_attr;
 int VAR_21;
 u32 VAR_22 = 0;
 u32 VAR_23 = 0;
 u16 VAR_24 = 0;
 u16 VAR_25 = 0;
 u16 VAR_26 = 0;
 u16 VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;


 VAR_21 = FUNC_2(VAR_19, VAR_14, &VAR_24, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_14, VAR_24 & ~(VAR_11 | VAR_12 | VAR_13), 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }


 VAR_21 = FUNC_3(VAR_19, VAR_8, 0, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_7, 0, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }

 VAR_21 = FUNC_1(VAR_19, VAR_1, &VAR_22, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_1(VAR_19, VAR_0, &VAR_23, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_29 = VAR_23 - VAR_22;
 VAR_22 = ~VAR_22 + 1;
 VAR_22 -= 2 * VAR_29;


 VAR_21 = FUNC_2(VAR_19, VAR_2, &VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_25 = (VAR_25 & 0xfff9);
 VAR_21 = FUNC_3(VAR_19, VAR_2, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_5, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }


 VAR_21 = FUNC_3(VAR_19, VAR_9, 0, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_10, 0, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_4, 0, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }


 VAR_21 = FUNC_0(VAR_19, VAR_1, VAR_22, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_20->iqm_fs_rate_ofs = VAR_22;
 VAR_20->pos_image = (VAR_20->pos_image) ? 0 : 1;


 VAR_21 = FUNC_2(VAR_19, VAR_2, &VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_26 = VAR_25;
 VAR_25 = (VAR_25 & 0xfff9);
 VAR_21 = FUNC_3(VAR_19, VAR_2, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_5, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }

 for (VAR_28 = 0; VAR_28 < 28; VAR_28++) {
  VAR_21 = FUNC_2(VAR_19, VAR_3 + (2 * VAR_28), &VAR_25, 0);
  if (VAR_21 != 0) {
   FUNC_4("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_3(VAR_19, VAR_3 + (2 * VAR_28), -VAR_25, 0);
  if (VAR_21 != 0) {
   FUNC_4("error %d\n", VAR_21);
   goto rw_error;
  }
 }

 for (VAR_28 = 0; VAR_28 < 24; VAR_28++) {
  VAR_21 = FUNC_2(VAR_19, VAR_6 + (2 * VAR_28), &VAR_25, 0);
  if (VAR_21 != 0) {
   FUNC_4("error %d\n", VAR_21);
   goto rw_error;
  }
  VAR_21 = FUNC_3(VAR_19, VAR_6 + (2 * VAR_28), -VAR_25, 0);
  if (VAR_21 != 0) {
   FUNC_4("error %d\n", VAR_21);
   goto rw_error;
  }
 }

 VAR_25 = VAR_26;
 VAR_21 = FUNC_3(VAR_19, VAR_2, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }
 VAR_21 = FUNC_3(VAR_19, VAR_5, VAR_25, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }

 VAR_21 = FUNC_3(VAR_19, VAR_15, 4, 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }

 VAR_28 = 0;
 while ((VAR_27 != 4) && (VAR_28++ < 100)) {
  VAR_21 = FUNC_2(VAR_19, VAR_16, &VAR_27, 0);
  if (VAR_21 != 0) {
   FUNC_4("error %d\n", VAR_21);
   goto rw_error;
  }
 }
 VAR_21 = FUNC_3(VAR_19, VAR_14, (VAR_24 | 0x0016), 0);
 if (VAR_21 != 0) {
  FUNC_4("error %d\n", VAR_21);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_21;

}
