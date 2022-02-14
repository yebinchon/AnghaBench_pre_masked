
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct i2c_adapter*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct amdgpu_device* FUNC_5 (struct i2c_adapter*) ;

__attribute__((used)) static uint32_t FUNC_6(struct i2c_adapter *VAR_11)
{
 struct amdgpu_device *VAR_12 = FUNC_5(VAR_11);
 uint32_t VAR_13 = VAR_4;
 uint32_t VAR_14, VAR_15;

 VAR_15 = FUNC_1(VAR_7, 0, VAR_10);


 if (FUNC_0(VAR_15,
     VAR_2,
     VAR_0) == 1) {
  VAR_13 |= VAR_3;

  FUNC_3(VAR_11);
 } else {

  unsigned long VAR_16 = VAR_8 + FUNC_2(20);

  do {
   if (FUNC_4(VAR_8, VAR_16)) {
    VAR_13 |= VAR_5;
    break;
   }

   VAR_14 = FUNC_1(VAR_7, 0, VAR_9);

  } while (FUNC_0(VAR_14, VAR_1, VAR_6) == 0);
 }

 return VAR_13;
}
