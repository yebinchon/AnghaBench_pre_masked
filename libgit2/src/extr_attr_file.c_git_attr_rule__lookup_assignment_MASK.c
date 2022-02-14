
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int assigns; } ;
typedef TYPE_1__ git_attr_rule ;
struct TYPE_6__ {char const* name; int name_hash; } ;
typedef TYPE_2__ git_attr_name ;
typedef int git_attr_assignment ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (size_t*,int *,TYPE_2__*) ;
 int * FUNC_2 (int *,size_t) ;

git_attr_assignment *FUNC_3(
 git_attr_rule *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 git_attr_name VAR_3;
 VAR_3.name = VAR_1;
 VAR_3.name_hash = FUNC_0(VAR_1);

 if (FUNC_1(&VAR_2, &VAR_0->assigns, &VAR_3))
  return ((void*)0);

 return FUNC_2(&VAR_0->assigns, VAR_2);
}
