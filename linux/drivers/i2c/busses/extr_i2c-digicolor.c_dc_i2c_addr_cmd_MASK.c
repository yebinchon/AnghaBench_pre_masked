
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int flags; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct i2c_msg *VAR_1)
{
 u8 VAR_2 = (VAR_1->addr & 0x7f) << 1;

 if (VAR_1->flags & VAR_0)
  VAR_2 |= 1;

 return VAR_2;
}
