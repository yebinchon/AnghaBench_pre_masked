
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max6642_data {void** temp_high; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct max6642_data *VAR_4,
    struct i2c_client *VAR_5)
{
 u8 VAR_6;




 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 & 0x40)
  FUNC_1(VAR_5, VAR_3,
       VAR_6 & 0xBF);

 VAR_4->temp_high[0] = FUNC_0(VAR_5,
    VAR_1);
 VAR_4->temp_high[1] = FUNC_0(VAR_5,
    VAR_2);
}
