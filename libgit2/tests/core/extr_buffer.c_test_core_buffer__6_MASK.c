
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(void)
{
 git_buf VAR_1 = VAR_0;
 git_buf VAR_2 = VAR_0;

 FUNC_5(&VAR_1, "foo");
 FUNC_0(FUNC_4(&VAR_1) == 0);
 FUNC_5(&VAR_2, "bar");
 FUNC_0(FUNC_4(&VAR_2) == 0);

 FUNC_1("foo", FUNC_2(&VAR_1));
 FUNC_1("bar", FUNC_2(&VAR_2));

 FUNC_6(&VAR_1, &VAR_2);

 FUNC_1("bar", FUNC_2(&VAR_1));
 FUNC_1("foo", FUNC_2(&VAR_2));

 FUNC_3(&VAR_1);
 FUNC_3(&VAR_2);
}
