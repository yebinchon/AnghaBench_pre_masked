
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static bool FUNC_3(struct s3c24xx_i2c *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 50; VAR_5; --VAR_5) {
  if (FUNC_1(VAR_4->regs + VAR_0)
   & VAR_1) {
   if (!(FUNC_1(VAR_4->regs + VAR_2)
    & VAR_3))
    return 1;
  }
  FUNC_2(1000, 2000);
 }
 FUNC_0(VAR_4->dev, "ack was not received\n");
 return 0;
}
