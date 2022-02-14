
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uniphier_fi2c_priv {scalar_t__ membase; int enabled_irqs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct uniphier_fi2c_priv*,int) ;
 int FUNC_1 (struct uniphier_fi2c_priv*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uniphier_fi2c_priv *VAR_4, u16 VAR_5,
      bool VAR_6)
{
 VAR_4->enabled_irqs |= VAR_2;
 FUNC_1(VAR_4);


 FUNC_2(0, VAR_4->membase + VAR_3);

 FUNC_2(VAR_1 | VAR_5 << 1,
        VAR_4->membase + VAR_0);




 if (!VAR_6)
  FUNC_0(VAR_4, 1);
}
