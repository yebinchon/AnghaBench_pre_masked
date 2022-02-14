
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc2k_i2c {scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpc2k_i2c*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct lpc2k_i2c *VAR_6 = VAR_5;

 if (FUNC_1(VAR_6->base + VAR_2) & VAR_3) {
  FUNC_0(VAR_6);
  return VAR_0;
 }

 return VAR_1;
}
