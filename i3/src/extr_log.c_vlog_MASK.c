
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int time_t ;
struct tm {int dummy; } ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int message ;
typedef int i3_shmlog_header ;
struct TYPE_2__ {int condvar; int wrap_count; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,size_t,int,int ) ;
 int FUNC_2 (struct timeval*,int *) ;
 TYPE_1__* VAR_0 ;
 struct tm* FUNC_3 (int *,struct tm*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 size_t FUNC_7 (char*,int,char*,struct tm*) ;
 int FUNC_8 (scalar_t__,char*,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,int ) ;
 scalar_t__ FUNC_11 (char*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_12(const bool VAR_7, const char *VAR_8, va_list VAR_9) {


    static char VAR_10[4096];
    static struct tm VAR_11;
    static time_t VAR_12;
    static struct tm *VAR_13;
    static size_t VAR_14;


    VAR_12 = FUNC_9(((void*)0));

    VAR_13 = FUNC_3(&VAR_12, &VAR_11);

    VAR_14 = FUNC_7(VAR_10, sizeof(VAR_10), "%x %X - ", VAR_13);
    if (!VAR_1) {





        FUNC_4("%s", VAR_10);

        FUNC_10(VAR_8, VAR_9);
    } else {
        VAR_14 += FUNC_11(VAR_10 + VAR_14, sizeof(VAR_10) - VAR_14, VAR_8, VAR_9);
        if (VAR_14 >= sizeof(VAR_10)) {
            FUNC_0(VAR_5, "BUG: single log message > 4k\n");




            VAR_14 = sizeof(VAR_10);



            VAR_10[VAR_14 - 2] = '\n';
        }



        if (VAR_14 >= (size_t)(VAR_2 - (VAR_4 - VAR_1))) {
            VAR_3 = VAR_4;
            VAR_4 = VAR_1 + sizeof(i3_shmlog_header);
            FUNC_6();
            VAR_0->wrap_count++;
        }



        FUNC_8(VAR_4, VAR_10, VAR_14);
        VAR_4 += VAR_14;

        FUNC_6();



        FUNC_5(&(VAR_0->condvar));


        if (VAR_7)
            FUNC_1(VAR_10, VAR_14, 1, VAR_6);
    }
}
