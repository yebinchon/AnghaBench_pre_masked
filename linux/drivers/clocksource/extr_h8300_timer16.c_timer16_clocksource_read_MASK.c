
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct timer16_priv {unsigned long total_cycles; } ;
struct clocksource {int dummy; } ;


 struct timer16_priv* FUNC_0 (struct clocksource*) ;
 unsigned long FUNC_1 (struct timer16_priv*) ;

__attribute__((used)) static u64 FUNC_2(struct clocksource *VAR_0)
{
 struct timer16_priv *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2, VAR_3;

 VAR_3 = VAR_1->total_cycles;
 VAR_2 = FUNC_1(VAR_1);

 return VAR_3 + VAR_2;
}
