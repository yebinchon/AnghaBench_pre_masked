
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int) ;
 int FUNC_5 (int*,int*,int ,int *,int *) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(void)
{
 git_oid VAR_4;
 git_oid VAR_5;
 git_commit *VAR_6;

 FUNC_1(FUNC_6(&VAR_4, "e90810b8df3e80c413d903f631643c716887138d"));
 FUNC_1(FUNC_6(&VAR_5, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644"));

 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, &VAR_4, &VAR_5));
 FUNC_0(2, VAR_1);
 FUNC_0(6, VAR_2);

 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, FUNC_3(VAR_3), FUNC_3(VAR_3)));
 FUNC_0(VAR_1, VAR_2);
 FUNC_1(FUNC_4(&VAR_6, VAR_3, 1));

 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, FUNC_3(VAR_3), FUNC_3(VAR_6)));
 FUNC_0(VAR_1, VAR_2 + 2);
 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, FUNC_3(VAR_6), FUNC_3(VAR_3)));
 FUNC_0(VAR_1 + 2, VAR_2);

 FUNC_2(VAR_6);

 FUNC_1(FUNC_4(&VAR_6, VAR_3, 3));

 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, FUNC_3(VAR_3), FUNC_3(VAR_6)));
 FUNC_0(VAR_1, VAR_2 + 4);
 FUNC_1(FUNC_5(&VAR_1, &VAR_2, VAR_0, FUNC_3(VAR_6), FUNC_3(VAR_3)));
 FUNC_0(VAR_1 + 4, VAR_2);

 FUNC_2(VAR_6);
}
