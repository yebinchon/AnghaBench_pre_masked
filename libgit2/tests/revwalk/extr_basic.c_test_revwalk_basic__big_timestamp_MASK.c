
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,char*,long long,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

void FUNC_14(void)
{
 git_reference *VAR_4;
 git_commit *VAR_5;
 git_signature *VAR_6;
 git_tree *VAR_7;
 git_oid VAR_8;
 int VAR_9;

 FUNC_13("testrepo.git");

 FUNC_1(FUNC_7(&VAR_4, VAR_2));
 FUNC_1(FUNC_6((git_object **) &VAR_5, VAR_4, VAR_1));


 FUNC_1(FUNC_11(&VAR_6, "Joe", "joe@example.com", 2399662595ll, 0));
 FUNC_1(FUNC_4(&VAR_7, VAR_5));

 FUNC_1(FUNC_2(&VAR_8, VAR_2, "HEAD", VAR_6, VAR_6, ((void*)0), "some message", VAR_7, 1,
  (const git_commit **)&VAR_5));

 FUNC_1(FUNC_9(VAR_3));

 while ((VAR_9 = FUNC_8(&VAR_8, VAR_3)) == 0) {

 }

 FUNC_0(VAR_0, VAR_9);

 FUNC_12(VAR_7);
 FUNC_3(VAR_5);
 FUNC_5(VAR_4);
 FUNC_10(VAR_6);

}
