
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uniphier_fi2c_priv {int len; int enabled_irqs; scalar_t__ membase; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct uniphier_fi2c_priv*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uniphier_fi2c_priv *VAR_8, u16 VAR_9)
{
 VAR_8->flags |= VAR_7;

 if (FUNC_0(VAR_8->len < 256)) {




  FUNC_2(VAR_8->len, VAR_8->membase + VAR_6);
  VAR_8->enabled_irqs |= VAR_4 |
          VAR_3;
 } else {





  FUNC_2(0, VAR_8->membase + VAR_6);
  VAR_8->flags |= VAR_5;
  VAR_8->enabled_irqs |= VAR_4;
 }

 FUNC_1(VAR_8);


 FUNC_2(VAR_1 | VAR_2 | VAR_9 << 1,
        VAR_8->membase + VAR_0);
}
