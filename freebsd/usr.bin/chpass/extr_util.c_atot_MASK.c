
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_isdst; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (struct tm*) ;
 char const** VAR_1 ;
 int FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (char*) ;

int
FUNC_8(char *VAR_2, time_t *VAR_3)
{
 static struct tm *VAR_4;
 char *VAR_5;
 const char **VAR_6;
 time_t VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (!*VAR_2) {
  *VAR_3 = 0;
  return (0);
 }
 if (!VAR_4) {
  FUNC_7("TZ");
  (void)FUNC_6(&VAR_7);
  VAR_4 = FUNC_2(&VAR_7);
 }
 if (!(VAR_5 = FUNC_5(VAR_2, " \t")))
  goto bad;
 if (FUNC_1(*VAR_5)) {
  VAR_9 = FUNC_0(VAR_5);
 } else {
  for (VAR_6 = VAR_1;; ++VAR_6) {
   if (!*VAR_6)
    goto bad;
   if (!FUNC_4(*VAR_6, VAR_5, 3)) {
    VAR_9 = VAR_6 - VAR_1 + 1;
    break;
   }
  }
 }
 if (!(VAR_5 = FUNC_5(((void*)0), " \t,")) || !FUNC_1(*VAR_5))
  goto bad;
 VAR_8 = FUNC_0(VAR_5);
 if (!(VAR_5 = FUNC_5(((void*)0), " \t,")) || !FUNC_1(*VAR_5))
  goto bad;
 VAR_10 = FUNC_0(VAR_5);
 if (VAR_8 < 1 || VAR_8 > 31 || VAR_9 < 1 || VAR_9 > 12)
  goto bad;

 if (VAR_10 < 69)
  VAR_10 += 2000;
 else if (VAR_10 < 100)
  VAR_10 += 1900;
 if (VAR_10 < 1969)
bad: return (1);
 VAR_4->tm_year = VAR_10 - 1900;
 VAR_4->tm_mon = VAR_9 - 1;
 VAR_4->tm_mday = VAR_8;
 VAR_4->tm_hour = 0;
 VAR_4->tm_min = 0;
 VAR_4->tm_sec = 0;
 VAR_4->tm_isdst = -1;
 if ((VAR_7 = FUNC_3(VAR_4)) < 0)
  return (1);
 if (VAR_7 > VAR_0)
  return (1);

 *VAR_3 = VAR_7;
 return (0);
}
