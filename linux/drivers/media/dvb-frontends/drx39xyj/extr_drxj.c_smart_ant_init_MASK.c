
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxuio_cfg {int member_1; int member_0; } ;
struct drxj_data {scalar_t__ smart_ant_inverted; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; scalar_t__ my_ext_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct drx_demod_instance*,struct drxuio_cfg*) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct drx_demod_instance *VAR_9)
{
 struct drxj_data *VAR_10 = ((void*)0);
 struct i2c_device_addr *VAR_11 = ((void*)0);
 struct drxuio_cfg VAR_12 = { VAR_0, VAR_1 };
 int VAR_13;
 u16 VAR_14 = 0;

 VAR_11 = VAR_9->my_i2c_dev_addr;
 VAR_10 = (struct drxj_data *) VAR_9->my_ext_attr;


 VAR_13 = FUNC_2(VAR_9->my_i2c_dev_addr, VAR_8, VAR_7, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }

 VAR_13 = FUNC_1(VAR_11, VAR_6, &VAR_14, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }
 if (VAR_10->smart_ant_inverted) {
  VAR_13 = FUNC_2(VAR_11, VAR_6, (VAR_14 | VAR_5) | VAR_4, 0);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
 } else {
  VAR_13 = FUNC_2(VAR_11, VAR_6, (VAR_14 & (~VAR_5)) | VAR_4, 0);
  if (VAR_13 != 0) {
   FUNC_3("error %d\n", VAR_13);
   goto rw_error;
  }
 }


 VAR_13 = FUNC_0(VAR_9, &VAR_12);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }
 VAR_13 = FUNC_2(VAR_9->my_i2c_dev_addr, VAR_2, 0x13, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }
 VAR_13 = FUNC_2(VAR_9->my_i2c_dev_addr, VAR_3, 0x03, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }


 VAR_13 = FUNC_2(VAR_9->my_i2c_dev_addr, VAR_8, 0x0000, 0);
 if (VAR_13 != 0) {
  FUNC_3("error %d\n", VAR_13);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_13;
}
