
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config ;
struct TYPE_4__ {int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int **,int *) ;

void FUNC_9(void)
{
 git_repository *VAR_0;
 git_config *VAR_1;
 git_buf VAR_2 = {0};

 VAR_0 = FUNC_3("testrepo.git");
 FUNC_1(FUNC_8(&VAR_1, VAR_0));

 FUNC_1(FUNC_7(VAR_1, "core.somevar", ""));
 FUNC_1(FUNC_6(&VAR_2, VAR_1, "core.somevar"));
 FUNC_0("", VAR_2.ptr);

 FUNC_4(&VAR_2);
 FUNC_5(VAR_1);
 FUNC_2();
}
