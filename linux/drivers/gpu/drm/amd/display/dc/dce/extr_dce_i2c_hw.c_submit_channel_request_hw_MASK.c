
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_request_transaction_data {int status; } ;
struct dce_i2c_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dce_i2c_hw*) ;
 scalar_t__ FUNC_1 (struct dce_i2c_hw*) ;
 int FUNC_2 (struct dce_i2c_hw*,struct i2c_request_transaction_data*) ;
 int FUNC_3 (struct dce_i2c_hw*) ;

__attribute__((used)) static void FUNC_4(
 struct dce_i2c_hw *VAR_2,
 struct i2c_request_transaction_data *VAR_3)
{
 VAR_3->status = VAR_1;

 if (!FUNC_2(VAR_2, VAR_3))
  return;

 if (FUNC_1(VAR_2)) {
  VAR_3->status = VAR_0;
  return;
 }
 FUNC_3(VAR_2);

 FUNC_0(VAR_2);


}
