
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_index_reuc_entry ;
struct TYPE_7__ {int length; } ;
struct TYPE_6__ {TYPE_2__ reuc; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t*,TYPE_1__*,char const*) ;
 int const* FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*) ;

const git_index_reuc_entry *FUNC_4(
 git_index *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 FUNC_0(VAR_0 && VAR_1);

 if (!VAR_0->reuc.length)
  return ((void*)0);

 FUNC_0(FUNC_3(&VAR_0->reuc));

 if (FUNC_1(&VAR_2, VAR_0, VAR_1) < 0)
  return ((void*)0);

 return FUNC_2(&VAR_0->reuc, VAR_2);
}
