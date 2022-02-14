
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bd2802_led {TYPE_1__* pdata; } ;
struct TYPE_2__ {int reset_gpio; } ;


 int FUNC_0 (struct bd2802_led*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bd2802_led *VAR_0)
{
 FUNC_1(VAR_0->pdata->reset_gpio, 1);
 FUNC_2(100);
 FUNC_0(VAR_0);
}
