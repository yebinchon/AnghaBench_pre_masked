
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * repo; } ;
typedef TYPE_1__ tag_state ;
typedef int git_tag ;
typedef int git_repository ;
typedef int git_object ;
typedef int git_commit ;




 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*) ;
 int FUNC_4 (int *,char const*,TYPE_1__*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0, tag_state *VAR_1)
{
 git_repository *VAR_2 = VAR_1->repo;
 git_object *VAR_3;

 FUNC_0(FUNC_3(&VAR_3, VAR_2, VAR_0),
   "Failed to lookup rev", VAR_0);

 switch (FUNC_2(VAR_3)) {
  case 128:
   FUNC_6((git_tag *) VAR_3, VAR_1);
   break;
  case 129:
   FUNC_4((git_commit *) VAR_3, VAR_0, VAR_1);
   break;
  default:
   FUNC_5(VAR_0);
 }

 FUNC_1(VAR_3);
 return 0;
}
