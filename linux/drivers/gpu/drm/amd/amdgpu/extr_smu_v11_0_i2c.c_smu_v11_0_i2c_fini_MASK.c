
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_adapter {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,int) ;
 struct amdgpu_device* FUNC_4 (struct i2c_adapter*) ;

__attribute__((used)) static void FUNC_5(struct i2c_adapter *VAR_7)
{
 struct amdgpu_device *VAR_8 = FUNC_4(VAR_7);
 uint32_t VAR_9, VAR_10;

 FUNC_3(VAR_7, 0);


 VAR_9 = FUNC_1(VAR_4, 0, VAR_6);
 VAR_10 = FUNC_1(VAR_4, 0, VAR_5);

 if ((FUNC_0(VAR_10, VAR_0, VAR_2) == 0) &&
     (FUNC_0(VAR_9,
      VAR_1, VAR_3) == 1)) {




  FUNC_2(VAR_7);
 }
}
