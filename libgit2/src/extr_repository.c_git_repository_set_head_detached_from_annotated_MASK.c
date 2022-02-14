
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int description; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(
 git_repository *VAR_0,
 const git_annotated_commit *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);

 return FUNC_1(VAR_0, FUNC_2(VAR_1), VAR_1->description);
}
