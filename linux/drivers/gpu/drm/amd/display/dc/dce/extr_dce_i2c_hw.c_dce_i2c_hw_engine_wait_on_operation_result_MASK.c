
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dce_i2c_hw {int dummy; } ;
typedef enum i2c_channel_operation_result { ____Placeholder_i2c_channel_operation_result } i2c_channel_operation_result ;


 int VAR_0 ;
 int FUNC_0 (struct dce_i2c_hw*,int *) ;
 int FUNC_1 (int) ;

enum i2c_channel_operation_result FUNC_2(
 struct dce_i2c_hw *VAR_1,
 uint32_t VAR_2,
 enum i2c_channel_operation_result VAR_3)
{
 enum i2c_channel_operation_result VAR_4;
 uint32_t VAR_5 = 0;

 if (!VAR_2)
  return VAR_0;

 do {

  VAR_4 = FUNC_0(
    VAR_1, ((void*)0));

  if (VAR_4 != VAR_3)
   break;

  FUNC_1(1);

  ++VAR_5;
 } while (VAR_5 < VAR_2);
 return VAR_4;
}
