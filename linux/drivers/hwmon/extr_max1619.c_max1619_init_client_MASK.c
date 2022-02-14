
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_3)
{
 u8 VAR_4;




 FUNC_1(VAR_3, VAR_2,
      5);
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 & 0x40)
  FUNC_1(VAR_3, VAR_1,
       VAR_4 & 0xBF);
}
