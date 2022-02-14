
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int repo; } ;
typedef TYPE_1__ git_submodule ;
typedef int git_repository ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int ,char const*) ;

__attribute__((used)) static int FUNC_2(
 git_repository **VAR_0,
 const char *VAR_1,
 int VAR_2,
 void *VAR_3)
{
 git_submodule *VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = VAR_3;

 return FUNC_1(VAR_0, VAR_4->repo, VAR_1);
}
