
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ expire_total; int recno; } ;
struct expire_reflog_policy_cb {TYPE_1__ cmd; } ;



__attribute__((used)) static int FUNC_0(struct object_id *VAR_0, struct object_id *VAR_1,
  const char *VAR_2, timestamp_t VAR_3, int VAR_4,
  const char *VAR_5, void *VAR_6)
{
 struct expire_reflog_policy_cb *VAR_7 = VAR_6;
 if (!VAR_7->cmd.expire_total || VAR_3 < VAR_7->cmd.expire_total)
  VAR_7->cmd.recno++;
 return 0;
}
