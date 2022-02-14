
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct or51211_state {int i2c; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct or51211_state *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct i2c_msg VAR_7;
 VAR_7.addr = VAR_3;
 VAR_7.flags = VAR_1;
 VAR_7.len = VAR_5;
 VAR_7.buf = VAR_4;

 if ((VAR_6 = FUNC_0 (VAR_2->i2c, &VAR_7, 1)) != 1) {
  FUNC_1("error (addr %02x, err == %i)\n", VAR_3, VAR_6);
  return -VAR_0;
 }

 return 0;
}
