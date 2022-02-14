
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct drxk_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*,struct i2c_msg*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct drxk_state *VAR_3,
      u8 VAR_4, u8 *VAR_5, int VAR_6, u8 *VAR_7, int VAR_8)
{
 int VAR_9;
 struct i2c_msg VAR_10[2] = {
  {.addr = VAR_4, .flags = 0,
        .buf = VAR_5, .len = VAR_6},
  {.addr = VAR_4, .flags = VAR_1,
   .buf = VAR_7, .len = VAR_8}
 };

 VAR_9 = FUNC_1(VAR_3, VAR_10, 2);
 if (VAR_9 != 2) {
  if (VAR_2 > 2)
   FUNC_2(": ERROR!\n");
  if (VAR_9 >= 0)
   VAR_9 = -VAR_0;

  FUNC_3("i2c read error at addr 0x%02x\n", VAR_4);
  return VAR_9;
 }
 if (VAR_2 > 2) {
  int VAR_11;
  FUNC_0(2, ": read from");
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
   FUNC_2(" %02x", VAR_5[VAR_11]);
  FUNC_2(", value = ");
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
   FUNC_2(" %02x", VAR_7[VAR_11]);
  FUNC_2("\n");
 }
 return 0;
}
