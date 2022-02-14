
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_fi2c_priv {scalar_t__ membase; int enabled_irqs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uniphier_fi2c_priv*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uniphier_fi2c_priv *VAR_4)
{
 VAR_4->enabled_irqs |= VAR_3;
 FUNC_0(VAR_4);
 FUNC_1(VAR_1 | VAR_2,
        VAR_4->membase + VAR_0);
}
