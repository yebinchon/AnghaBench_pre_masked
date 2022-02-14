
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct zx2967_i2c {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct zx2967_i2c*,int ) ;
 int FUNC_1 (struct zx2967_i2c*,int,int ) ;
 int FUNC_2 (struct zx2967_i2c*,int ) ;

__attribute__((used)) static void
FUNC_3(struct zx2967_i2c *VAR_6, u16 VAR_7,
     char VAR_8, u8 VAR_9, int VAR_10,
     union i2c_smbus_data *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_0(VAR_6, VAR_5);
 VAR_12 |= VAR_0;
 FUNC_1(VAR_6, VAR_12, VAR_5);
 FUNC_2(VAR_6, VAR_7);
 VAR_12 = FUNC_0(VAR_6, VAR_3);
 VAR_12 &= ~VAR_1;
 FUNC_1(VAR_6, VAR_12, VAR_3);

 switch (VAR_10) {
 case 130:
  FUNC_1(VAR_6, VAR_9, VAR_4);
  break;
 case 129:
  FUNC_1(VAR_6, VAR_9, VAR_4);
  if (VAR_8 == VAR_2)
   FUNC_1(VAR_6, VAR_11->byte, VAR_4);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_9, VAR_4);
  if (VAR_8 == VAR_2) {
   FUNC_1(VAR_6, (VAR_11->word >> 8), VAR_4);
   FUNC_1(VAR_6, (VAR_11->word & 0xff),
       VAR_4);
  }
  break;
 }
}
