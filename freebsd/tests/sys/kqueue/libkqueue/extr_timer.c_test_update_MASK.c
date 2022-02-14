
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int data; int fflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,long,void*) ;
 long FUNC_1 (int) ;
 int VAR_4 ;
 long FUNC_2 (int) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int,char*,long) ;
 scalar_t__ FUNC_5 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_6 (struct kevent*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 long FUNC_8 () ;
 int FUNC_9 (char*,long) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*) ;
 int FUNC_12 () ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_13(void)
{
    const char *VAR_7 = "kevent(EVFILT_TIMER (UPDATE), EV_ADD | EV_ONESHOT)";
    struct kevent VAR_8;
    long VAR_9;
    long VAR_10;

    FUNC_11(VAR_7);

    FUNC_12();


    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_1 | VAR_3,
        VAR_4, FUNC_2(1), (void *)1);
    VAR_10 = FUNC_8();
    if (FUNC_5(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_3(1, "%s", VAR_7);


    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_1 | VAR_3,
        VAR_4, FUNC_1(1), (void *)2);
    if (FUNC_5(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_3(1, "%s", VAR_7);


    VAR_8.flags |= VAR_2;
    VAR_8.fflags &= ~VAR_4;
    VAR_8.data = 1;
    FUNC_6(&VAR_8, FUNC_7(VAR_5));
    VAR_9 = FUNC_8() - VAR_10;





    FUNC_9("timer expired after %ld us\n", VAR_9);
    if (VAR_9 < FUNC_1(1))
        FUNC_4(1, "early timer expiration: %ld us", VAR_9);
    if (VAR_9 > FUNC_2(1))
        FUNC_4(1, "late timer expiration: %ld us", VAR_9);

    FUNC_10();
}
