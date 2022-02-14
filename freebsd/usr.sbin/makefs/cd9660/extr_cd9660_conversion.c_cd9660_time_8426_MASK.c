
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int temp ;
struct tm {scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; scalar_t__ tm_sec; scalar_t__ tm_min; } ;


 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (unsigned char*,char*,int) ;
 int FUNC_3 (char*,int,char*,int,int,int,int,int,int,int ) ;

void
FUNC_4(unsigned char *VAR_0, time_t VAR_1)
{
 struct tm VAR_2;
 char VAR_3[18];

 (void)FUNC_1(&VAR_1, &VAR_2);
 (void)FUNC_3(VAR_3, sizeof(VAR_3), "%04i%02i%02i%02i%02i%02i%02i",
  1900+(int)VAR_2.tm_year,
  (int)VAR_2.tm_mon+1,
  (int)VAR_2.tm_mday,
  (int)VAR_2.tm_hour,
  (int)VAR_2.tm_min,
  (int)VAR_2.tm_sec,
  0);
 (void)FUNC_2(VAR_0, VAR_3, 16);
 VAR_0[16] = FUNC_0(VAR_1);
}
