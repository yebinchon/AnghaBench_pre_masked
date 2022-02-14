
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ datatype; int matches; } ;
typedef TYPE_1__ git_pathspec_match_list ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;

const char *FUNC_2(
 const git_pathspec_match_list *VAR_1, size_t VAR_2)
{
 if (!VAR_1 || VAR_1->datatype != VAR_0 ||
  !FUNC_1(VAR_1->matches, VAR_2))
  return ((void*)0);

 return *((const char **)FUNC_0(VAR_1->matches, VAR_2));
}
