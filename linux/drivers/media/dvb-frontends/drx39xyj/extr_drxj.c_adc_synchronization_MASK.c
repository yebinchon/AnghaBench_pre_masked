
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
 int FUNC_0 (struct drx_demod_instance*,int*) ;
 int FUNC_1 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_2 (struct i2c_device_addr*,int ,int,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct drx_demod_instance *VAR_3)
{
 struct i2c_device_addr *VAR_4 = ((void*)0);
 int VAR_5;
 u16 VAR_6 = 0;

 VAR_4 = VAR_3->my_i2c_dev_addr;

 VAR_5 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_5 != 0) {
  FUNC_3("error %d\n", VAR_5);
  goto rw_error;
 }

 if (VAR_6 == 1) {

  u16 VAR_7 = 0;

  VAR_5 = FUNC_1(VAR_4, VAR_2, &VAR_7, 0);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }

  VAR_7 ^= VAR_1;
  VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_7, 0);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }

  VAR_5 = FUNC_0(VAR_3, &VAR_6);
  if (VAR_5 != 0) {
   FUNC_3("error %d\n", VAR_5);
   goto rw_error;
  }
 }


 if (VAR_6 < 2)
  return -VAR_0;

 return 0;
rw_error:
 return VAR_5;
}
