
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,int ,int *,int,int ) ;

__attribute__((used)) static uint32_t FUNC_3(struct i2c_adapter *VAR_3,
            uint8_t VAR_4,
            uint8_t *VAR_5,
            uint32_t VAR_6)
{
 uint32_t VAR_7 = 0;


 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, 2, VAR_0);
 if (VAR_7 != VAR_1)
  goto Fail;


 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5 + 2, VAR_6 - 2,
        VAR_2);

Fail:
 if (VAR_7 != VAR_1)
  FUNC_0("ReadData() - I2C error occurred :%x", VAR_7);

 return VAR_7;
}
