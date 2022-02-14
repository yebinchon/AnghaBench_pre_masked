
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

void FUNC_9(void)
{
 git_commit *VAR_2;
 git_oid VAR_3;
 size_t VAR_4;


 FUNC_8(VAR_0[0], FUNC_1("testrepo.git"));


 for (VAR_4 = 1; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  FUNC_8(VAR_0[VAR_4], VAR_0[VAR_4-1]);
 }


 FUNC_3(FUNC_7(&VAR_1, VAR_0[FUNC_0(VAR_0)-1]));
 FUNC_5(&VAR_3, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_2(FUNC_4(&VAR_2, VAR_1, &VAR_3));
 FUNC_6(VAR_1);
}
