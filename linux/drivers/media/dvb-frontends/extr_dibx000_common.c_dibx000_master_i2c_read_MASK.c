
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int* buf; int len; scalar_t__ addr; } ;
struct dibx000_i2c_master {scalar_t__ base_reg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dibx000_i2c_master*) ;
 int FUNC_1 (struct dibx000_i2c_master*,scalar_t__) ;
 int FUNC_2 (struct dibx000_i2c_master*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct dibx000_i2c_master *VAR_1, struct i2c_msg *VAR_2)
{
 u16 VAR_3;
 u8 *VAR_4 = VAR_2->buf;
 u16 VAR_5 = VAR_2->len, VAR_6;

 while (VAR_5) {
  VAR_6 = VAR_5 > 8 ? 8 : VAR_5;
  VAR_3 = (((u8) (VAR_2->addr)) << 9) |
   (1 << 8) |
   (1 << 7) |
   (0 << 6) |
   (0 << 5) |
   ((VAR_6 & 0x7) << 2) |
   (1 << 1) |
   (0 << 0);

  if (VAR_5 == VAR_2->len)
   VAR_3 |= 1 << 5;

  if (VAR_5-VAR_6 == 0)
   VAR_3 |= 1 << 6;
  FUNC_2(VAR_1, VAR_1->base_reg+1, VAR_3);

  if (FUNC_0(VAR_1) != 0)
   return -VAR_0;

  VAR_5 -= VAR_6;

  while (VAR_6) {
   VAR_3 = FUNC_1(VAR_1, VAR_1->base_reg);
   *VAR_4++ = (VAR_3 >> 8) & 0xff;
   VAR_6--;
   if (VAR_6 >= 1) {
    *VAR_4++ = VAR_3 & 0xff;
    VAR_6--;
   }
  }
 }

 return 0;
}
