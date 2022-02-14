
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;
struct drx_demod_instance {struct i2c_device_addr* my_i2c_dev_addr; } ;


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
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct drx_demod_instance *VAR_9, u16 *VAR_10)
{
 struct i2c_device_addr *VAR_11 = VAR_9->my_i2c_dev_addr;
 int VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 u16 VAR_16 = 0;
 u16 VAR_17 = 0;
 u16 VAR_18 = 0;

 VAR_12 = FUNC_0(VAR_11, VAR_5, &VAR_14, 0);
 if (VAR_12 != 0) {
  FUNC_1("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_14 &= VAR_6;
 VAR_12 = FUNC_0(VAR_11, VAR_7, &VAR_13, 0);
 if (VAR_12 != 0) {
  FUNC_1("error %d\n", VAR_12);
  goto rw_error;
 }
 VAR_13 &= VAR_8;

 VAR_15 = VAR_0;
 VAR_16 = VAR_1;
 VAR_17 = VAR_2;
 VAR_18 = VAR_3;

 if (VAR_14 > VAR_16) {
  if (VAR_13 > VAR_17)
   *VAR_10 = 100;
  else if (VAR_13 > VAR_18) {
   if (VAR_17 == VAR_18) {
    FUNC_1("error: rf_agc_max == rf_agc_min\n");
    return -VAR_4;
   }
   *VAR_10 =
   75 + 25 * (VAR_13 - VAR_18) / (VAR_17 -
        VAR_18);
  } else
   *VAR_10 = 75;
 } else if (VAR_14 > VAR_15) {
  if (VAR_16 == VAR_15) {
   FUNC_1("error: if_agc_top == if_agc_sns\n");
   return -VAR_4;
  }
  *VAR_10 =
  20 + 55 * (VAR_14 - VAR_15) / (VAR_16 - VAR_15);
 } else {
  if (!VAR_15) {
   FUNC_1("error: if_agc_sns is zero!\n");
   return -VAR_4;
  }
  *VAR_10 = (20 * VAR_14 / VAR_15);
 }

 if (*VAR_10 <= 7)
  *VAR_10 = 0;

 return 0;
rw_error:
 return VAR_12;
}
