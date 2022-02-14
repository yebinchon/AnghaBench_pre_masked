
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_isdst; int tm_hour; int tm_min; int tm_wday; int tm_mday; scalar_t__ tm_sec; } ;


 int VAR_0 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int,char**) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct tm*) ;
 scalar_t__ FUNC_4 (struct tm*) ;
 int FUNC_5 (struct tm*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct tm*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct tm*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

time_t
FUNC_12(int VAR_3, char **VAR_4)
{



    time_t VAR_5, VAR_6;
    struct tm VAR_7, VAR_8;
    int VAR_9 = 0;


    VAR_5 = FUNC_8(((void*)0));
    VAR_7 = *FUNC_2(&VAR_5);

    VAR_8 = VAR_7;
    VAR_8.tm_sec = 0;
    VAR_8.tm_isdst = 0;

    if (VAR_3 <= VAR_1)
 FUNC_11();

    FUNC_1(VAR_3-VAR_1, VAR_4+VAR_1);

    switch (FUNC_10()) {
    case 131:
     if (VAR_2 < 1) {
  return VAR_5;
     }

     FUNC_0(129);

    case 129:
     FUNC_7(&VAR_8);
     break;




    case 133:
     FUNC_3(&VAR_8);
     break;
    case 130:
     FUNC_9(&VAR_8);
     FUNC_5(&VAR_8);
     break;
    case 128:
     VAR_9 += 4;

    case 132:
     VAR_9 += 12;

    case 134:
     if (VAR_8.tm_hour >= VAR_9) {
  VAR_8.tm_mday++;
  VAR_8.tm_wday++;
     }
     VAR_8.tm_hour = VAR_9;
     VAR_8.tm_min = 0;
     FUNC_10();

    default:
     FUNC_5(&VAR_8);
     break;
    }
    FUNC_0(VAR_0);



    VAR_8.tm_isdst = -1;
    VAR_6 = FUNC_4(&VAR_8);

    if (VAR_6 < 0)
 FUNC_6("garbled time");

    if (VAR_5 > VAR_6)
 FUNC_6("trying to travel back in time");

    return VAR_6;
}
