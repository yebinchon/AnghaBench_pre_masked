
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(void)
{
 git_buf VAR_1 = VAR_0;
 ssize_t VAR_2;

 FUNC_1(FUNC_6(&VAR_1, "/this/is/it/"));

 VAR_2 = (ssize_t)FUNC_3(&VAR_1);

 FUNC_0(FUNC_4(&VAR_1, '/') == VAR_2 - 1);
 FUNC_0(FUNC_5(&VAR_1, '/') == VAR_2 - 4);

 FUNC_0(FUNC_4(&VAR_1, 'i') == VAR_2 - 3);
 FUNC_0(FUNC_5(&VAR_1, 'i') == VAR_2 - 3);

 FUNC_0(FUNC_4(&VAR_1, 'h') == 2);
 FUNC_0(FUNC_5(&VAR_1, 'h') == 2);

 FUNC_0(FUNC_4(&VAR_1, 'q') == -1);
 FUNC_0(FUNC_5(&VAR_1, 'q') == -1);

 FUNC_2(&VAR_1);
}
