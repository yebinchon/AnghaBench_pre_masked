
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * branch; int * repo; int fetch_recurse_default; int fetch_recurse; int update_default; int update; int ignore_default; int ignore; int name; int path; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
 git_submodule **VAR_4, git_repository *VAR_5, const char *VAR_6)
{
 size_t VAR_7;
 git_submodule *VAR_8;

 if (!VAR_6 || !(VAR_7 = FUNC_6(VAR_6))) {
  FUNC_5(VAR_0, "invalid submodule name");
  return -1;
 }

 VAR_8 = FUNC_2(1, sizeof(git_submodule));
 FUNC_0(VAR_8);

 VAR_8->name = VAR_8->path = FUNC_4(VAR_6);
 if (!VAR_8->name) {
  FUNC_3(VAR_8);
  return -1;
 }

 FUNC_1(VAR_8);
 VAR_8->ignore = VAR_8->ignore_default = VAR_1;
 VAR_8->update = VAR_8->update_default = VAR_3;
 VAR_8->fetch_recurse = VAR_8->fetch_recurse_default = VAR_2;
 VAR_8->repo = VAR_5;
 VAR_8->branch = ((void*)0);

 *VAR_4 = VAR_8;
 return 0;
}
