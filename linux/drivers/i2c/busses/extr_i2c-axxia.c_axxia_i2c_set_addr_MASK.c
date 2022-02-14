
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int addr; } ;
struct axxia_i2c_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i2c_msg*) ;
 scalar_t__ FUNC_1 (struct i2c_msg*) ;
 scalar_t__ FUNC_2 (struct i2c_msg*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct axxia_i2c_dev *VAR_2, struct i2c_msg *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (FUNC_2(VAR_3)) {




  VAR_4 = 0xF0 | ((VAR_3->addr >> 7) & 0x06);
  if (FUNC_1(VAR_3))
   VAR_4 |= 1;
  VAR_5 = VAR_3->addr & 0xFF;
 } else {




  VAR_4 = FUNC_0(VAR_3);
  VAR_5 = 0;
 }

 FUNC_3(VAR_4, VAR_2->base + VAR_0);
 FUNC_3(VAR_5, VAR_2->base + VAR_1);
}
