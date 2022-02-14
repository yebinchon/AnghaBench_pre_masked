
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct drxk_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*,struct i2c_msg*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct drxk_state *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6;
 struct i2c_msg VAR_7 = {
     .addr = VAR_3, .flags = 0, .buf = VAR_4, .len = VAR_5 };

 FUNC_0(3, ":");
 if (VAR_1 > 2) {
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
   FUNC_2(" %02x", VAR_4[VAR_8]);
  FUNC_2("\n");
 }
 VAR_6 = FUNC_1(VAR_2, &VAR_7, 1);
 if (VAR_6 >= 0 && VAR_6 != 1)
  VAR_6 = -VAR_0;

 if (VAR_6 < 0)
  FUNC_3("i2c write error at addr 0x%02x\n", VAR_3);

 return VAR_6;
}
