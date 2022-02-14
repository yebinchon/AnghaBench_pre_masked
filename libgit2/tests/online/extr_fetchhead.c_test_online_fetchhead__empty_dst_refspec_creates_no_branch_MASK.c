
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int VAR_2 ;
 int FUNC_5 (int **,int ,char*,int ) ;

void FUNC_6(void)
{
 git_reference *VAR_3;
 size_t VAR_4;

 FUNC_3();
 VAR_4 = FUNC_2();

 FUNC_4("refs/heads/first-merge", VAR_0);
 FUNC_1(FUNC_5(&VAR_3, VAR_2, "first-merge", VAR_1));

 FUNC_0(VAR_4, FUNC_2());
}
