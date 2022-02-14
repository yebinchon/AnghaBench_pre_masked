
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_device_addr *VAR_1, u16 *VAR_2)
{
 int VAR_3;
 u16 VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_4, 0);
 if (VAR_3 != 0) {
  FUNC_2("error %d\n", VAR_3);
  goto rw_error;
 }
 *VAR_2 =
     (u16) (FUNC_1(21504) - FUNC_1((VAR_4 << 6) / 52));

 return 0;
rw_error:
 return VAR_3;
}
