
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct asb100_data {int vrm; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct asb100_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_1)
{
 struct asb100_data *VAR_2 = FUNC_2(VAR_1);

 VAR_2->vrm = FUNC_3();


 FUNC_1(VAR_1, VAR_0,
  (FUNC_0(VAR_1, VAR_0) & 0xf7) | 0x01);
}
