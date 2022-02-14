
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shallow_info {int* reachable; scalar_t__* need_reachability_test; int commits; int nr_commits; TYPE_1__* shallow; } ;
struct commit_array {int nr; int commits; } ;
struct commit {int dummy; } ;
typedef int ca ;
struct TYPE_2__ {int * oid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct commit_array*) ;
 int FUNC_1 (int ,struct commit_array*) ;
 int FUNC_2 (struct commit*,int ,int ) ;
 struct commit* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct commit_array*,int ,int) ;
 int VAR_1 ;

int FUNC_5(struct shallow_info *VAR_2, int VAR_3)
{
 if (VAR_2->need_reachability_test[VAR_3]) {
  struct commit *VAR_4 = FUNC_3(VAR_1,
            &VAR_2->shallow->oid[VAR_3]);

  if (!VAR_2->commits) {
   struct commit_array VAR_5;

   FUNC_4(&VAR_5, 0, sizeof(VAR_5));
   FUNC_1(VAR_0, &VAR_5);
   FUNC_0(VAR_0, &VAR_5);
   VAR_2->commits = VAR_5.commits;
   VAR_2->nr_commits = VAR_5.nr;
  }

  VAR_2->reachable[VAR_3] = FUNC_2(VAR_4,
             VAR_2->nr_commits,
             VAR_2->commits);
  VAR_2->need_reachability_test[VAR_3] = 0;
 }
 return VAR_2->reachable[VAR_3];
}
