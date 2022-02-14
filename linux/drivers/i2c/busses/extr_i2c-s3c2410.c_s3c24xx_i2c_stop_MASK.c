
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int quirks; int state; scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct s3c24xx_i2c*) ;
 int FUNC_3 (struct s3c24xx_i2c*,int) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct s3c24xx_i2c *VAR_5, int VAR_6)
{
 unsigned long VAR_7 = FUNC_1(VAR_5->regs + VAR_1);

 FUNC_0(VAR_5->dev, "STOP\n");
 if (VAR_5->quirks & VAR_0) {

  VAR_7 &= ~VAR_3;
 } else {

  VAR_7 &= ~VAR_2;
 }
 FUNC_4(VAR_7, VAR_5->regs + VAR_1);

 VAR_5->state = VAR_4;

 FUNC_3(VAR_5, VAR_6);
 FUNC_2(VAR_5);
}
