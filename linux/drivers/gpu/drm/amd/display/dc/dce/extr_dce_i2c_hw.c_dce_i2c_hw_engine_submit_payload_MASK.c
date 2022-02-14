
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct i2c_request_transaction_data {scalar_t__ length; scalar_t__ status; int data; scalar_t__ address; int action; } ;
struct i2c_payload {scalar_t__ length; int address; int write; int data; } ;
struct dce_i2c_hw {int dummy; } ;
typedef enum i2c_channel_operation_result { ____Placeholder_i2c_channel_operation_result } i2c_channel_operation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dce_i2c_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dce_i2c_hw*) ;
 int FUNC_2 (struct dce_i2c_hw*,scalar_t__) ;
 int FUNC_3 (struct dce_i2c_hw*,struct i2c_payload*) ;
 int FUNC_4 (struct dce_i2c_hw*,struct i2c_request_transaction_data*) ;

bool FUNC_5(
 struct dce_i2c_hw *VAR_7,
 struct i2c_payload *VAR_8,
 bool VAR_9)
{

 struct i2c_request_transaction_data VAR_10;

 uint32_t VAR_11;

 enum i2c_channel_operation_result VAR_12;

 bool VAR_13 = 0;






 if (VAR_8->length >=
   FUNC_1(VAR_7)) {
  return 0;
 }

 if (!VAR_8->write)
  VAR_10.action = VAR_9 ?
   VAR_1 :
   VAR_0;
 else
  VAR_10.action = VAR_9 ?
   VAR_3 :
   VAR_2;


 VAR_10.address = (uint8_t) ((VAR_8->address << 1) | !VAR_8->write);
 VAR_10.length = VAR_8->length;
 VAR_10.data = VAR_8->data;



 VAR_11 = FUNC_2(
  VAR_7, VAR_8->length + 1);

 FUNC_4(
  VAR_7, &VAR_10);

 if ((VAR_10.status == VAR_5) ||
  (VAR_10.status == VAR_4))
  return 0;



 VAR_12 = FUNC_0(
  VAR_7,
  VAR_11,
  VAR_4);



 if (VAR_12 == VAR_6)
  VAR_13 = 1;

 if (VAR_13 && (!VAR_8->write))
  FUNC_3(VAR_7, VAR_8);

 return VAR_13;
}
