
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog ;
typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int **,int ,char*,int *,int,int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
 size_t VAR_1, VAR_2;
 size_t VAR_3, VAR_4;
 git_reference *VAR_5;
 git_reflog *VAR_6;
 git_oid VAR_7;

 FUNC_1(FUNC_7(&VAR_6, VAR_0, "HEAD"));
 VAR_1 = FUNC_5(VAR_6);
 FUNC_6(VAR_6);

 FUNC_1(FUNC_7(&VAR_6, VAR_0, "refs/heads/master"));
 VAR_3 = FUNC_5(VAR_6);
 FUNC_6(VAR_6);


 FUNC_2(&VAR_7, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644");
 FUNC_1(FUNC_3(&VAR_5, VAR_0, "refs/heads/master", &VAR_7, 1, ((void*)0)));
 FUNC_4(VAR_5);

 FUNC_1(FUNC_7(&VAR_6, VAR_0, "HEAD"));
 VAR_2 = FUNC_5(VAR_6);
 FUNC_6(VAR_6);

 FUNC_0(VAR_2, VAR_1);

 FUNC_1(FUNC_7(&VAR_6, VAR_0, "refs/heads/master"));
 VAR_4 = FUNC_5(VAR_6);
 FUNC_6(VAR_6);

 FUNC_0(VAR_2, VAR_1);
 FUNC_0(VAR_4, VAR_3);

}
