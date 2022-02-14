
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int dev; scalar_t__ regs; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned long,int) ;

__attribute__((used)) static void FUNC_7(struct s3c24xx_i2c *VAR_3)
{
 unsigned long VAR_4;
 ktime_t VAR_5, VAR_6;
 unsigned long VAR_7;
 int VAR_8;



 FUNC_1(VAR_3->dev, "waiting for bus idle\n");

 VAR_5 = VAR_6 = FUNC_3();
 VAR_8 = 3;
 VAR_4 = FUNC_5(VAR_3->regs + VAR_1);
 while ((VAR_4 & VAR_2) && --VAR_8) {
  FUNC_0();
  VAR_4 = FUNC_5(VAR_3->regs + VAR_1);
 }
 VAR_7 = 1;
 while ((VAR_4 & VAR_2) &&
        FUNC_4(VAR_6, VAR_5) < VAR_0) {
  FUNC_6(VAR_7, 2 * VAR_7);
  if (VAR_7 < VAR_0 / 10)
   VAR_7 <<= 1;
  VAR_6 = FUNC_3();
  VAR_4 = FUNC_5(VAR_3->regs + VAR_1);
 }

 if (VAR_4 & VAR_2)
  FUNC_2(VAR_3->dev, "timeout waiting for bus idle\n");
}
