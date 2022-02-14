
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {unsigned char tm_year; int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tm*) ;

void
FUNC_2(unsigned char *VAR_0, time_t VAR_1)
{
 struct tm VAR_2;

 (void)FUNC_1(&VAR_1, &VAR_2);
 VAR_0[0] = VAR_2.tm_year;
 VAR_0[1] = VAR_2.tm_mon+1;
 VAR_0[2] = VAR_2.tm_mday;
 VAR_0[3] = VAR_2.tm_hour;
 VAR_0[4] = VAR_2.tm_min;
 VAR_0[5] = VAR_2.tm_sec;
 VAR_0[6] = FUNC_0(VAR_1);
}
