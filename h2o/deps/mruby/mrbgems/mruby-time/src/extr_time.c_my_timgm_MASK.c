
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;


 size_t FUNC_0 (int) ;

__attribute__((used)) static time_t
FUNC_1(struct tm *VAR_0)
{
  static const unsigned int VAR_1[2][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
  };
  time_t VAR_2 = 0;
  int VAR_3;
  unsigned int *VAR_4 = (unsigned int*) VAR_1[FUNC_0(VAR_0->tm_year+1900)];

  static const int VAR_5 = 70;
  if(VAR_0->tm_year >= VAR_5) {
    for (VAR_3 = VAR_5; VAR_3 < VAR_0->tm_year; ++VAR_3)
      VAR_2 += FUNC_0(VAR_3+1900) ? 366*24*60*60 : 365*24*60*60;
  } else {
    for (VAR_3 = VAR_0->tm_year; VAR_3 < VAR_5; ++VAR_3)
      VAR_2 -= FUNC_0(VAR_3+1900) ? 366*24*60*60 : 365*24*60*60;
  }
  for (VAR_3 = 0; VAR_3 < VAR_0->tm_mon; ++VAR_3)
    VAR_2 += VAR_4[VAR_3] * 24 * 60 * 60;
  VAR_2 += (VAR_0->tm_mday - 1) * 24 * 60 * 60;
  VAR_2 += VAR_0->tm_hour * 60 * 60;
  VAR_2 += VAR_0->tm_min * 60;
  VAR_2 += VAR_0->tm_sec;
  return VAR_2;
}
