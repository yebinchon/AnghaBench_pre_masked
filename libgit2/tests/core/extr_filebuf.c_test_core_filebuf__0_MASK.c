
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_filebuf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 git_filebuf VAR_1 = VAR_0;
 int VAR_2;
 char VAR_3[] = "test", VAR_4[] = "test.lock";

 VAR_2 = FUNC_6(VAR_4, 0744);

 FUNC_2(VAR_2);
 FUNC_2(FUNC_5(VAR_2));

 FUNC_1(FUNC_3(&VAR_1, VAR_3, 0, 0666));
 FUNC_0(FUNC_4(VAR_4));

 FUNC_2(FUNC_7(VAR_4));
}
