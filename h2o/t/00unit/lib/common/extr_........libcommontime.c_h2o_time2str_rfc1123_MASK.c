
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_year; int tm_mon; scalar_t__ tm_mday; int tm_wday; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,scalar_t__,int) ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(char *VAR_1, struct tm *VAR_2)
{
    char *VAR_3 = VAR_1;


    VAR_3 = FUNC_3(VAR_3, VAR_2->tm_wday);
    *VAR_3++ = ',';
    *VAR_3++ = ' ';
    VAR_3 = FUNC_1(VAR_3, VAR_2->tm_mday, 2);
    *VAR_3++ = ' ';
    VAR_3 = FUNC_2(VAR_3, VAR_2->tm_mon);
    *VAR_3++ = ' ';
    VAR_3 = FUNC_1(VAR_3, VAR_2->tm_year + 1900, 4);
    *VAR_3++ = ' ';
    VAR_3 = FUNC_1(VAR_3, VAR_2->tm_hour, 2);
    *VAR_3++ = ':';
    VAR_3 = FUNC_1(VAR_3, VAR_2->tm_min, 2);
    *VAR_3++ = ':';
    VAR_3 = FUNC_1(VAR_3, VAR_2->tm_sec, 2);
    FUNC_4(VAR_3, " GMT", 4);
    VAR_3 += 4;
    *VAR_3 = '\0';

    FUNC_0(VAR_3 - VAR_1 == VAR_0);
}
