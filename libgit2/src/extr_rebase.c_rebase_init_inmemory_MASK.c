
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_3__ {int last_commit; } ;
typedef TYPE_1__ git_rebase ;
typedef int git_annotated_commit ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(
 git_rebase *VAR_0,
 git_repository *VAR_1,
 const git_annotated_commit *VAR_2,
 const git_annotated_commit *VAR_3,
 const git_annotated_commit *VAR_4)
{
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 return FUNC_2(
  &VAR_0->last_commit, VAR_1, FUNC_1(VAR_4));
}
