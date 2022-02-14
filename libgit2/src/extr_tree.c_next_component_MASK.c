
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static bool FUNC_3(git_buf *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1, '/');

 FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_1(VAR_0, VAR_1, VAR_2 - VAR_1);

 return !!VAR_2;
}
