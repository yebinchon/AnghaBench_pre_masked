
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_piix4_adapdata {int port; scalar_t__ smba; } ;
struct i2c_adapter {int port; scalar_t__ smba; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_piix4_adapdata*) ;
 struct i2c_piix4_adapdata* FUNC_1 (struct i2c_piix4_adapdata*) ;
 int FUNC_2 (struct i2c_piix4_adapdata*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_2)
{
 struct i2c_piix4_adapdata *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->smba) {
  FUNC_0(VAR_2);
  if (VAR_3->port == (0 << VAR_1))
   FUNC_3(VAR_3->smba, VAR_0);
  FUNC_2(VAR_3);
  FUNC_2(VAR_2);
 }
}
