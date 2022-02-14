
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t length; } ;
typedef TYPE_1__ git_vector ;
typedef int git_pool ;
typedef int git_pathspec_string_array_t ;
typedef int git_bitvec ;
struct TYPE_7__ {int pattern; } ;
typedef TYPE_2__ git_attr_fnmatch ;


 char** FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 char* FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,size_t) ;

__attribute__((used)) static int FUNC_4(
 git_pathspec_string_array_t *VAR_0,
 git_vector *VAR_1,
 git_bitvec *VAR_2,
 git_pool *VAR_3)
{
 size_t VAR_4;
 char **VAR_5;
 const git_attr_fnmatch *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1->length; ++VAR_4) {
  if (FUNC_1(VAR_2, VAR_4))
   continue;

  if ((VAR_5 = FUNC_0(*VAR_0)) == ((void*)0))
   return -1;

  VAR_6 = FUNC_3(VAR_1, VAR_4);

  if ((*VAR_5 = FUNC_2(VAR_3, VAR_6->pattern)) == ((void*)0))
   return -1;
 }

 return 0;
}
