
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {size_t tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
struct TYPE_3__ {int offset; scalar_t__ time; } ;
typedef TYPE_1__ git_time ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int * FUNC_1 (scalar_t__*,struct tm*) ;
 int FUNC_2 (char*,size_t,char*,int ,int ,int ,scalar_t__,int ,int ,int ,int,int) ;
 int * VAR_1 ;

int FUNC_3(char *VAR_2, size_t VAR_3, const git_time *VAR_4)
{
 int VAR_5;
 struct tm VAR_6;
 time_t VAR_7;

 FUNC_0(VAR_2 && VAR_4);

 VAR_7 = (time_t) (VAR_4->time + VAR_4->offset * 60);

 if (FUNC_1 (&VAR_7, &VAR_6) == ((void*)0))
  return -1;

 VAR_5 = FUNC_2(VAR_2, VAR_3, "%.3s, %u %.3s %.4u %02u:%02u:%02u %+03d%02d",
  VAR_1[VAR_6.tm_wday],
  VAR_6.tm_mday,
  VAR_0[VAR_6.tm_mon],
  VAR_6.tm_year + 1900,
  VAR_6.tm_hour, VAR_6.tm_min, VAR_6.tm_sec,
  VAR_4->offset / 60, VAR_4->offset % 60);

 if (VAR_5 < 0 || (VAR_5 > (int) VAR_3 - 1))
  return -1;

 return 0;
}
