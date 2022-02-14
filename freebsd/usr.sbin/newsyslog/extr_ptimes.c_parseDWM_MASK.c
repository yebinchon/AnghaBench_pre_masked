
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {long tm_hour; long tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct ptime_data {struct tm tm; int tmspec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const) ;
 long FUNC_2 (char const*,char**,int) ;
 char FUNC_3 (char const) ;

__attribute__((used)) static int
FUNC_4(struct ptime_data *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 const char *VAR_9;
 char *VAR_10;
 long VAR_11;
 struct tm VAR_12;


 VAR_12 = VAR_4->tm;
 VAR_6 = FUNC_0(VAR_12.tm_mon, VAR_12.tm_year);

 VAR_8 = VAR_7 = 0;
 VAR_4->tmspec = VAR_2;
 for (;;) {
  VAR_9 = ((void*)0);
  switch (*VAR_5) {
  case 'D':
   if (VAR_7)
    return (-1);
   VAR_7++;
   VAR_4->tmspec |= VAR_2;
   VAR_5++;
   VAR_11 = FUNC_2(VAR_5, &VAR_10, 10);
   if (VAR_11 < 0 || VAR_11 > 23)
    return (-1);
   VAR_9 = VAR_10;
   VAR_12.tm_hour = VAR_11;
   break;

  case 'W':
   if (VAR_8)
    return (-1);
   VAR_8++;
   VAR_4->tmspec |= VAR_1;
   VAR_5++;
   VAR_11 = FUNC_2(VAR_5, &VAR_10, 10);
   if (VAR_11 < 0 || VAR_11 > 6)
    return (-1);
   VAR_9 = VAR_10;
   if (VAR_11 != VAR_12.tm_wday) {
    int VAR_13;

    if (VAR_11 < VAR_12.tm_wday) {
     VAR_13 = 6 - VAR_12.tm_wday;
     VAR_13 += (VAR_11 + 1);
    } else {
     VAR_13 = VAR_11 - VAR_12.tm_wday;
    }

    VAR_12.tm_mday += VAR_13;

    if (VAR_12.tm_mday > VAR_6) {
     VAR_12.tm_mon++;
     VAR_12.tm_mday = VAR_12.tm_mday - VAR_6;
    }
   }
   break;

  case 'M':
   if (VAR_8)
    return (-1);
   VAR_8++;
   VAR_4->tmspec |= VAR_0;
   VAR_5++;
   if (FUNC_3(*VAR_5) == 'l') {

    VAR_4->tmspec |= VAR_3;
    VAR_12.tm_mday = VAR_6;
    VAR_9 = VAR_5 + 1;
   } else {
    VAR_11 = FUNC_2(VAR_5, &VAR_10, 10);
    if (VAR_11 < 1 || VAR_11 > 31)
     return (-1);

    if (VAR_11 > VAR_6)
     return (-1);
    VAR_9 = VAR_10;
    VAR_12.tm_mday = VAR_11;
   }
   break;

  default:
   return (-1);
   break;
  }

  if (VAR_9 == ((void*)0))
   return (-1);
  else if (*VAR_9 == '\0' || FUNC_1(*VAR_9))
   break;
  else
   VAR_5 = VAR_9;
 }

 VAR_4->tm = VAR_12;
 return (0);
}
