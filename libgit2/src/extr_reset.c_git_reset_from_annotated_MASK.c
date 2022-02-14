
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_reset_t ;
typedef int git_repository ;
typedef int git_object ;
typedef int git_checkout_options ;
struct TYPE_3__ {int description; scalar_t__ commit; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (int *,int *,int ,int ,int const*) ;

int FUNC_1(
 git_repository *VAR_0,
 const git_annotated_commit *VAR_1,
 git_reset_t VAR_2,
 const git_checkout_options *VAR_3)
{
 return FUNC_0(VAR_0, (git_object *) VAR_1->commit, VAR_1->description, VAR_2, VAR_3);
}
