
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char) ;
 scalar_t__ FUNC_4 (char const*) ;

int FUNC_5(git_buf *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 FUNC_0(VAR_0 && VAR_1);

 VAR_2 = (int)FUNC_4(VAR_1);
 FUNC_2(VAR_0);

 for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  char VAR_6 = VAR_1[VAR_5];

  if (VAR_6 != '%')
   goto append;

  if (VAR_5 >= VAR_2 - 2)
   goto append;

  VAR_3 = FUNC_1(VAR_1[VAR_5 + 1]);
  VAR_4 = FUNC_1(VAR_1[VAR_5 + 2]);

  if (VAR_3 < 0 || VAR_4 < 0)
   goto append;

  VAR_6 = (char)(VAR_3 << 4 | VAR_4);
  VAR_5 += 2;

append:
  if (FUNC_3(VAR_0, VAR_6) < 0)
   return -1;
 }

 return 0;
}
