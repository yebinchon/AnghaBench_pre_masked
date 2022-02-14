
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct resource_pool {int dummy; } ;
struct i2c_payload {int dummy; } ;
struct i2c_command {int number_of_payloads; struct i2c_payload* payloads; int speed; } ;
struct ddc {int dummy; } ;
struct dce_i2c_sw {int dummy; } ;


 int FUNC_0 (struct dce_i2c_sw*,int ) ;
 int FUNC_1 (struct dce_i2c_sw*,struct i2c_payload*,int) ;
 int FUNC_2 (struct resource_pool*,struct dce_i2c_sw*) ;

bool FUNC_3(
 struct resource_pool *VAR_0,
 struct ddc *VAR_1,
 struct i2c_command *VAR_2,
 struct dce_i2c_sw *VAR_3)
{
 uint8_t VAR_4 = 0;
 bool VAR_5;

 FUNC_0(VAR_3, VAR_2->speed);

 VAR_5 = 1;

 while (VAR_4 < VAR_2->number_of_payloads) {
  bool VAR_6 = (VAR_4 != VAR_2->number_of_payloads - 1);

  struct i2c_payload *VAR_7 = VAR_2->payloads + VAR_4;

  if (!FUNC_1(
   VAR_3, VAR_7, VAR_6)) {
   VAR_5 = 0;
   break;
  }

  ++VAR_4;
 }

 FUNC_2(VAR_0, VAR_3);

 return VAR_5;
}
