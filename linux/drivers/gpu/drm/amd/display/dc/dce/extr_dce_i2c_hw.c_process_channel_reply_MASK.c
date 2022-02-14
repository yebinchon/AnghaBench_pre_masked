
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct i2c_payload {int * data; scalar_t__ length; } ;
struct dce_i2c_hw {int buffer_used_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce_i2c_hw *VAR_4,
 struct i2c_payload *VAR_5)
{
 uint32_t VAR_6 = VAR_5->length;
 uint8_t *VAR_7 = VAR_5->data;

 FUNC_1(VAR_0, 0,
   VAR_2, VAR_4->buffer_used_write,
   VAR_1, 1,
   VAR_3, 1);

 while (VAR_6) {






  uint32_t VAR_8;

  FUNC_0(VAR_0, VAR_0, &VAR_8);
  *VAR_7++ = VAR_8;

  --VAR_6;
 }
}
