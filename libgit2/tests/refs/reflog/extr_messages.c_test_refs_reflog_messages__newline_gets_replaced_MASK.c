
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_oid ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int *,char*) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*,char*) ;

void FUNC_13(void)
{
 const git_reflog_entry *VAR_1;
 git_signature *VAR_2;
 git_reflog *VAR_3;
 git_oid VAR_4;

 FUNC_3(FUNC_12(&VAR_2, "me", "foo@example.com"));
 FUNC_3(FUNC_4(&VAR_4, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750"));

 FUNC_3(FUNC_10(&VAR_3, VAR_0, "HEAD"));
 FUNC_2(7, FUNC_8(VAR_3));
 FUNC_3(FUNC_5(VAR_3, &VAR_4, VAR_2, "inner\nnewline"));
 FUNC_2(8, FUNC_8(VAR_3));

 FUNC_0(VAR_1 = FUNC_6(VAR_3, 0));
 FUNC_1(FUNC_7(VAR_1), "inner newline");

 FUNC_11(VAR_2);
 FUNC_9(VAR_3);
}
