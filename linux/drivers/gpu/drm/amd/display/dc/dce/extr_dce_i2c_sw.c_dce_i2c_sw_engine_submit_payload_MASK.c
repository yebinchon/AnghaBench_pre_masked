
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct i2c_request_transaction_data {scalar_t__ status; int data; int length; scalar_t__ address; int action; } ;
struct i2c_payload {int address; int data; int length; int write; } ;
struct dce_i2c_sw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct dce_i2c_sw*,struct i2c_request_transaction_data*) ;

bool FUNC_1(
 struct dce_i2c_sw *VAR_6,
 struct i2c_payload *VAR_7,
 bool VAR_8)
{
 struct i2c_request_transaction_data VAR_9;

 if (!VAR_7->write)
  VAR_9.action = VAR_8 ?
   VAR_1 :
   VAR_0;
 else
  VAR_9.action = VAR_8 ?
   VAR_3 :
   VAR_2;

 VAR_9.address = (uint8_t) ((VAR_7->address << 1) | !VAR_7->write);
 VAR_9.length = VAR_7->length;
 VAR_9.data = VAR_7->data;

 FUNC_0(VAR_6, &VAR_9);

 if ((VAR_9.status == VAR_4) ||
  (VAR_9.status == VAR_5))
  return 0;

 return 1;
}
