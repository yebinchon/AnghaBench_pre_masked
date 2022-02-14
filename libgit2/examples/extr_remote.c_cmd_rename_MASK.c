
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct opts {int argc; char** argv; } ;
struct TYPE_4__ {int * strings; scalar_t__ count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;


 int FUNC_0 (TYPE_1__*,int *,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_0, struct opts *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4, *VAR_5;
 git_strarray VAR_6 = {0};

 if (VAR_1->argc != 2)
  FUNC_3("you need to specify old and new remote name", ((void*)0));

 VAR_4 = VAR_1->argv[0];
 VAR_5 = VAR_1->argv[1];

 VAR_3 = FUNC_0(&VAR_6, VAR_0, VAR_4, VAR_5);
 if (!VAR_3)
  return 0;

 for (VAR_2 = 0; VAR_2 < (int) VAR_6.count; VAR_2++) {
  FUNC_2(VAR_6.strings[0]);
 }

 FUNC_1(&VAR_6);

 return VAR_3;
}
