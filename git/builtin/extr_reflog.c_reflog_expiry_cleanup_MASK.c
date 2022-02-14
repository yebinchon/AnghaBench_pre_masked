
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expire_reflog_policy_cb {scalar_t__ unreachable_expire_kind; int tip_commit; struct commit_list* tips; } ;
struct commit_list {int item; struct commit_list* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct commit_list*) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 struct expire_reflog_policy_cb *VAR_4 = VAR_3;

 if (VAR_4->unreachable_expire_kind != VAR_1) {
  if (VAR_4->unreachable_expire_kind == VAR_2) {
   struct commit_list *VAR_5;
   for (VAR_5 = VAR_4->tips; VAR_5; VAR_5 = VAR_5->next)
    FUNC_0(VAR_5->item, VAR_0);
   FUNC_1(VAR_4->tips);
  } else {
   FUNC_0(VAR_4->tip_commit, VAR_0);
  }
 }
}
