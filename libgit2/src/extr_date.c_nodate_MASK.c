
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;



__attribute__((used)) static int FUNC_0(struct tm *VAR_0)
{
 return (VAR_0->tm_year &
  VAR_0->tm_mon &
  VAR_0->tm_mday &
  VAR_0->tm_hour &
  VAR_0->tm_min &
  VAR_0->tm_sec) < 0;
}
