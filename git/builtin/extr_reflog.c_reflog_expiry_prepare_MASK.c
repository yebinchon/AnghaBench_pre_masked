
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ expire_unreachable; scalar_t__ expire_total; } ;
struct expire_reflog_policy_cb {scalar_t__ unreachable_expire_kind; scalar_t__ mark_limit; TYPE_1__ cmd; int * mark_list; int * tip_commit; struct commit_list* tips; } ;
struct commit_list {int * item; struct commit_list* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int ,struct commit_list**) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (int ,struct object_id const*,int) ;
 int FUNC_4 (struct expire_reflog_policy_cb*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(const char *VAR_5,
      const struct object_id *VAR_6,
      void *VAR_7)
{
 struct expire_reflog_policy_cb *VAR_8 = VAR_7;

 if (!VAR_8->cmd.expire_unreachable || FUNC_2(VAR_5)) {
  VAR_8->tip_commit = ((void*)0);
  VAR_8->unreachable_expire_kind = VAR_1;
 } else {
  VAR_8->tip_commit = FUNC_3(VAR_4,
        VAR_6, 1);
  if (!VAR_8->tip_commit)
   VAR_8->unreachable_expire_kind = VAR_0;
  else
   VAR_8->unreachable_expire_kind = VAR_2;
 }

 if (VAR_8->cmd.expire_unreachable <= VAR_8->cmd.expire_total)
  VAR_8->unreachable_expire_kind = VAR_0;

 VAR_8->mark_list = ((void*)0);
 VAR_8->tips = ((void*)0);
 if (VAR_8->unreachable_expire_kind != VAR_0) {
  if (VAR_8->unreachable_expire_kind == VAR_1) {
   struct commit_list *VAR_9;

   FUNC_1(VAR_3, &VAR_8->tips);
   for (VAR_9 = VAR_8->tips; VAR_9; VAR_9 = VAR_9->next)
    FUNC_0(VAR_9->item, &VAR_8->mark_list);
  } else {
   FUNC_0(VAR_8->tip_commit, &VAR_8->mark_list);
  }
  VAR_8->mark_limit = VAR_8->cmd.expire_total;
  FUNC_4(VAR_8);
 }
}
