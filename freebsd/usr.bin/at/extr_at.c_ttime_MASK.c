
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_isdst; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; void* tm_sec; } ;
struct timeval {int tv_sec; } ;


 void* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;
 struct tm* FUNC_2 (int*) ;
 int FUNC_3 (struct tm*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static time_t
FUNC_7(const char *VAR_0)
{





    struct timeval VAR_1[2];
    time_t VAR_2;
    struct tm *VAR_3;
    int VAR_4;
    char *VAR_5;

    if (FUNC_1(&VAR_1[0], ((void*)0)))
 FUNC_4("Cannot get current time");


    VAR_2 = VAR_1[0].tv_sec;
    if ((VAR_3 = FUNC_2(&VAR_2)) == ((void*)0))
 FUNC_4("localtime");

    if ((VAR_5 = FUNC_5(VAR_0, '.')) == ((void*)0))
 VAR_3->tm_sec = 0;
    else {
 if (FUNC_6(VAR_5 + 1) != 2)
     goto terr;
 *VAR_5++ = '\0';
 VAR_3->tm_sec = FUNC_0(VAR_5);
    }

    VAR_4 = 0;
    switch(FUNC_6(VAR_0)) {
    case 12:
 VAR_3->tm_year = FUNC_0(VAR_0);
 VAR_3->tm_year *= 100;
 VAR_4 = 1;

    case 10:
 if (VAR_4) {
     VAR_4 = FUNC_0(VAR_0);
     VAR_3->tm_year += VAR_4;
 } else {
     VAR_4 = FUNC_0(VAR_0);
     VAR_3->tm_year = VAR_4 + 2000;
 }
 VAR_3->tm_year -= 1900;

    case 8:
 VAR_3->tm_mon = FUNC_0(VAR_0);
 --VAR_3->tm_mon;
 VAR_3->tm_mday = FUNC_0(VAR_0);
 VAR_3->tm_hour = FUNC_0(VAR_0);
 VAR_3->tm_min = FUNC_0(VAR_0);
 break;
    default:
 goto terr;
    }

    VAR_3->tm_isdst = -1;
    VAR_1[0].tv_sec = VAR_1[1].tv_sec = FUNC_3(VAR_3);
    if (VAR_1[0].tv_sec != -1)
 return VAR_1[0].tv_sec;
    else
terr:
 FUNC_4(
    "out of range or illegal time specification: [[CC]YY]MMDDhhmm[.SS]");
}
