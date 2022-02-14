
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int odb; int * repo; int * enqueue; int * get_next; int commit_pool; int iterator_time; int commits; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7(git_revwalk **VAR_4, git_repository *VAR_5)
{
 git_revwalk *VAR_6 = FUNC_1(1, sizeof(git_revwalk));
 FUNC_0(VAR_6);

 if (FUNC_2(&VAR_6->commits) < 0)
  return -1;

 if (FUNC_4(&VAR_6->iterator_time, 0, 8, VAR_1) < 0)
  return -1;

 FUNC_3(&VAR_6->commit_pool, VAR_0);
 VAR_6->get_next = &VAR_3;
 VAR_6->enqueue = &VAR_2;

 VAR_6->repo = VAR_5;

 if (FUNC_5(&VAR_6->odb, VAR_5) < 0) {
  FUNC_6(VAR_6);
  return -1;
 }

 *VAR_4 = VAR_6;
 return 0;
}
