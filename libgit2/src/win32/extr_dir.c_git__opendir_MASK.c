
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_win32_path ;
struct TYPE_5__ {scalar_t__ h; int first; int f; int dir; } ;
typedef TYPE_1__ git__DIR ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (int,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,size_t) ;
 size_t FUNC_7 (char const*) ;

git__DIR *FUNC_8(const char *VAR_2)
{
 git_win32_path VAR_3;
 git__DIR *VAR_4 = ((void*)0);
 size_t VAR_5, VAR_6;

 if (!VAR_2 || !FUNC_5(VAR_3, VAR_2))
  return ((void*)0);

 VAR_5 = FUNC_7(VAR_2);

 if (FUNC_1(&VAR_6, sizeof(*VAR_4), VAR_5) ||
  FUNC_1(&VAR_6, VAR_6, 1) ||
  !(VAR_4 = FUNC_2(1, VAR_6)))
  return ((void*)0);

 FUNC_6(VAR_4->dir, VAR_2, VAR_5);

 VAR_4->h = FUNC_0(VAR_3, &VAR_4->f);

 if (VAR_4->h == VAR_1) {
  FUNC_4(VAR_0, "could not open directory '%s'", VAR_2);
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_4->first = 1;
 return VAR_4;
}
