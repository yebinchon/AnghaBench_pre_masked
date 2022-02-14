
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct expire_reflog_policy_cb {scalar_t__ mark_limit; scalar_t__ mark_list; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct object_id*) ;
 struct commit* FUNC_1 (int ,struct object_id*,int) ;
 int FUNC_2 (struct expire_reflog_policy_cb*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct expire_reflog_policy_cb *VAR_2, struct commit *VAR_3, struct object_id *VAR_4)
{




 if (!VAR_3) {
  if (FUNC_0(VAR_4))
   return 0;

  VAR_3 = FUNC_1(VAR_1, VAR_4,
       1);


  if (!VAR_3)
   return 0;
 }


 if (VAR_3->object.flags & VAR_0)
  return 0;

 if (VAR_2->mark_list && VAR_2->mark_limit) {
  VAR_2->mark_limit = 0;
  FUNC_2(VAR_2);
 }

 return !(VAR_3->object.flags & VAR_0);
}
