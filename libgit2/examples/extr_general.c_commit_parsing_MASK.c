
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int oid_hex ;
struct TYPE_4__ {char* name; char* email; } ;
typedef TYPE_1__ git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,unsigned int) ;
 unsigned int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,...) ;

__attribute__((used)) static void FUNC_15(git_repository *VAR_1)
{
 const git_signature *VAR_2, *VAR_3;
 git_commit *VAR_4, *VAR_5;
 git_oid VAR_6;
 char VAR_7[VAR_0+1];
 const char *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 time_t VAR_12;

 FUNC_14("\n*Commit Parsing*\n");

 FUNC_12(&VAR_6, "8496071c1b46c854b31185ea97743be6a8774479");

 VAR_11 = FUNC_6(&VAR_4, VAR_1, &VAR_6);
 FUNC_0(VAR_11, "looking up commit");







 VAR_8 = FUNC_7(VAR_4);
 VAR_2 = FUNC_2(VAR_4);
 VAR_3 = FUNC_3(VAR_4);
 VAR_12 = FUNC_10(VAR_4);






 FUNC_14("Author: %s (%s)\nCommitter: %s (%s)\nDate: %s\nMessage: %s\n",
  VAR_2->name, VAR_2->email,
  VAR_3->name, VAR_3->email,
  FUNC_1(&VAR_12), VAR_8);







 VAR_9 = FUNC_9(VAR_4);
 for (VAR_10 = 0;VAR_10 < VAR_9;VAR_10++) {
  FUNC_13(VAR_7, 0, sizeof(VAR_7));

  FUNC_8(&VAR_5, VAR_4, VAR_10);
  FUNC_11(VAR_7, FUNC_5(VAR_5));
  FUNC_14("Parent: %s\n", VAR_7);
  FUNC_4(VAR_5);
 }

 FUNC_4(VAR_4);
}
