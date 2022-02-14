
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct i2c_payloads {int payloads; } ;
struct i2c_payload {int write; scalar_t__ address; int * data; int length; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct i2c_payload*) ;

void FUNC_2(
 struct i2c_payloads *VAR_1,
 uint32_t VAR_2,
 uint32_t VAR_3,
 uint8_t *VAR_4,
 bool VAR_5)
{
 uint32_t VAR_6 = VAR_0;
 uint32_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += VAR_6) {
  struct i2c_payload VAR_8 = {
   .write = VAR_5,
   .address = VAR_2,
   .length = FUNC_0(VAR_6, VAR_3 - VAR_7),
   .data = VAR_4 + VAR_7 };
  FUNC_1(&VAR_1->payloads, &VAR_8);
 }

}
