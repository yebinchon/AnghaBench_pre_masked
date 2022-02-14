
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct kevent {int flags; int data; scalar_t__ fflags; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int,scalar_t__,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,char const*,...) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10(void)
{
    const char *VAR_7 = "kevent(EVFILT_TIMER, EV_ONESHOT, NOTE_ABSTIME)";
    struct kevent VAR_8;
    time_t VAR_9;
    time_t VAR_10;
    const int VAR_11 = 3;

    FUNC_7(VAR_7);

    FUNC_8();

    VAR_9 = FUNC_9(((void*)0));
    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_1 | VAR_2,
      VAR_3 | VAR_4, VAR_9 + VAR_11, ((void*)0));
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_7);


    VAR_8.flags = VAR_1 | VAR_2;
    VAR_8.data = 1;
    VAR_8.fflags = 0;
    FUNC_3(&VAR_8, FUNC_4(VAR_5));
    VAR_10 = FUNC_9(((void*)0));
    if (VAR_10 < VAR_9 + VAR_11)
        FUNC_1(1, "too early %jd %jd", (intmax_t)VAR_10, (intmax_t)(VAR_9 + VAR_11));


    FUNC_5(3);
    FUNC_8();

    FUNC_6();
}
