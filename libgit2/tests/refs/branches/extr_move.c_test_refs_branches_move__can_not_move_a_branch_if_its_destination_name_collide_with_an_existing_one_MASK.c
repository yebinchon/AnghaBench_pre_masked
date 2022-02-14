
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_config ;
typedef int git_buf ;
struct TYPE_2__ {int * message; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int **,int *,char*,int ) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const**,int *,char*) ;
 int FUNC_9 (int *,int *,char*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int **,int ) ;
 int VAR_2 ;

void FUNC_14(void)
{
 git_reference *VAR_3, *VAR_4;
 git_config *VAR_5;
 git_buf VAR_6 = VAR_0;
 char *VAR_7, *VAR_8;
 const char *VAR_9;

 FUNC_3(FUNC_13(&VAR_5, VAR_2));

 FUNC_3(FUNC_9(&VAR_6, VAR_5, "branch.master.remote"));
 VAR_7 = FUNC_6(&VAR_6);
 FUNC_3(FUNC_9(&VAR_6, VAR_5, "branch.master.merge"));
 VAR_8 = FUNC_6(&VAR_6);
 FUNC_7(VAR_5);

 FUNC_3(FUNC_12(&VAR_3, VAR_2, "refs/heads/br2"));

 FUNC_1(VAR_1,
  FUNC_5(&VAR_4, VAR_3, "master", 0));

 FUNC_0(FUNC_10()->message != ((void*)0));

 FUNC_3(FUNC_13(&VAR_5, VAR_2));
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.remote"));
 FUNC_2(VAR_7, VAR_9);
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.merge"));
 FUNC_2(VAR_8, VAR_9);
 FUNC_7(VAR_5);

 FUNC_1(VAR_1,
  FUNC_5(&VAR_4, VAR_3, "cannot-fetch", 0));

 FUNC_0(FUNC_10()->message != ((void*)0));

 FUNC_3(FUNC_13(&VAR_5, VAR_2));
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.remote"));
 FUNC_2(VAR_7, VAR_9);
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.merge"));
 FUNC_2(VAR_8, VAR_9);
 FUNC_7(VAR_5);

 FUNC_11(VAR_3);
 FUNC_3(FUNC_12(&VAR_3, VAR_2, "refs/heads/track-local"));

 FUNC_1(VAR_1,
  FUNC_5(&VAR_4, VAR_3, "master", 0));

 FUNC_0(FUNC_10()->message != ((void*)0));

 FUNC_3(FUNC_13(&VAR_5, VAR_2));
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.remote"));
 FUNC_2(VAR_7, VAR_9);
 FUNC_3(FUNC_8(&VAR_9, VAR_5, "branch.master.merge"));
 FUNC_2(VAR_8, VAR_9);

 FUNC_4(VAR_7); FUNC_4(VAR_8);
 FUNC_11(VAR_3);
 FUNC_7(VAR_5);
}
