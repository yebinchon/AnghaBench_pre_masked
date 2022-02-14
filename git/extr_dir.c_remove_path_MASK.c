
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;

int FUNC_6(const char *VAR_1)
{
 char *VAR_2;

 if (FUNC_4(VAR_1) && !FUNC_1(VAR_0))
  return -1;

 VAR_2 = FUNC_3(VAR_1, '/');
 if (VAR_2) {
  char *VAR_3 = FUNC_5(VAR_1);
  VAR_2 = VAR_3 + (VAR_2 - VAR_1);
  do {
   *VAR_2 = '\0';
  } while (FUNC_2(VAR_3) == 0 && (VAR_2 = FUNC_3(VAR_3, '/')));
  FUNC_0(VAR_3);
 }
 return 0;
}
