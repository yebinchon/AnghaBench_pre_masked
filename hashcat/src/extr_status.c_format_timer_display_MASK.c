
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_yday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (char*,size_t,char*,int,char const*,...) ;

void FUNC_1 (struct tm *VAR_0, char *VAR_1, size_t VAR_2)
{
  const char *const VAR_3[] = { "year", "day", "hour", "min", "sec" };
  const char *const VAR_4[] = { "years", "days", "hours", "mins", "secs" };

  if (VAR_0->tm_year - 70)
  {
    const char *VAR_5 = ((VAR_0->tm_year - 70) == 1) ? VAR_3[0] : VAR_4[0];
    const char *VAR_6 = ( VAR_0->tm_yday == 1) ? VAR_3[1] : VAR_4[1];

    FUNC_0 (VAR_1, VAR_2, "%d %s, %d %s", VAR_0->tm_year - 70, VAR_5, VAR_0->tm_yday, VAR_6);
  }
  else if (VAR_0->tm_yday)
  {
    const char *VAR_7 = (VAR_0->tm_yday == 1) ? VAR_3[1] : VAR_4[1];
    const char *VAR_8 = (VAR_0->tm_hour == 1) ? VAR_3[2] : VAR_4[2];

    FUNC_0 (VAR_1, VAR_2, "%d %s, %d %s", VAR_0->tm_yday, VAR_7, VAR_0->tm_hour, VAR_8);
  }
  else if (VAR_0->tm_hour)
  {
    const char *VAR_9 = (VAR_0->tm_hour == 1) ? VAR_3[2] : VAR_4[2];
    const char *VAR_10 = (VAR_0->tm_min == 1) ? VAR_3[3] : VAR_4[3];

    FUNC_0 (VAR_1, VAR_2, "%d %s, %d %s", VAR_0->tm_hour, VAR_9, VAR_0->tm_min, VAR_10);
  }
  else if (VAR_0->tm_min)
  {
    const char *VAR_11 = (VAR_0->tm_min == 1) ? VAR_3[3] : VAR_4[3];
    const char *VAR_12 = (VAR_0->tm_sec == 1) ? VAR_3[4] : VAR_4[4];

    FUNC_0 (VAR_1, VAR_2, "%d %s, %d %s", VAR_0->tm_min, VAR_11, VAR_0->tm_sec, VAR_12);
  }
  else
  {
    const char *VAR_13 = (VAR_0->tm_sec == 1) ? VAR_3[4] : VAR_4[4];

    FUNC_0 (VAR_1, VAR_2, "%d %s", VAR_0->tm_sec, VAR_13);
  }
}
