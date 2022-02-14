
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,char*,int *,int *,int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ,int *) ;

void FUNC_18(void)
{
 git_index *VAR_3;

 FUNC_2(&VAR_2, "committed");


 FUNC_1(FUNC_13(&VAR_1, "committed", 0));


 FUNC_1(FUNC_12(&VAR_3, VAR_1));
 FUNC_0("committed/file.txt", "some stuff\n");


 FUNC_1(FUNC_7(VAR_3, "file.txt"));
 FUNC_1(FUNC_9(VAR_3));







 {
  git_config *VAR_4, *VAR_5;
  FUNC_1(FUNC_11(&VAR_4, VAR_1));
  FUNC_1(FUNC_5(&VAR_5, VAR_4, VAR_0));
  FUNC_1(FUNC_6(VAR_5, "user.name", "Test User"));
  FUNC_1(FUNC_6(VAR_5, "user.email", "t@example.com"));
  FUNC_4(VAR_5);
  FUNC_4(VAR_4);
 }


 {
  git_signature *VAR_6;
  git_oid VAR_7, VAR_8;
  git_tree *VAR_9;

  FUNC_1(FUNC_14(&VAR_6, VAR_1));
  FUNC_1(FUNC_10(&VAR_7, VAR_3));
  FUNC_1(FUNC_17(&VAR_9, VAR_1, &VAR_7));

  FUNC_1(FUNC_3(
   &VAR_8, VAR_1, "HEAD", VAR_6, VAR_6,
   ((void*)0), "First", VAR_9, 0));

  FUNC_16(VAR_9);
  FUNC_15(VAR_6);
 }

 FUNC_8(VAR_3);
}
