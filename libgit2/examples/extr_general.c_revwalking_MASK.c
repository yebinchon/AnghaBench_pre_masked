
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* email; } ;
typedef TYPE_1__ git_signature ;
typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void FUNC_12(git_repository *VAR_2)
{
 const git_signature *VAR_3;
 const char *VAR_4;
 int VAR_5;
 git_revwalk *VAR_6;
 git_commit *VAR_7;
 git_oid VAR_8;

 FUNC_11("\n*Revwalking*\n");

 FUNC_5(&VAR_8, "5b5b025afb0b4c913b4c338a42934a3863bf3644");
 FUNC_7(&VAR_6, VAR_2);
 FUNC_10(VAR_6, VAR_1 | VAR_0);
 FUNC_9(VAR_6, &VAR_8);
 while ((FUNC_8(&VAR_8, VAR_6)) == 0) {
  VAR_5 = FUNC_3(&VAR_7, VAR_2, &VAR_8);
  FUNC_0(VAR_5, "looking up commit during revwalk");

  VAR_4 = FUNC_4(VAR_7);
  VAR_3 = FUNC_1(VAR_7);
  FUNC_11("%s (%s)\n", VAR_4, VAR_3->email);

  FUNC_2(VAR_7);
 }







 FUNC_6(VAR_6);
}
