
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_fi2c_priv {scalar_t__ membase; int enabled_irqs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct uniphier_fi2c_priv *VAR_1)
{
 FUNC_0(VAR_1->enabled_irqs, VAR_1->membase + VAR_0);
}
