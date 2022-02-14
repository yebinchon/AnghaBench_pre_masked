
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int state; struct r5conf* raid_conf; } ;
struct r5l_log {int dummy; } ;
struct r5conf {int preread_active_stripes; struct r5l_log* log; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct r5l_log*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct stripe_head *VAR_2)
{
 struct r5conf *VAR_3 = VAR_2->raid_conf;
 struct r5l_log *VAR_4 = VAR_3->log;

 FUNC_0(!FUNC_4(VAR_4));

 FUNC_1(!FUNC_6(VAR_1, &VAR_2->state));
 FUNC_3(VAR_1, &VAR_2->state);

 if (!FUNC_5(VAR_0, &VAR_2->state))
  FUNC_2(&VAR_3->preread_active_stripes);
}
