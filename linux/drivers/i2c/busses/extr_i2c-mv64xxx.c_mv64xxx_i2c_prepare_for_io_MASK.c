
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv64xxx_i2c_data {int cntl_bits; int addr1; int addr2; } ;
struct i2c_msg {int flags; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct mv64xxx_i2c_data *VAR_5,
 struct i2c_msg *VAR_6)
{
 u32 VAR_7 = 0;

 VAR_5->cntl_bits = VAR_2 |
  VAR_3 | VAR_4;

 if (VAR_6->flags & VAR_0)
  VAR_7 = 1;

 if (VAR_6->flags & VAR_1) {
  VAR_5->addr1 = 0xf0 | (((u32)VAR_6->addr & 0x300) >> 7) | VAR_7;
  VAR_5->addr2 = (u32)VAR_6->addr & 0xff;
 } else {
  VAR_5->addr1 = FUNC_0((u32)VAR_6->addr) | VAR_7;
  VAR_5->addr2 = 0;
 }
}
