
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
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct drx_demod_instance *VAR_6, u16 *VAR_7)
{
 struct i2c_device_addr *VAR_8 = ((void*)0);
 int VAR_9;
 u16 VAR_10 = 0;

 VAR_8 = VAR_6->my_i2c_dev_addr;


 VAR_9 = FUNC_1(VAR_8, VAR_1, VAR_0, 0);
 if (VAR_9 != 0) {
  FUNC_3("error %d\n", VAR_9);
  goto rw_error;
 }
 VAR_9 = FUNC_1(VAR_8, VAR_5, 1, 0);
 if (VAR_9 != 0) {
  FUNC_3("error %d\n", VAR_9);
  goto rw_error;
 }


 FUNC_2(1);

 *VAR_7 = 0;
 VAR_9 = FUNC_0(VAR_8, VAR_2, &VAR_10, 0);
 if (VAR_9 != 0) {
  FUNC_3("error %d\n", VAR_9);
  goto rw_error;
 }
 if (VAR_10 == 127)
  *VAR_7 = *VAR_7 + 1;
 VAR_9 = FUNC_0(VAR_8, VAR_3, &VAR_10, 0);
 if (VAR_9 != 0) {
  FUNC_3("error %d\n", VAR_9);
  goto rw_error;
 }
 if (VAR_10 == 127)
  *VAR_7 = *VAR_7 + 1;
 VAR_9 = FUNC_0(VAR_8, VAR_4, &VAR_10, 0);
 if (VAR_9 != 0) {
  FUNC_3("error %d\n", VAR_9);
  goto rw_error;
 }
 if (VAR_10 == 127)
  *VAR_7 = *VAR_7 + 1;

 return 0;
rw_error:
 return VAR_9;
}
