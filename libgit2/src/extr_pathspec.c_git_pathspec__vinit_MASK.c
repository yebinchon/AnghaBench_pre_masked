
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_vector ;
struct TYPE_9__ {size_t count; char** strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_pool ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ git_attr_fnmatch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int *,char const**) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int *,size_t,int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int ,int) ;

int FUNC_7(
 git_vector *VAR_3, const git_strarray *VAR_4, git_pool *VAR_5)
{
 size_t VAR_6;

 FUNC_6(VAR_3, 0, sizeof(*VAR_3));

 if (FUNC_3(VAR_4))
  return 0;

 if (FUNC_4(VAR_3, VAR_4->count, ((void*)0)) < 0)
  return -1;

 for (VAR_6 = 0; VAR_6 < VAR_4->count; ++VAR_6) {
  int VAR_7;
  const char *VAR_8 = VAR_4->strings[VAR_6];
  git_attr_fnmatch *VAR_9 = FUNC_0(1, sizeof(git_attr_fnmatch));
  if (!VAR_9)
   return -1;

  VAR_9->flags = VAR_1 | VAR_0;

  VAR_7 = FUNC_2(VAR_9, VAR_5, ((void*)0), &VAR_8);
  if (VAR_7 == VAR_2) {
   FUNC_1(VAR_9);
   continue;
  } else if (VAR_7 < 0) {
   FUNC_1(VAR_9);
   return VAR_7;
  }

  if (FUNC_5(VAR_3, VAR_9) < 0)
   return -1;
 }

 return 0;
}
