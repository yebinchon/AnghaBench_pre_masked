
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
 int FUNC_0 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct i2c_adapter*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 struct amdgpu_device* FUNC_6 (struct i2c_adapter*) ;

__attribute__((used)) static uint32_t FUNC_7(struct i2c_adapter *VAR_17)
{
 struct amdgpu_device *VAR_18 = FUNC_6(VAR_17);
 uint32_t VAR_19 = VAR_8;
 uint32_t VAR_20, VAR_21;


 unsigned long VAR_22 = VAR_13 + FUNC_3(20);

 do {
  if (FUNC_5(VAR_13, VAR_22)) {
   VAR_19 |= VAR_9;
   break;
  }

  VAR_20 = FUNC_2(VAR_11, 0, VAR_15);

 } while (FUNC_1(VAR_20, VAR_3, VAR_12) == 0);

 if (VAR_19 != VAR_8)
  return VAR_19;


 VAR_20 = FUNC_2(VAR_11, 0, VAR_14);

 if (FUNC_1(VAR_20, VAR_2, VAR_10) == 1) {
  VAR_21 = FUNC_2(VAR_11, 0, VAR_16);
  FUNC_0("TX was terminated, IC_TX_ABRT_SOURCE val is:%x", VAR_21);


  if (FUNC_1(VAR_21,
      VAR_4,
      VAR_1) == 1) {

   VAR_19 |= VAR_7;

  } else if (FUNC_1(VAR_21,
      VAR_4,
      VAR_0) == 1) {

   VAR_19 |= VAR_6;
  } else {
   VAR_19 |= VAR_5;
  }

  FUNC_4(VAR_17);
 }

 return VAR_19;
}
