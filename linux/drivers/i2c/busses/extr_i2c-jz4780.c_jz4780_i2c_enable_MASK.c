
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
 int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned short) ;
 unsigned short FUNC_1 (struct jz4780_i2c*,int ) ;
 int FUNC_2 (struct jz4780_i2c*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct jz4780_i2c *VAR_4)
{
 unsigned short VAR_5;
 unsigned long VAR_6 = 5;

 FUNC_2(VAR_4, VAR_1, 1);

 do {
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  if (VAR_5 & VAR_2)
   return 0;

  FUNC_3(5000, 15000);
 } while (--VAR_6);

 FUNC_0(&VAR_4->adap.dev, "enable failed: ENSTA=0x%04x\n", VAR_5);
 return -VAR_0;
}
