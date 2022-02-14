
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char,char const*,char const*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 char VAR_4 = '/';
 git_buf VAR_5 = VAR_0;

 FUNC_4(&VAR_5, VAR_4, VAR_1, VAR_2);
 FUNC_0(FUNC_5(&VAR_5) == 0);
 FUNC_1(VAR_3, FUNC_2(&VAR_5));
 FUNC_3(&VAR_5);
}
