
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ expire_total; scalar_t__ expire_unreachable; scalar_t__ recno; scalar_t__ stalefix; } ;
struct expire_reflog_policy_cb {scalar_t__ unreachable_expire_kind; TYPE_1__ cmd; } ;
struct commit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct commit**,struct object_id*) ;
 scalar_t__ FUNC_1 (struct expire_reflog_policy_cb*,struct commit*,struct object_id*) ;

__attribute__((used)) static int FUNC_2(struct object_id *VAR_1, struct object_id *VAR_2,
        const char *VAR_3, timestamp_t VAR_4, int VAR_5,
        const char *VAR_6, void *VAR_7)
{
 struct expire_reflog_policy_cb *VAR_8 = VAR_7;
 struct commit *VAR_9, *VAR_10;

 if (VAR_4 < VAR_8->cmd.expire_total)
  return 1;

 VAR_9 = VAR_10 = ((void*)0);
 if (VAR_8->cmd.stalefix &&
     (!FUNC_0(&VAR_9, VAR_1) || !FUNC_0(&VAR_10, VAR_2)))
  return 1;

 if (VAR_4 < VAR_8->cmd.expire_unreachable) {
  if (VAR_8->unreachable_expire_kind == VAR_0)
   return 1;
  if (FUNC_1(VAR_8, VAR_9, VAR_1) || FUNC_1(VAR_8, VAR_10, VAR_2))
   return 1;
 }

 if (VAR_8->cmd.recno && --(VAR_8->cmd.recno) == 0)
  return 1;

 return 0;
}
