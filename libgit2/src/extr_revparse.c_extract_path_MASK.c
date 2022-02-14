
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

__attribute__((used)) static int FUNC_4(git_buf *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 FUNC_1(VAR_0);

 FUNC_0(VAR_1[*VAR_2] == ':');

 (*VAR_2)++;

 if (FUNC_3(VAR_0, VAR_1 + *VAR_2) < 0)
  return -1;

 *VAR_2 += FUNC_2(VAR_0);

 return 0;
}
