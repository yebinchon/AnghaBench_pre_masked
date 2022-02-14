
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;
 struct amdgpu_device* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_5)
{
 struct amdgpu_device *VAR_6 = FUNC_3(VAR_5);
 uint32_t VAR_7 = 0;


 VAR_7 = FUNC_1(VAR_7, VAR_1, VAR_2, 1);
 FUNC_2(VAR_3, 0, VAR_4, VAR_7);


 VAR_7 = FUNC_1(VAR_7, VAR_1, VAR_0, 1);
 FUNC_2(VAR_3, 0, VAR_4, VAR_7);

 FUNC_0("I2C_Abort() Done.");
}
