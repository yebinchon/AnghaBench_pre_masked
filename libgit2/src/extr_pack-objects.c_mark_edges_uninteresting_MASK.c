
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int repo; } ;
typedef TYPE_2__ git_packbuilder ;
struct TYPE_9__ {TYPE_1__* item; struct TYPE_9__* next; } ;
typedef TYPE_3__ git_commit_list ;
typedef int git_commit ;
struct TYPE_7__ {int oid; int uninteresting; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(git_packbuilder *VAR_0, git_commit_list *VAR_1)
{
 int VAR_2;
 git_commit_list *VAR_3;
 git_commit *VAR_4;

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (!VAR_3->item->uninteresting)
   continue;

  if ((VAR_2 = FUNC_1(&VAR_4, VAR_0->repo, &VAR_3->item->oid)) < 0)
   return VAR_2;

  VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_4));
  FUNC_0(VAR_4);

  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
