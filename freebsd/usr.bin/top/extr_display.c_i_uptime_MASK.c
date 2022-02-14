
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {int tv_sec; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_3(struct timeval *VAR_3, time_t *VAR_4)
{
    time_t VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;

    if (VAR_3->tv_sec != -1) {
 VAR_5 = *VAR_4 - VAR_3->tv_sec;
 VAR_6 = VAR_5 / 86400;
 VAR_5 %= 86400;
 VAR_7 = VAR_5 / 3600;
 VAR_5 %= 3600;
 VAR_8 = VAR_5 / 60;
 VAR_9 = VAR_5 % 60;





 if (VAR_1)
 {
     FUNC_0((VAR_0 - 24) - (VAR_6 > 9 ? 1 : 0), 0);
 }
 else
 {
     FUNC_1(" ", VAR_2);
 }
 FUNC_2(" up %d+%02d:%02d:%02d", VAR_6, VAR_7, VAR_8, VAR_9);
    }
}
