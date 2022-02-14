
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int entry_count; } ;
typedef TYPE_1__ git_tree_cache ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;

void FUNC_2(git_tree_cache *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1, *VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 VAR_0->entry_count = -1;

 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, '/');

  if (VAR_3 == ((void*)0))
   break;

  VAR_0 = FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_0 == ((void*)0))
   return;

  VAR_0->entry_count = -1;
  VAR_2 = VAR_3 + 1;
 }
}
