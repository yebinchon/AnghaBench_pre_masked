
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int timestamp_t ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_isdst; int tm_hour; int tm_min; int tm_sec; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,struct tm*,int*) ;
 int FUNC_3 (char const*,struct tm*,int*,int*) ;
 int FUNC_4 (char const*,int*,int*) ;
 int FUNC_5 (char const*,int*) ;
 int FUNC_6 (struct tm*,int ,int) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 int FUNC_8 (struct tm*) ;

int FUNC_9(const char *VAR_0, timestamp_t *VAR_1, int *VAR_2)
{
 struct tm VAR_3;
 int VAR_4;
 timestamp_t VAR_5;
 int VAR_6;

 if (!VAR_1)
  VAR_1 = &VAR_5;
 if (!VAR_2)
  VAR_2 = &VAR_6;

 FUNC_6(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tm_year = -1;
 VAR_3.tm_mon = -1;
 VAR_3.tm_mday = -1;
 VAR_3.tm_isdst = -1;
 VAR_3.tm_hour = -1;
 VAR_3.tm_min = -1;
 VAR_3.tm_sec = -1;
 *VAR_2 = -1;
 VAR_4 = 0;

 if (*VAR_0 == '@' &&
     !FUNC_4(VAR_0 + 1, VAR_1, VAR_2))
  return 0;
 for (;;) {
  int VAR_7 = 0;
  unsigned char VAR_8 = *VAR_0;


  if (!VAR_8 || VAR_8 == '\n')
   break;

  if (FUNC_0(VAR_8))
   VAR_7 = FUNC_2(VAR_0, &VAR_3, VAR_2);
  else if (FUNC_1(VAR_8))
   VAR_7 = FUNC_3(VAR_0, &VAR_3, VAR_2, &VAR_4);
  else if ((VAR_8 == '-' || VAR_8 == '+') && FUNC_1(VAR_0[1]))
   VAR_7 = FUNC_5(VAR_0, VAR_2);

  if (!VAR_7) {

   VAR_7 = 1;
  }

  VAR_0 += VAR_7;
 }


 *VAR_1 = FUNC_8(&VAR_3);
 if (*VAR_1 == -1)
  return -1;

 if (*VAR_2 == -1) {
  time_t VAR_9;


  VAR_3.tm_isdst = -1;
  VAR_9 = FUNC_7(&VAR_3);
  if ((time_t)*VAR_1 > VAR_9) {
   *VAR_2 = ((time_t)*VAR_1 - VAR_9) / 60;
  } else {
   *VAR_2 = -(int)((VAR_9 - (time_t)*VAR_1) / 60);
  }
 }

 if (!VAR_4)
  *VAR_1 -= *VAR_2 * 60;
 return 0;
}
