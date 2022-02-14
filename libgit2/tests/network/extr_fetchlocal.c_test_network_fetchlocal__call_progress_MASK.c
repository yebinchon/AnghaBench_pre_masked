
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_remote ;
struct TYPE_5__ {int* payload; int sideband_progress; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ git_fetch_options ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (int **,int *,char*,int ,char*) ;
 int FUNC_5 (int *,int *,TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,int) ;
 int VAR_2 ;

void FUNC_9(void)
{
 git_repository *VAR_3;
 git_remote *VAR_4;
 git_fetch_options VAR_5 = VAR_0;
 int VAR_6 = 0;

 FUNC_2(FUNC_8(&VAR_3, "foo.git", 1));
 FUNC_3(VAR_1, "foo.git");

 FUNC_2(FUNC_4(&VAR_4, VAR_3, "origin", FUNC_1("testrepo.git"), "+refs/heads/*:refs/heads/*"));

 VAR_5.callbacks.sideband_progress = VAR_2;
 VAR_5.callbacks.payload = &VAR_6;

 FUNC_2(FUNC_5(VAR_4, ((void*)0), &VAR_5, ((void*)0)));
 FUNC_0(VAR_6 != 0);

 FUNC_6(VAR_4);
 FUNC_7(VAR_3);
}
