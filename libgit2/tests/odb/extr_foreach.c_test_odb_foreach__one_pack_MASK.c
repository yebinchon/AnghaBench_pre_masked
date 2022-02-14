
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_odb_backend ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_odb_backend *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_2(FUNC_6(&VAR_0));
 FUNC_2(FUNC_4(&VAR_3, FUNC_1("testrepo.git/objects/pack/pack-a81e489679b7d3418f9ab594bda8ceb37dd4c695.idx")));
 FUNC_2(FUNC_3(VAR_0, VAR_3, 1));
 VAR_1 = ((void*)0);

 FUNC_2(FUNC_5(VAR_0, VAR_2, &VAR_4));
 FUNC_0(VAR_4 == 1628);
}
