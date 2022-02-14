
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int action; } ;
typedef enum replay_action { ____Placeholder_replay_action } replay_action ;


 int FUNC_0 (char*) ;


 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct repository*) ;
 int FUNC_6 (struct repository*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct repository*,struct replay_opts*) ;
 int FUNC_11 (struct repository*,int*) ;
 scalar_t__ FUNC_12 () ;

int FUNC_13(struct repository *VAR_1, struct replay_opts *VAR_2)
{
 enum replay_action VAR_3 = -1;
 FUNC_11(VAR_1, &VAR_3);
 switch (VAR_2->action) {
 case 128:
  if (!FUNC_4(FUNC_6(VAR_1))) {
   if (VAR_3 != 128)
    return FUNC_3(FUNC_1("no revert in progress"));
   if (!FUNC_9())
    goto give_advice;
  }
  break;
 case 129:
  if (!FUNC_4(FUNC_5(VAR_1))) {
   if (VAR_3 != 129)
    return FUNC_3(FUNC_1("no cherry-pick in progress"));
   if (!FUNC_9())
    goto give_advice;
  }
  break;
 default:
  FUNC_0("unexpected action in sequencer_skip");
 }

 if (FUNC_12())
  return FUNC_3(FUNC_1("failed to skip the commit"));
 if (!FUNC_8(FUNC_7()))
  return 0;

 return FUNC_10(VAR_1, VAR_2);

give_advice:
 FUNC_3(FUNC_1("there is nothing to skip"));

 if (VAR_0) {
  FUNC_2(FUNC_1("have you committed already?\n"
    "try \"git %s --continue\""),
    VAR_3 == 128 ? "revert" : "cherry-pick");
 }
 return -1;
}
