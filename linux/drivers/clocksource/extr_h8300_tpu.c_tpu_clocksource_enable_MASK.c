
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpu_priv {int cs_enabled; scalar_t__ mapbase2; scalar_t__ mapbase1; } ;
struct clocksource {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct tpu_priv* FUNC_1 (struct clocksource*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clocksource *VAR_2)
{
 struct tpu_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->cs_enabled);

 FUNC_2(0, VAR_3->mapbase1 + VAR_0);
 FUNC_2(0, VAR_3->mapbase2 + VAR_0);
 FUNC_3(0x0f, VAR_3->mapbase1 + VAR_1);
 FUNC_3(0x03, VAR_3->mapbase2 + VAR_1);

 VAR_3->cs_enabled = 1;
 return 0;
}
