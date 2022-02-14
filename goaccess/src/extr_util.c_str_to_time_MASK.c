
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mday; unsigned long long tm_sec; int tm_isdst; } ;


 scalar_t__ VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tm*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*,char const*,struct tm*) ;
 unsigned long long FUNC_3 (char const*,char**,int) ;

int
FUNC_4 (const char *VAR_3, const char *VAR_4, struct tm *VAR_5)
{
  char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
  unsigned long long VAR_8 = 0;

  if (VAR_3 == ((void*)0) || *VAR_3 == '\0' || VAR_4 == ((void*)0) || *VAR_4 == '\0')
    return 1;


  if (FUNC_1 ("%f", VAR_4) == 0) {
    VAR_2 = 0;
    VAR_5->tm_year = 1970 - 1900;
    VAR_5->tm_mday = 1;

    VAR_8 = FUNC_3 (VAR_3, &VAR_7, 10);
    if (VAR_3 == VAR_7 || *VAR_7 != '\0' || VAR_2 == VAR_0)
      return 1;

    VAR_5->tm_sec = VAR_8 / VAR_1;
    VAR_5->tm_isdst = -1;
    if (FUNC_0 (VAR_5) == -1)
      return 1;

    return 0;
  }

  VAR_6 = FUNC_2 (VAR_3, VAR_4, VAR_5);
  if (VAR_6 == ((void*)0) || *VAR_6 != '\0')
    return 1;

  return 0;
}
