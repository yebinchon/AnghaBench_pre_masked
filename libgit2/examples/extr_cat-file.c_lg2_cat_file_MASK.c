
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {char* member_0; int action; scalar_t__ verbose; int * rev; int member_3; int member_2; int * member_1; } ;
typedef int oidstr ;
typedef int git_tree ;
typedef int git_tag ;
typedef int git_repository ;
typedef int git_odb_object ;
typedef int git_odb ;
typedef int git_object ;
typedef int git_commit ;
typedef int git_blob ;






 int VAR_0 ;




 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int **,int *,int *) ;
 int FUNC_12 (struct opts*,int,char**) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;

int FUNC_18(git_repository *VAR_1, int VAR_2, char *VAR_3[])
{
 struct opts VAR_4 = { ".", ((void*)0), 0, 0 };
 git_object *VAR_5 = ((void*)0);
 char VAR_6[VAR_0 + 1];

 FUNC_12(&VAR_4, VAR_2, VAR_3);

 FUNC_0(FUNC_11(&VAR_5, VAR_1, VAR_4.rev),
   "Could not resolve", VAR_4.rev);

 if (VAR_4.verbose) {
  char VAR_7[VAR_0 + 1];
  FUNC_9(VAR_7, sizeof(VAR_7), FUNC_2(VAR_5));

  FUNC_13("%s %s\n--\n",
   FUNC_4(FUNC_3(VAR_5)), VAR_7);
 }

 switch (VAR_4.action) {
 case 128:
  FUNC_13("%s\n", FUNC_4(FUNC_3(VAR_5)));
  break;
 case 129: {
  git_odb *VAR_8;
  git_odb_object *VAR_9;

  FUNC_0(FUNC_10(&VAR_8, VAR_1), "Could not open ODB", ((void*)0));
  FUNC_0(FUNC_8(&VAR_9, VAR_8, FUNC_2(VAR_5)),
   "Could not find obj", ((void*)0));

  FUNC_13("%ld\n", (long)FUNC_7(VAR_9));

  FUNC_6(VAR_9);
  FUNC_5(VAR_8);
  }
  break;
 case 131:

  break;
 case 130:

  switch (FUNC_3(VAR_5)) {
  case 135:
   FUNC_14((const git_blob *)VAR_5);
   break;
  case 134:
   FUNC_15((const git_commit *)VAR_5);
   break;
  case 132:
   FUNC_17((const git_tree *)VAR_5);
   break;
  case 133:
   FUNC_16((const git_tag *)VAR_5);
   break;
  default:
   FUNC_13("unknown %s\n", VAR_6);
   break;
  }
  break;
 }

 FUNC_1(VAR_5);

 return 0;
}
