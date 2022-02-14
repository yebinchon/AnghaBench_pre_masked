
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_tag ;
struct TYPE_3__ {int pb; int repo; } ;
typedef TYPE_1__ git_push ;
typedef int git_oid ;
typedef int git_object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int **,int *) ;

__attribute__((used)) static int FUNC_6(git_object **VAR_1, git_push *VAR_2, git_oid *VAR_3)
{
 git_object *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 int VAR_6;

 if ((VAR_6 = FUNC_2(&VAR_4, VAR_2->repo, VAR_3, VAR_0)) < 0)
  return VAR_6;

 while (FUNC_3(VAR_4) == VAR_0) {
  if ((VAR_6 = FUNC_4(VAR_2->pb, FUNC_1(VAR_4), ((void*)0))) < 0)
   break;

  if ((VAR_6 = FUNC_5(&VAR_5, (git_tag *) VAR_4)) < 0)
   break;

  FUNC_0(VAR_4);
  VAR_4 = VAR_5;
 }

 if (VAR_6 < 0)
  FUNC_0(VAR_4);
 else
  *VAR_1 = VAR_4;

 return VAR_6;
}
