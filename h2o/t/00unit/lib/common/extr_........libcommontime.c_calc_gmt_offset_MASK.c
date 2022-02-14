
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_min; scalar_t__ tm_yday; scalar_t__ tm_year; } ;


 int FUNC_0 (int *,struct tm*) ;

__attribute__((used)) static int FUNC_1(time_t VAR_0, struct tm *VAR_1)
{
    struct tm VAR_2;
    int VAR_3;

    FUNC_0(&VAR_0, &VAR_2);
    VAR_3 = (VAR_1->tm_hour - VAR_2.tm_hour) * 60 + (VAR_1->tm_min - VAR_2.tm_min);

    if (VAR_1->tm_yday != VAR_2.tm_yday) {
        int VAR_4;
        if (VAR_1->tm_year == VAR_2.tm_year)
            VAR_4 = VAR_1->tm_yday - VAR_2.tm_yday;
        else
            VAR_4 = VAR_1->tm_year - VAR_2.tm_year;
        VAR_3 += VAR_4 * 24 * 60;
    }
    return VAR_3;
}
