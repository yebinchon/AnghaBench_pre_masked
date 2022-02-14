
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; scalar_t__ len; int addr; scalar_t__ flags; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, u16 VAR_4, const u8 *VAR_5,
       unsigned VAR_6)
{
 u8 *VAR_7;
 struct i2c_msg VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6 + 2, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7[0] = VAR_4 >> 8;
 VAR_7[1] = VAR_4 & 0xFF;
 FUNC_3(&VAR_7[2], VAR_5, VAR_6);

 VAR_8.flags = 0;
 VAR_8.addr = VAR_3->addr;
 VAR_8.buf = VAR_7;
 VAR_8.len = VAR_6 + 2;

 VAR_9 = FUNC_0(VAR_3->adapter, &VAR_8, 1);
 FUNC_1(VAR_7);
 return VAR_9 < 0 ? VAR_9 : (VAR_9 != 1 ? -VAR_0 : 0);
}
