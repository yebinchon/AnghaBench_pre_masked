
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_commit ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

void FUNC_8(void)
{
 git_commit *VAR_2;
 git_oid VAR_3;


 FUNC_7(VAR_0[0], FUNC_0("testrepo.git"));


 FUNC_7(VAR_0[1], VAR_0[0]);


 FUNC_1(FUNC_6(&VAR_1, VAR_0[1]));
 FUNC_4(&VAR_3, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_1(FUNC_3(&VAR_2, VAR_1, &VAR_3));
 FUNC_2(VAR_2);
 FUNC_5(VAR_1);
}
