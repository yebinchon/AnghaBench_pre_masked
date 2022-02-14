
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tag ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object_t ;
typedef int git_object ;
typedef int git_commit ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(git_repository *VAR_0)
{
 git_commit *VAR_1;
 git_object_t VAR_2;
 git_tag *VAR_3;
 git_oid VAR_4;
 const char *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_10("\n*Tag Parsing*\n");





 FUNC_3(&VAR_4, "b25fa35b38051e4ae45d4222e795f9df2e43f1d1");

 VAR_7 = FUNC_5(&VAR_3, VAR_0, &VAR_4);
 FUNC_0(VAR_7, "looking up tag");







 FUNC_8((git_object **)&VAR_1, VAR_3);
 VAR_5 = FUNC_7(VAR_3);
 VAR_2 = FUNC_9(VAR_3);
 VAR_6 = FUNC_6(VAR_3);
 FUNC_10("Tag Name: %s\nTag Type: %s\nTag Message: %s\n",
  VAR_5, FUNC_2(VAR_2), VAR_6);




 FUNC_1(VAR_1);
 FUNC_4(VAR_3);
}
