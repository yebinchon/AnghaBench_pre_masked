
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_isdst; } ;
 scalar_t__ FUNC_0 (struct tm*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct tm *VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = (VAR_3 != 1 && VAR_3 != -1) ? 1 : 0;

    switch (FUNC_2()) {
    case 128:
     VAR_2->tm_year += VAR_3;
     break;
    case 130:
     VAR_2->tm_mon += VAR_3;
     break;
    case 129:
     VAR_3 *= 7;
    case 133:
     VAR_2->tm_mday += VAR_3;
     break;
    case 132:
     VAR_2->tm_hour += VAR_3;
     break;
    case 131:
     VAR_2->tm_min += VAR_3;
     break;
    default:
         FUNC_1(VAR_0);
     break;
    }

    if (VAR_4 != VAR_1)
 FUNC_3("pluralization is wrong");

    VAR_2->tm_isdst = -1;
    if (FUNC_0(VAR_2) < 0)
 FUNC_1(VAR_0);
}
