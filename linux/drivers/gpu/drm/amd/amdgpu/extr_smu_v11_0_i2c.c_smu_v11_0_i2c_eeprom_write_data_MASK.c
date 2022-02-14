
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,int ,int *,scalar_t__,int ) ;

__attribute__((used)) static uint32_t FUNC_3(struct i2c_adapter *VAR_1,
      uint8_t VAR_2,
      uint8_t *VAR_3,
      uint32_t VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 0);

 if (VAR_5 != VAR_0)
  FUNC_0("WriteI2CData() - I2C error occurred :%x", VAR_5);
 else
  FUNC_1(10);

 return VAR_5;

}
