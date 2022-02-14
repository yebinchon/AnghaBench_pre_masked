
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int member_0; } ;
struct timespec {int tv_sec; } ;


 int FUNC_0 (int *,struct tm*) ;

__attribute__((used)) static void
FUNC_1(const struct timespec *VAR_0, uint16_t *VAR_1, uint16_t *VAR_2)
{
 time_t VAR_3;
 struct tm VAR_4 = {0};

 VAR_3 = VAR_0->tv_sec;
 FUNC_0(&VAR_3, &VAR_4);

 unsigned long VAR_5 = ((VAR_4.tm_year - 80) << 25) |
            ((VAR_4.tm_mon + 1) << 21) |
            (VAR_4.tm_mday << 16) |
            (VAR_4.tm_hour << 11) |
            (VAR_4.tm_min << 5) |
            (VAR_4.tm_sec >> 1);

 if (VAR_1 != ((void*)0))
  *VAR_1 = (uint16_t)(VAR_5 >> 16);
 if (VAR_2 != ((void*)0))
  *VAR_2 = (uint16_t)VAR_5;
}
