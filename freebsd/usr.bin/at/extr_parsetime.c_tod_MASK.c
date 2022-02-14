
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; int tm_min; int tm_mday; int tm_wday; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct tm *VAR_9)
{
    int VAR_10, VAR_11 = 0;
    int VAR_12;

    VAR_10 = FUNC_0(VAR_7);
    VAR_12 = FUNC_3(VAR_7);




    if (FUNC_4() == VAR_1) {
 FUNC_1(VAR_4);
 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 > 59)
     FUNC_2("garbled time");
 FUNC_4();
    }
    else if (VAR_12 == 4) {
 VAR_11 = VAR_10%100;
 if (VAR_11 > 59)
     FUNC_2("garbled time");
 VAR_10 = VAR_10/100;
    }



    if (VAR_8 == VAR_0 || VAR_8 == VAR_6) {
 if (VAR_10 > 12)
     FUNC_2("garbled time");

 if (VAR_8 == VAR_6) {
     if (VAR_10 != 12)
   VAR_10 += 12;
 } else {
     if (VAR_10 == 12)
   VAR_10 = 0;
 }
 FUNC_4();
    }
    else if (VAR_10 > 23)
 FUNC_2("garbled time");





    if ((VAR_8 == VAR_2 || VAR_8 == VAR_5 || VAR_8 == VAR_3) &&
 VAR_9->tm_hour > VAR_10) {
 VAR_9->tm_mday++;
 VAR_9->tm_wday++;
    }

    VAR_9->tm_hour = VAR_10;
    VAR_9->tm_min = VAR_11;
    if (VAR_9->tm_hour == 24) {
 VAR_9->tm_hour = 0;
 VAR_9->tm_mday++;
    }
}
