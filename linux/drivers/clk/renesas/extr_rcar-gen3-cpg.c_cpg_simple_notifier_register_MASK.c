
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_notifier_head {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct cpg_simple_notifier {TYPE_1__ nb; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw_notifier_head*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct raw_notifier_head *VAR_1,
      struct cpg_simple_notifier *VAR_2)
{
 VAR_2->nb.notifier_call = VAR_0;
 FUNC_0(VAR_1, &VAR_2->nb);
}
