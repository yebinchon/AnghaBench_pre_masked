
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer16_priv {int cs_enabled; scalar_t__ mapcommon; int enb; int ovie; scalar_t__ mapbase; scalar_t__ total_cycles; } ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct timer16_priv* FUNC_2 (struct clocksource*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clocksource *VAR_4)
{
 struct timer16_priv *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_5->cs_enabled);

 VAR_5->total_cycles = 0;
 FUNC_3(0x0000, VAR_5->mapbase + VAR_0);
 FUNC_4(0x83, VAR_5->mapbase + VAR_1);
 FUNC_1(VAR_5->ovie, VAR_5->mapcommon + VAR_2);
 FUNC_1(VAR_5->enb, VAR_5->mapcommon + VAR_3);

 VAR_5->cs_enabled = 1;
 return 0;
}
