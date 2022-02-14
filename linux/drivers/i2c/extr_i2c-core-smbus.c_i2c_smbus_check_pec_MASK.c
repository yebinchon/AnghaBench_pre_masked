
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {size_t len; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(u8 VAR_1, struct i2c_msg *VAR_2)
{
 u8 VAR_3 = VAR_2->buf[--VAR_2->len];
 VAR_1 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 != VAR_1) {
  FUNC_1("Bad PEC 0x%02x vs. 0x%02x\n",
   VAR_3, VAR_1);
  return -VAR_0;
 }
 return 0;
}
