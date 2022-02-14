
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct jz4780_i2c {TYPE_1__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,unsigned char,unsigned short) ;
 unsigned short FUNC_1 (struct jz4780_i2c*,int ) ;
 int FUNC_2 (struct jz4780_i2c*,int ,unsigned char) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct jz4780_i2c *VAR_5, unsigned char VAR_6)
{
 unsigned short VAR_7;
 unsigned long VAR_8 = 5;

 do {
  VAR_7 = FUNC_1(VAR_5, VAR_1);
  if ((VAR_7 & VAR_3) &&
      !(VAR_7 & VAR_2))
   break;

  FUNC_3(5000, 15000);
 } while (--VAR_8);

 if (VAR_8) {
  FUNC_2(VAR_5, VAR_4, VAR_6);
  return 0;
 }

 FUNC_0(&VAR_5->adap.dev,
  "set device to address 0x%02x failed, STA=0x%04x\n",
  VAR_6, VAR_7);

 return -VAR_0;
}
