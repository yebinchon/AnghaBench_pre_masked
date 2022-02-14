
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int git_repository ;
struct TYPE_3__ {int flags; int mode; int * path; int * repo; int member_0; } ;
typedef TYPE_1__ git_filter_source ;
typedef int git_filter_mode_t ;
typedef int git_filter_list ;


 int FUNC_0 (int **,TYPE_1__*) ;

int FUNC_1(
 git_filter_list **VAR_0,
 git_repository *VAR_1,
 git_filter_mode_t VAR_2,
 uint32_t VAR_3)
{
 git_filter_source VAR_4 = { 0 };
 VAR_4.repo = VAR_1;
 VAR_4.path = ((void*)0);
 VAR_4.mode = VAR_2;
 VAR_4.flags = VAR_3;
 return FUNC_0(VAR_0, &VAR_4);
}
