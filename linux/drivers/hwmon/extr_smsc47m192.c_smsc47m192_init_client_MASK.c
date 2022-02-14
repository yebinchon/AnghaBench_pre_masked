
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_4)
{
 int VAR_5;
 u8 VAR_6 = FUNC_2(VAR_4, VAR_0);
 u8 VAR_7 = FUNC_2(VAR_4, VAR_1);


 FUNC_3(VAR_4, VAR_1,
      (VAR_7 & 0xfd) | 0x02);
 if (!(VAR_6 & 0x01)) {

  for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
   FUNC_3(VAR_4,
    FUNC_1(VAR_5), 0);
   FUNC_3(VAR_4,
    FUNC_0(VAR_5), 0xff);
  }
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   FUNC_3(VAR_4,
    VAR_3[VAR_5], 0x80);
   FUNC_3(VAR_4,
    VAR_2[VAR_5], 0x7f);
  }


  FUNC_3(VAR_4, VAR_0,
      (VAR_6 & 0xf7) | 0x01);
 }
}
