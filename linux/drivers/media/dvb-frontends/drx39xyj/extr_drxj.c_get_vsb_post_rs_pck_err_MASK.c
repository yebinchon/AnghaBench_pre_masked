
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct i2c_device_addr *VAR_7,
       u32 *VAR_8, u32 *VAR_9)
{
 int VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;

 VAR_10 = FUNC_0(VAR_7, VAR_6, &VAR_11, 0);
 if (VAR_10 != 0) {
  FUNC_1("error %d\n", VAR_10);
  goto rw_error;
 }
 VAR_14 = VAR_11 & VAR_5;
 VAR_15 = (VAR_11 & VAR_4)
     >> VAR_3;
 VAR_12 = VAR_1;
 VAR_13 = VAR_2;


 if (VAR_12 * VAR_13 == 0) {
  FUNC_1("error: period and/or prescale is zero!\n");
  return -VAR_0;
 }
 *VAR_8 = VAR_14 * (1 << VAR_15);
 *VAR_9 = VAR_12 * VAR_13 * 77;

 return 0;
rw_error:
 return VAR_10;
}
