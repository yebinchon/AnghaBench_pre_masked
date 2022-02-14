
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int * buf; int flags; } ;
struct hdmi {int i2c; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct hdmi *VAR_2, u16 VAR_3, u8 VAR_4,
 u8 *VAR_5, u16 VAR_6)
{
 int VAR_7;
 int VAR_8 = 5;
 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_3 >> 1,
   .flags = 0,
   .len = 1,
   .buf = &VAR_4,
  }, {
   .addr = VAR_3 >> 1,
   .flags = VAR_1,
   .len = VAR_6,
   .buf = VAR_5,
  }
 };

 FUNC_0("Start DDC read");
retry:
 VAR_7 = FUNC_1(VAR_2->i2c, VAR_9, 2);

 VAR_8--;
 if (VAR_7 == 2)
  VAR_7 = 0;
 else if (VAR_8 > 0)
  goto retry;
 else
  VAR_7 = -VAR_0;

 FUNC_0("End DDC read %d", VAR_7);

 return VAR_7;
}
