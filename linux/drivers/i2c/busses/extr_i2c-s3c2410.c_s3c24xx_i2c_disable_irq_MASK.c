
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct s3c24xx_i2c *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_2->regs + VAR_0);
 FUNC_1(VAR_3 & ~VAR_1, VAR_2->regs + VAR_0);
}
