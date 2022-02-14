
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct dce_i2c_hw {TYPE_1__* masks; } ;
typedef enum i2c_channel_operation_result { ____Placeholder_i2c_channel_operation_result } i2c_channel_operation_result ;
struct TYPE_2__ {scalar_t__ DC_I2C_SW_STOPPED_ON_NACK; scalar_t__ DC_I2C_SW_TIMEOUT; scalar_t__ DC_I2C_SW_ABORTED; scalar_t__ DC_I2C_SW_DONE; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;

__attribute__((used)) static enum i2c_channel_operation_result FUNC_1(
 struct dce_i2c_hw *VAR_7,
 uint8_t *VAR_8)
{
 uint32_t VAR_9 = 0;
 uint32_t VAR_10 =
  FUNC_0(VAR_1, VAR_1, &VAR_9);
 if (VAR_9 == VAR_0)
  return VAR_2;
 else if (VAR_10 & VAR_7->masks->DC_I2C_SW_STOPPED_ON_NACK)
  return VAR_4;
 else if (VAR_10 & VAR_7->masks->DC_I2C_SW_TIMEOUT)
  return VAR_6;
 else if (VAR_10 & VAR_7->masks->DC_I2C_SW_ABORTED)
  return VAR_3;
 else if (VAR_10 & VAR_7->masks->DC_I2C_SW_DONE)
  return VAR_5;





 return VAR_5;
}
