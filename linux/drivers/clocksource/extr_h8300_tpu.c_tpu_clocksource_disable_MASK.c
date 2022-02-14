
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpu_priv {int cs_enabled; scalar_t__ mapbase2; scalar_t__ mapbase1; } ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct tpu_priv* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_1)
{
 struct tpu_priv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(!VAR_2->cs_enabled);

 FUNC_2(0, VAR_2->mapbase1 + VAR_0);
 FUNC_2(0, VAR_2->mapbase2 + VAR_0);
 VAR_2->cs_enabled = 0;
}
