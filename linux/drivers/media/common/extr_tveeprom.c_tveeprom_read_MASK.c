
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_1 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ,int,int,unsigned char*,int,int) ;

int FUNC_5(struct i2c_client *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_4 = 0;
 VAR_5 = FUNC_1(VAR_1, &VAR_4, 1);
 if (VAR_5 != 1) {
  FUNC_2("Huh, no eeprom present (err=%d)?\n", VAR_5);
  return -1;
 }
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_5 != VAR_3) {
  FUNC_3("i2c eeprom read error (err=%d)\n", VAR_5);
  return -1;
 }

 FUNC_4("full 256-byte eeprom dump:", VAR_0,
        16, 1, VAR_2, VAR_3, 1);
 return 0;
}
