
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer16_priv {int cs_enabled; scalar_t__ mapcommon; int enb; int ovie; } ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct timer16_priv* FUNC_2 (struct clocksource*) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_2)
{
 struct timer16_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(!VAR_3->cs_enabled);

 FUNC_1(VAR_3->ovie, VAR_3->mapcommon + VAR_0);
 FUNC_1(VAR_3->enb, VAR_3->mapcommon + VAR_1);

 VAR_3->cs_enabled = 0;
}
