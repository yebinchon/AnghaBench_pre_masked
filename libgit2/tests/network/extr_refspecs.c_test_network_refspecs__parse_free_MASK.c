
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_refspec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*,int) ;

void FUNC_5(void)
{
 git_refspec *VAR_0 = ((void*)0);

 FUNC_1(FUNC_4(&VAR_0, "", 0));
 FUNC_1(FUNC_4(&VAR_0, ":::", 0));
 FUNC_2(FUNC_4(&VAR_0, "HEAD:", 1));

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_3(VAR_0);
}
