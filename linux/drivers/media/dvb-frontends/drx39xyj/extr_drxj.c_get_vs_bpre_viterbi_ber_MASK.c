
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
 int FUNC_0 (struct i2c_device_addr*,int ,int*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_device_addr *VAR_4,
       u32 *VAR_5, u32 *VAR_6)
{
 u16 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_3, &VAR_7, 0);
 if (VAR_8 != 0) {
  FUNC_1("error %d\n", VAR_8);
  return -VAR_0;
 }
 *VAR_5 = VAR_7;
 *VAR_6 = VAR_2 * VAR_1;

 return 0;
}
