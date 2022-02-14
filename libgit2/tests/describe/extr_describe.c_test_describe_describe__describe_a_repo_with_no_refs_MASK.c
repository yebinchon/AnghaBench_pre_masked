
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_object ;
typedef int git_describe_result ;
struct TYPE_4__ {int show_commit_oid_as_fallback; } ;
typedef TYPE_1__ git_describe_options ;
typedef int git_buf ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int **,int *,char*) ;

void FUNC_10(void)
{
 git_repository *VAR_3;
 git_describe_options VAR_4 = VAR_1;
 git_buf VAR_5 = VAR_0;
 git_object *VAR_6;
 git_describe_result *VAR_7 = ((void*)0);

 VAR_3 = FUNC_3("testrepo.git");
 FUNC_1(FUNC_9(&VAR_6, VAR_3, "HEAD"));

 FUNC_1(FUNC_8(VAR_3, VAR_2, ((void*)0)));


 FUNC_0(FUNC_5(&VAR_7, VAR_6, &VAR_4));


 VAR_4.show_commit_oid_as_fallback = 1;
 FUNC_1(FUNC_5(&VAR_7, VAR_6, &VAR_4));

 FUNC_6(VAR_7);
 FUNC_7(VAR_6);
 FUNC_4(&VAR_5);
 FUNC_2();
}
