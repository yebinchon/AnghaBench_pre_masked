
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uniphier_fi2c_priv {unsigned int clk_cycle; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uniphier_fi2c_priv*) ;
 int FUNC_2 (struct uniphier_fi2c_priv*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uniphier_fi2c_priv *VAR_6)
{
 unsigned int VAR_7 = VAR_6->clk_cycle;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6->membase + VAR_0);
 VAR_8 |= VAR_1;
 FUNC_3(VAR_8, VAR_6->membase + VAR_0);

 FUNC_2(VAR_6);





 FUNC_3(VAR_7, VAR_6->membase + VAR_2);





 FUNC_3(VAR_7 * 5 / 9, VAR_6->membase + VAR_4);




 FUNC_3(VAR_7 / 2, VAR_6->membase + VAR_5);




 FUNC_3(VAR_7 / 16, VAR_6->membase + VAR_3);

 FUNC_1(VAR_6);
}
