
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct process_commit_data {TYPE_1__* revs; TYPE_2__* dst; int current_commit; int looking_for; } ;
struct object {int oid; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {int * commits; } ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,char*,char const*) ;

__attribute__((used)) static void FUNC_5(struct object *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct process_commit_data *VAR_3 = VAR_2;

 if (FUNC_2(&VAR_3->looking_for, &VAR_0->oid) && !VAR_3->dst->len) {
  FUNC_3();
  FUNC_0(&VAR_3->current_commit, VAR_3->dst);
  FUNC_4(VAR_3->dst, ":%s", VAR_1);
  FUNC_1(VAR_3->revs->commits);
  VAR_3->revs->commits = ((void*)0);
 }
}
