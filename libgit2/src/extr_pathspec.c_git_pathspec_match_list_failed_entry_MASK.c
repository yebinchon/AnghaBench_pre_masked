
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int failures; } ;
typedef TYPE_1__ git_pathspec_match_list ;


 char** FUNC_0 (int ,size_t) ;

const char * FUNC_1(
 const git_pathspec_match_list *VAR_0, size_t VAR_1)
{
 char **VAR_2 = VAR_0 ? FUNC_0(VAR_0->failures, VAR_1) : ((void*)0);

 return VAR_2 ? *VAR_2 : ((void*)0);
}
