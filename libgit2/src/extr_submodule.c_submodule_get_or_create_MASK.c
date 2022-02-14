
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_strmap ;
typedef int git_repository ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int *,char const*) ;

__attribute__((used)) static int FUNC_5(git_submodule **VAR_0, git_repository *VAR_1, git_strmap *VAR_2, const char *VAR_3)
{
 git_submodule *VAR_4 = ((void*)0);
 int VAR_5;

 if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) != ((void*)0))
  goto done;


 if ((VAR_5 = FUNC_4(&VAR_4, VAR_1, VAR_3)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_2(VAR_2, VAR_4->name, VAR_4)) < 0) {
  FUNC_3(VAR_4);
  return VAR_5;
 }

done:
 FUNC_0(VAR_4);
 *VAR_0 = VAR_4;
 return 0;
}
