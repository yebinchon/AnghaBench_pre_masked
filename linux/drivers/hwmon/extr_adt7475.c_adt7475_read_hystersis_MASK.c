
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct i2c_client {int dummy; } ;
struct adt7475_data {void*** temp; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct adt7475_data* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_3)
{
 struct adt7475_data *VAR_4 = FUNC_1(VAR_3);

 VAR_4->temp[VAR_0][0] = (u16) FUNC_0(VAR_1);
 VAR_4->temp[VAR_0][1] = VAR_4->temp[VAR_0][0];
 VAR_4->temp[VAR_0][2] = (u16) FUNC_0(VAR_2);
}
