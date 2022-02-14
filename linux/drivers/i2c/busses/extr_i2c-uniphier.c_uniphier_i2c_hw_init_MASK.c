
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_i2c_priv {unsigned int clk_cycle; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uniphier_i2c_priv*,int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uniphier_i2c_priv *VAR_1)
{
 unsigned int VAR_2 = VAR_1->clk_cycle;

 FUNC_0(VAR_1, 1);







 FUNC_1((VAR_2 * 5 / 9 << 16) | VAR_2, VAR_1->membase + VAR_0);

 FUNC_0(VAR_1, 0);
}
