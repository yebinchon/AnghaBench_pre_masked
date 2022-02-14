
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drxj_data {scalar_t__ disable_te_ihandling; } ;
struct drx_demod_instance {scalar_t__ my_ext_attr; struct i2c_device_addr* my_i2c_dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_9)
{
 struct drxj_data *VAR_10 = (struct drxj_data *) (((void*)0));
 struct i2c_device_addr *VAR_11 = (struct i2c_device_addr *)(((void*)0));
 int VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;

 VAR_11 = VAR_9->my_i2c_dev_addr;
 VAR_10 = (struct drxj_data *) VAR_9->my_ext_attr;

 VAR_12 = FUNC_0(VAR_11, VAR_1, &VAR_13, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_12 = FUNC_0(VAR_11, VAR_8, &VAR_14, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_12 = FUNC_0(VAR_11, VAR_4, &VAR_15, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }


 VAR_13 &= (~VAR_0);
 VAR_14 &= (~(VAR_7 |
      VAR_5));
 VAR_15 &= (~VAR_3);

 if (VAR_10->disable_te_ihandling) {

  VAR_13 |= VAR_0;
  VAR_14 |= VAR_5 |
      ((0x2) << (VAR_6));
  VAR_15 |= ((0x01) << (VAR_2));
 }

 VAR_12 = FUNC_1(VAR_11, VAR_1, VAR_13, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_14, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_4, VAR_15, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_12;
}
