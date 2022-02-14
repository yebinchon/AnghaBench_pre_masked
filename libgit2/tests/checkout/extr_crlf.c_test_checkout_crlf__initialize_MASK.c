
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 char* VAR_4 ;
 int VAR_5 ;

void FUNC_5(void)
{
 git_buf VAR_6 = VAR_0;

 VAR_3 = FUNC_1("crlf");





 FUNC_0(FUNC_3(&VAR_6, "crlf"));
 FUNC_0(FUNC_4(&VAR_6, 0, VAR_5, ((void*)0)));

 if (VAR_2 == VAR_1)
  VAR_4 = "windows";
 else
  VAR_4 = "posix";

 FUNC_2(&VAR_6);
}
