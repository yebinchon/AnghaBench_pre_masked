
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {long tm_year; long tm_mon; long tm_mday; long tm_sec; long tm_min; long tm_hour; } ;
struct ptime_data {struct tm tm; int tmspec; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char) ;
 long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int
FUNC_2(struct ptime_data *VAR_5, const char *VAR_6)
{
 char *VAR_7;
 long VAR_8;
 struct tm VAR_9;

 VAR_8 = FUNC_1(VAR_6, &VAR_7, 10);
 if (VAR_8 < 0 || VAR_8 >= VAR_0 || (*VAR_7 != '\0' && *VAR_7 != 'T'))
  return (-1);






 VAR_9 = VAR_5->tm;
 VAR_5->tmspec = VAR_2;
 switch (VAR_7 - VAR_6) {
 case 8:
  VAR_9.tm_year = ((VAR_8 / 1000000) - 19) * 100;
  VAR_8 = VAR_8 % 1000000;
 case 6:
  VAR_5->tmspec |= VAR_4;
  VAR_9.tm_year -= VAR_9.tm_year % 100;
  VAR_9.tm_year += VAR_8 / 10000;
  VAR_8 = VAR_8 % 10000;
 case 4:
  VAR_5->tmspec |= VAR_3;
  VAR_9.tm_mon = (VAR_8 / 100) - 1;
  VAR_8 = VAR_8 % 100;
 case 2:
  VAR_5->tmspec |= VAR_1;
  VAR_9.tm_mday = VAR_8;
 case 0:
  break;
 default:
  return (-1);
 }


 if (VAR_9.tm_year < 70 || VAR_9.tm_mon < 0 || VAR_9.tm_mon > 12
     || VAR_9.tm_mday < 1 || VAR_9.tm_mday > 31)
  return (-1);

 if (*VAR_7 != '\0') {
  VAR_6 = ++VAR_7;
  VAR_8 = FUNC_1(VAR_6, &VAR_7, 10);
  if (VAR_8 < 0 || VAR_8 >= VAR_0 || (*VAR_7 != '\0' && !FUNC_0(*VAR_7)))
   return (-1);

  switch (VAR_7 - VAR_6) {
  case 6:
   VAR_9.tm_sec = VAR_8 % 100;
   VAR_8 /= 100;
  case 4:
   VAR_9.tm_min = VAR_8 % 100;
   VAR_8 /= 100;
  case 2:
   VAR_5->tmspec |= VAR_2;
   VAR_9.tm_hour = VAR_8;
  case 0:
   break;
  default:
   return (-1);
  }


  if (VAR_9.tm_sec < 0 || VAR_9.tm_sec > 60 || VAR_9.tm_min < 0
      || VAR_9.tm_min > 59 || VAR_9.tm_hour < 0 || VAR_9.tm_hour > 23)
   return (-1);
 }

 VAR_5->tm = VAR_9;
 return (0);
}
