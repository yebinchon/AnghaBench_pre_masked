
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int flags; int addr; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct i2c_client *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 if (!VAR_1)
  return 0;

 if (VAR_1->flags & VAR_0) {





  VAR_3 = VAR_1->addr >> 8;
  VAR_3 |= 0x78;
  if (VAR_3 == VAR_2)
   return 1;
 } else {
  VAR_3 = VAR_1->addr & 0x7f;
  if (VAR_3 == VAR_2)
   return 1;
 }

 return 0;
}
