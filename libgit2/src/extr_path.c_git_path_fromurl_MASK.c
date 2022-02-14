
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*) ;

int FUNC_5(git_buf *VAR_0, const char *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0 && VAR_1);

 if ((VAR_2 = FUNC_4(VAR_1)) < 0 ||
  VAR_1[VAR_2] == '\0' || VAR_1[VAR_2] == '/')
  return FUNC_1(VAR_1);


 VAR_2--;


 FUNC_3(VAR_0);
 return FUNC_2(VAR_0, VAR_1 + VAR_2);
}
