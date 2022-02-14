
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
 int FUNC_1 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_9, bool VAR_10)
{
 struct i2c_device_addr *VAR_11 = VAR_9->my_i2c_dev_addr;
 int VAR_12;
 u16 VAR_13 = 0;


 VAR_12 = FUNC_0(VAR_11, VAR_8, &VAR_13, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }
 if (!VAR_10)
  VAR_13 &= ((~VAR_0) & (~VAR_1) & (~VAR_2) & (~VAR_5) & (~VAR_4) & (~VAR_6) & (~VAR_7) & (~VAR_3));
 else
  VAR_13 |= (VAR_0 | VAR_1 | VAR_2 | VAR_5 | VAR_4 | VAR_6 | VAR_7 | VAR_3);
 VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_13, 0);
 if (VAR_12 != 0) {
  FUNC_2("error %d\n", VAR_12);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_12;
}
