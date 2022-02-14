
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct or51211_state {int i2c; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2 (struct or51211_state* VAR_1, u8 VAR_2, const u8 *VAR_3,
      int VAR_4)
{
 int VAR_5;
 struct i2c_msg VAR_6;
 VAR_6.addr = VAR_2;
 VAR_6.flags = 0;
 VAR_6.len = VAR_4;
 VAR_6.buf = (u8 *)VAR_3;

 if ((VAR_5 = FUNC_0 (VAR_1->i2c, &VAR_6, 1)) != 1) {
  FUNC_1("error (addr %02x, err == %i)\n", VAR_2, VAR_5);
  return -VAR_0;
 }

 return 0;
}
