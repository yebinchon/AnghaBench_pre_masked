
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int **,int ,char*) ;

void FUNC_2(void)
{
 int VAR_3;
 git_reference *VAR_4;

 VAR_3 = FUNC_1(&VAR_4, VAR_2, "refs/heads");
 FUNC_0(VAR_3, VAR_1);

 VAR_3 = FUNC_1(&VAR_4, VAR_2, "refs/heads/");
 FUNC_0(VAR_3, VAR_0);
}
