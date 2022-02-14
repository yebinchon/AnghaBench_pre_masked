
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_11__ {int blob; } ;
typedef TYPE_1__ git_blame__origin ;
struct TYPE_12__ {TYPE_1__* suspect; struct TYPE_12__* next; } ;
typedef TYPE_2__ git_blame__entry ;
struct TYPE_13__ {TYPE_2__* ent; int repository; } ;
typedef TYPE_3__ git_blame ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int **,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(git_blame *VAR_1,
  git_blame__origin *VAR_2, git_blame__origin *VAR_3)
{
 git_blame__entry *VAR_4;

 if (!VAR_3->blob &&
     FUNC_1((git_object**)&VAR_3->blob, VAR_1->repository,
    FUNC_0(VAR_2->blob), VAR_0) < 0)
  return -1;
 for (VAR_4=VAR_1->ent; VAR_4; VAR_4=VAR_4->next) {
  if (!FUNC_4(VAR_4->suspect, VAR_2))
   continue;
  FUNC_3(VAR_3);
  FUNC_2(VAR_4->suspect);
  VAR_4->suspect = VAR_3;
 }

 return 0;
}
