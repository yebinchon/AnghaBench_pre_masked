
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_status_list ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_diff ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int *,char*,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int **,int *,char*,int *,int,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int *) ;
 int FUNC_16 (int **,char*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,char*,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int *,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int **,int *,int *) ;
 int FUNC_24 (char*,int) ;

void FUNC_25(void)
{
 git_repository *VAR_0;
 git_status_list *VAR_1;
 git_diff *VAR_2;
 git_index *VAR_3;
 git_tree *VAR_4;

 FUNC_2(FUNC_16(&VAR_0, "mixed-submodule", 0));
 FUNC_1("mixed-submodule/.gitmodules", "[submodule \"sub\"]\n path = sub\n url = ../foo\n");
 FUNC_2(FUNC_24("mixed-submodule/sub", 0777));
 FUNC_1("mixed-submodule/sub/file", "");


 {
  git_oid VAR_5, VAR_6;
  git_signature *VAR_7;
  git_reference *VAR_8;

  FUNC_2(FUNC_15(&VAR_3, VAR_0));
  FUNC_2(FUNC_8(VAR_3, ".gitmodules"));
  FUNC_2(FUNC_8(VAR_3, "sub/file"));
  FUNC_2(FUNC_10(VAR_3));
  FUNC_2(FUNC_11(&VAR_5, VAR_3));
  FUNC_2(FUNC_18(&VAR_7, "Sloppy Submoduler", "sloppy@example.com"));
  FUNC_2(FUNC_23(&VAR_4, VAR_0, &VAR_5));
  FUNC_2(FUNC_3(&VAR_6, VAR_0, ((void*)0), VAR_7, VAR_7, ((void*)0), "message", VAR_4, 0, ((void*)0)));
  FUNC_2(FUNC_12(&VAR_8, VAR_0, "refs/heads/master", &VAR_6, 1, "commit: foo"));
  FUNC_13(VAR_8);
  FUNC_17(VAR_7);
 }

 FUNC_2(FUNC_7(&VAR_2, VAR_0, VAR_4, VAR_3, ((void*)0)));
 FUNC_0(0, FUNC_6(VAR_2));
 FUNC_4(VAR_2);

 FUNC_2(FUNC_5(&VAR_2, VAR_0, VAR_3, ((void*)0)));
 FUNC_0(0, FUNC_6(VAR_2));
 FUNC_4(VAR_2);

 FUNC_2(FUNC_21(&VAR_1, VAR_0, ((void*)0)));
 FUNC_0(0, FUNC_19(VAR_1));

 FUNC_20(VAR_1);
 FUNC_9(VAR_3);
 FUNC_22(VAR_4);
 FUNC_14(VAR_0);
}
