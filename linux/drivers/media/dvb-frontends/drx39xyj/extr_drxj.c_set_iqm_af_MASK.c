
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
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct drx_demod_instance *VAR_6, bool VAR_7)
{
 u16 VAR_8 = 0;
 struct i2c_device_addr *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = VAR_6->my_i2c_dev_addr;


 VAR_10 = FUNC_0(VAR_9, VAR_5, &VAR_8, 0);
 if (VAR_10 != 0) {
  FUNC_2("error %d\n", VAR_10);
  goto rw_error;
 }
 if (!VAR_7)
  VAR_8 &= ((~VAR_0) & (~VAR_1) & (~VAR_2) & (~VAR_3) & (~VAR_4));
 else
  VAR_8 |= (VAR_0 | VAR_1 | VAR_2 | VAR_3 | VAR_4);
 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_8, 0);
 if (VAR_10 != 0) {
  FUNC_2("error %d\n", VAR_10);
  goto rw_error;
 }

 return 0;
rw_error:
 return VAR_10;
}
