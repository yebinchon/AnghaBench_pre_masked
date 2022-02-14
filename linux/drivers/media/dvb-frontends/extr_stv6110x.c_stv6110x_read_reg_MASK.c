
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv6110x_state {int i2c; struct stv6110x_config* config; } ;
struct stv6110x_config {int addr; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct stv6110x_state *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 int VAR_6;
 const struct stv6110x_config *VAR_7 = VAR_3->config;
 u8 VAR_8[] = { VAR_4 };
 u8 VAR_9[] = { 0 };
 struct i2c_msg VAR_10[] = {
  { .addr = VAR_7->addr, .flags = 0, .buf = VAR_8, .len = 1 },
  { .addr = VAR_7->addr, .flags = VAR_2, .buf = VAR_9, .len = 1 }
 };

 VAR_6 = FUNC_1(VAR_3->i2c, VAR_10, 2);
 if (VAR_6 != 2) {
  FUNC_0(VAR_1, 1, "I/O Error");
  return -VAR_0;
 }
 *VAR_5 = VAR_9[0];

 return 0;
}
