
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_11(void)
{
 git_buf VAR_4 = VAR_0,
  VAR_5 = VAR_0,
  VAR_6 = VAR_0,
  VAR_7 = VAR_0;

 FUNC_2(FUNC_5(&VAR_4, FUNC_7(VAR_2), "MERGE_HEAD"));
 FUNC_1(FUNC_3(&VAR_4), "beefbeefbeefbeefbeefbeefbeefbeefbeefbeef\n");

 FUNC_2(FUNC_5(&VAR_5, FUNC_7(VAR_2), "MERGE_MSG"));
 FUNC_1(FUNC_3(&VAR_5), "Merge commit 0017bd4ab1ec30440b17bae1680cff124ab5f1f6\n");

 FUNC_2(FUNC_5(&VAR_6, FUNC_7(VAR_2), "MERGE_MODE"));
 FUNC_1(FUNC_3(&VAR_6), "");

 FUNC_2(FUNC_5(&VAR_7, FUNC_7(VAR_2), "ORIG_HEAD"));
 FUNC_1(FUNC_3(&VAR_7), "0017bd4ab1ec30440b17bae1680cff124ab5f1f6");

 FUNC_2(FUNC_9(&VAR_3, VAR_2, "0017bd4"));
 FUNC_2(FUNC_8(VAR_2, VAR_3, VAR_1, ((void*)0)));

 FUNC_0(!FUNC_6(FUNC_3(&VAR_4)));
 FUNC_0(!FUNC_6(FUNC_3(&VAR_5)));
 FUNC_0(!FUNC_6(FUNC_3(&VAR_6)));

 FUNC_0(FUNC_6(FUNC_3(&VAR_7)));
 FUNC_2(FUNC_10(FUNC_3(&VAR_7)));

 FUNC_4(&VAR_4);
 FUNC_4(&VAR_5);
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
}
