
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notifier_call; } ;
struct pm_clk_notifier_block {TYPE_1__ nb; } ;
struct bus_type {int dummy; } ;


 int FUNC_0 (struct bus_type*,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(struct bus_type *VAR_1,
     struct pm_clk_notifier_block *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return;

 VAR_2->nb.notifier_call = VAR_0;
 FUNC_0(VAR_1, &VAR_2->nb);
}
