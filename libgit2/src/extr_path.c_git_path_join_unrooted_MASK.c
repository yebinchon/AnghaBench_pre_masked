
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int git_buf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (char const*,char const*,scalar_t__*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

int FUNC_6(
 git_buf *VAR_0, const char *VAR_1, const char *VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4;

 FUNC_0(VAR_1 && VAR_0);

 VAR_4 = (ssize_t)FUNC_4(VAR_1);

 if (VAR_2 != ((void*)0) && VAR_4 < 0) {
  if (FUNC_1(VAR_0, VAR_2, VAR_1) < 0)
   return -1;

  VAR_4 = (ssize_t)FUNC_5(VAR_2);
 } else {
  if (FUNC_2(VAR_0, VAR_1) < 0)
   return -1;

  if (VAR_4 < 0)
   VAR_4 = 0;
  else if (VAR_2)
   FUNC_3(VAR_2, VAR_1, &VAR_4);
 }

 if (VAR_3)
  *VAR_3 = VAR_4;

 return 0;
}
