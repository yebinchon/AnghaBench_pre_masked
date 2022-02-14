
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
struct TYPE_4__ {int bare; int remote_cb; } ;
typedef TYPE_1__ git_clone_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **,int ,char*,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

void FUNC_11(void)
{
 git_clone_options VAR_3 = VAR_0;
 git_repository *VAR_4;
 git_reference *VAR_5;

 VAR_3.bare = 1;
 VAR_3.remote_cb = VAR_2;
 FUNC_4(FUNC_5(&VAR_4, FUNC_3("testrepo.git"), "./foo.git", &VAR_3));

 FUNC_4(FUNC_7(&VAR_5, VAR_4, "HEAD"));
 FUNC_0(VAR_1, FUNC_9(VAR_5));
 FUNC_1("refs/heads/master", FUNC_8(VAR_5));

 FUNC_6(VAR_5);
 FUNC_4(FUNC_7(&VAR_5, VAR_4, "refs/remotes/test/master"));

 FUNC_6(VAR_5);
 FUNC_10(VAR_4);
 FUNC_2("./foo.git");
}
