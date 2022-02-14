
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_isdst; } ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int int32_t ;


 struct timeval* FUNC_0 (int) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static struct timeval *
FUNC_2(const u_char *VAR_0, u_int VAR_1)
{
 struct tm VAR_2;
 time_t VAR_3;
 struct timeval *VAR_4;

 if (VAR_1 != 8 && VAR_1 != 11)
  return (((void*)0));

 if (VAR_0[2] == 0 || VAR_0[2] > 12 ||
     VAR_0[3] == 0 || VAR_0[3] > 31 ||
     VAR_0[4] > 23 || VAR_0[5] > 59 || VAR_0[6] > 60 || VAR_0[7] > 9)
  return (((void*)0));

 VAR_2.tm_year = ((VAR_0[0] << 8) + VAR_0[1]) - 1900;
 VAR_2.tm_mon = VAR_0[2] - 1;
 VAR_2.tm_mday = VAR_0[3];
 VAR_2.tm_hour = VAR_0[4];
 VAR_2.tm_min = VAR_0[5];
 VAR_2.tm_sec = VAR_0[6];
 VAR_2.tm_isdst = 0;


 if ((VAR_3 = FUNC_1(&VAR_2)) == (time_t)-1)
  return (((void*)0));


 if (VAR_1 == 11) {
  if (VAR_0[9] > 13 || VAR_0[10] > 59)
   return (((void*)0));
  if (VAR_0[8] == '+')
   VAR_3 += 3600 * VAR_0[9] + 60 * VAR_0[10];
  else
   VAR_3 -= 3600 * VAR_0[9] + 60 * VAR_0[10];
 }

 if ((VAR_4 = FUNC_0(sizeof(*VAR_4))) == ((void*)0))
  return (((void*)0));

 VAR_4->tv_sec = VAR_3;
 VAR_4->tv_usec = (int32_t)VAR_0[7] * 100000;

 return (VAR_4);
}
