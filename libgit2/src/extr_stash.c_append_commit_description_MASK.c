
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;
typedef int git_buf ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_0, git_commit* VAR_1)
{
 const char *VAR_2 = FUNC_6(VAR_1);
 FUNC_0(VAR_2);

 if (FUNC_1(VAR_0, FUNC_5(VAR_1)) < 0)
  return -1;

 FUNC_3(VAR_0, ' ');
 FUNC_4(VAR_0, VAR_2);
 FUNC_3(VAR_0, '\n');

 return FUNC_2(VAR_0) ? -1 : 0;
}
