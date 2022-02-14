
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_mday; int tm_mon; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct tm*) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (char*,char*,int,char*,int,int,int,int,int,int,int) ;

void FUNC_4(char *VAR_1, time_t VAR_2)
{
    struct tm VAR_3;
    FUNC_2(&VAR_2, &VAR_3);
    int VAR_4 = FUNC_1(VAR_2, &VAR_3);
    int VAR_5;

    if (VAR_4 >= 0) {
        VAR_5 = '+';
    } else {
        VAR_4 = -VAR_4;
        VAR_5 = '-';
    }

    int VAR_6 = FUNC_3(VAR_1, "%02d/%s/%d:%02d:%02d:%02d %c%02d%02d", VAR_3.tm_mday,
                      ("Jan\0Feb\0Mar\0Apr\0May\0Jun\0Jul\0Aug\0Sep\0Oct\0Nov\0Dec\0") + VAR_3.tm_mon * 4, VAR_3.tm_year + 1900,
                      VAR_3.tm_hour, VAR_3.tm_min, VAR_3.tm_sec, VAR_5, VAR_4 / 60, VAR_4 % 60);
    FUNC_0(VAR_6 == VAR_0);
}
