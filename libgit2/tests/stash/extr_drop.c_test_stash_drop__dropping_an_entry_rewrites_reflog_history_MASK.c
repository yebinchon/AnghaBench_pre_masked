
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int const*) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 () ;
 int VAR_1 ;

void FUNC_13(void)
{
 git_reference *VAR_2;
 git_reflog *VAR_3;
 const git_reflog_entry *VAR_4;
 git_oid VAR_5;
 size_t VAR_6;

 FUNC_12();

 FUNC_2(FUNC_5(&VAR_2, VAR_1, VAR_0));

 FUNC_2(FUNC_10(&VAR_3, VAR_1, VAR_0));
 VAR_4 = FUNC_6(VAR_3, 1);

 FUNC_3(&VAR_5, FUNC_7(VAR_4));
 VAR_6 = FUNC_8(VAR_3);

 FUNC_9(VAR_3);

 FUNC_2(FUNC_11(VAR_1, 1));

 FUNC_2(FUNC_10(&VAR_3, VAR_1, VAR_0));
 VAR_4 = FUNC_6(VAR_3, 0);

 FUNC_0(&VAR_5, FUNC_7(VAR_4));
 FUNC_1(VAR_6 - 1, FUNC_8(VAR_3));

 FUNC_9(VAR_3);

 FUNC_4(VAR_2);
}
