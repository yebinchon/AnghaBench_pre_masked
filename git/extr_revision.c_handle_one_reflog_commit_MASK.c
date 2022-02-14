
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object {int flags; } ;
struct all_refs_cb {int warned_bad_reflog; int name_for_errormsg; TYPE_1__* all_revs; int all_flags; } ;
struct TYPE_2__ {int repo; } ;


 int FUNC_0 (TYPE_1__*,struct object*,char*) ;
 int FUNC_1 (struct object_id*) ;
 struct object* FUNC_2 (int ,struct object_id*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct object_id *VAR_0, void *VAR_1)
{
 struct all_refs_cb *VAR_2 = VAR_1;
 if (!FUNC_1(VAR_0)) {
  struct object *VAR_3 = FUNC_2(VAR_2->all_revs->repo, VAR_0);
  if (VAR_3) {
   VAR_3->flags |= VAR_2->all_flags;

   FUNC_0(VAR_2->all_revs, VAR_3, "");
  }
  else if (!VAR_2->warned_bad_reflog) {
   FUNC_3("reflog of '%s' references pruned commits",
    VAR_2->name_for_errormsg);
   VAR_2->warned_bad_reflog = 1;
  }
 }
}
