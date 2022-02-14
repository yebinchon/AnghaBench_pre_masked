
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
struct TYPE_5__ {int email; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 TYPE_3__* FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char*) ;
 int FUNC_11 (int ,TYPE_1__*,int *,int *) ;
 char* FUNC_12 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_13 (char*,char*,char*) ;

void FUNC_14(void)
{
 char *VAR_2[] = {
  "master:remotes/sloppy/master",
 };
 git_strarray VAR_3 = {
  VAR_2,
  1,
 };

 git_reflog *VAR_4;
 const git_reflog_entry *VAR_5;
 char VAR_6[1024];

 FUNC_4(FUNC_2("testrepo.git"));

 FUNC_3(FUNC_11(VAR_0, &VAR_3, ((void*)0), ((void*)0)));

 FUNC_3(FUNC_10(&VAR_4, VAR_1, "refs/remotes/sloppy/master"));
 FUNC_0(1, FUNC_8(VAR_4));
 VAR_5 = FUNC_5(VAR_4, 0);
 FUNC_1("foo@example.com", FUNC_6(VAR_5)->email);

 FUNC_13(VAR_6, "fetch %s", FUNC_12(VAR_0));
 FUNC_1(VAR_6, FUNC_7(VAR_5));

 FUNC_9(VAR_4);
}
