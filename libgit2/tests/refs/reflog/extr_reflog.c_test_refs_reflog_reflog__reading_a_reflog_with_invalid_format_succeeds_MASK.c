
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char,int,int ,int ,char const*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int **,int ,char const*,int *,int,char const*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int ) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char const*) ;
 int FUNC_15 (int ) ;
 char* FUNC_16 (int ,char) ;
 int * FUNC_17 (int ,char*) ;

void FUNC_18(void)
{
 git_reflog *VAR_4;
 const char *VAR_5 = "refs/heads/newline";
 const char *VAR_6 =
  "Reflog*message with a newline and enough content after it to pass the GIT_REFLOG_SIZE_MIN check inside reflog_parse.";
 const git_reflog_entry *VAR_7;
 git_reference *VAR_8;
 git_oid VAR_9;
 git_buf VAR_10 = VAR_0, VAR_11 = VAR_0;
 char *VAR_12;


 FUNC_2(FUNC_8(&VAR_9, VAR_2));
 FUNC_2(FUNC_9(&VAR_8, VAR_3, VAR_5, &VAR_9, 1, VAR_6));





 FUNC_2(FUNC_6(&VAR_10, '/', 3, FUNC_15(VAR_3), VAR_1, VAR_5));
 FUNC_2(FUNC_7(&VAR_11, FUNC_4(&VAR_10)));
 FUNC_0((VAR_12 = FUNC_16(FUNC_4(&VAR_11), '*')) != ((void*)0));
 *VAR_12 = '\n';
 FUNC_3(FUNC_4(&VAR_10), FUNC_4(&VAR_11));





 FUNC_2(FUNC_7(&VAR_11, FUNC_4(&VAR_10)));
 FUNC_0(FUNC_17(FUNC_4(&VAR_11), "Reflog\nmessage") != ((void*)0));

 FUNC_2(FUNC_14(&VAR_4, VAR_3, VAR_5));
 FUNC_0(VAR_7 = FUNC_11(VAR_4, 0));
 FUNC_1(FUNC_12(VAR_7), "Reflog");

 FUNC_10(VAR_8);
 FUNC_13(VAR_4);
 FUNC_5(&VAR_10);
 FUNC_5(&VAR_11);
}
