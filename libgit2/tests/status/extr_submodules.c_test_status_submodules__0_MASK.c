
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
 int VAR_2 = 0;

 VAR_1 = FUNC_6();

 FUNC_0(FUNC_3("submodules/.git"));
 FUNC_0(FUNC_3("submodules/testrepo/.git"));
 FUNC_0(FUNC_4("submodules/.gitmodules"));

 FUNC_2(
  FUNC_5(VAR_1, VAR_0, &VAR_2)
 );

 FUNC_1(6, VAR_2);
}
