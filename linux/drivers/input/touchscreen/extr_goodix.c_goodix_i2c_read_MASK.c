
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int * buf; int addr; scalar_t__ flags; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int __be16 ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
      u16 VAR_3, u8 *VAR_4, int VAR_5)
{
 struct i2c_msg VAR_6[2];
 __be16 VAR_7 = FUNC_1(VAR_3);
 int VAR_8;

 VAR_6[0].flags = 0;
 VAR_6[0].addr = VAR_2->addr;
 VAR_6[0].len = 2;
 VAR_6[0].buf = (u8 *)&VAR_7;

 VAR_6[1].flags = VAR_1;
 VAR_6[1].addr = VAR_2->addr;
 VAR_6[1].len = VAR_5;
 VAR_6[1].buf = VAR_4;

 VAR_8 = FUNC_2(VAR_2->adapter, VAR_6, 2);
 return VAR_8 < 0 ? VAR_8 : (VAR_8 != FUNC_0(VAR_6) ? -VAR_0 : 0);
}
