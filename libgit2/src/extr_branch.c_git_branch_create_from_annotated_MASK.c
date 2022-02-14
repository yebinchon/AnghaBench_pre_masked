
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_3__ {int description; int commit; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (int **,int *,char const*,int ,int ,int) ;

int FUNC_1(
 git_reference **VAR_0,
 git_repository *VAR_1,
 const char *VAR_2,
 const git_annotated_commit *VAR_3,
 int VAR_4)
{
 return FUNC_0(VAR_0,
  VAR_1, VAR_2, VAR_3->commit, VAR_3->description, VAR_4);
}
