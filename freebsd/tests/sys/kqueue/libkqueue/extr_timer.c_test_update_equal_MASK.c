
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int data; int fflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,long,int *) ;
 long FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,long) ;
 scalar_t__ FUNC_4 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_5 (struct kevent*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 long FUNC_7 () ;
 int FUNC_8 (char*,long) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_13(void)
{
    const char *VAR_7 = "kevent(EVFILT_TIMER (UPDATE=), EV_ADD | EV_ONESHOT)";
    struct kevent VAR_8;
    long VAR_9;
    long VAR_10;

    FUNC_10(VAR_7);

    FUNC_11();


    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_1 | VAR_3,
        VAR_4, FUNC_1(1), ((void*)0));
    if (FUNC_4(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_2(1, "%s", VAR_7);


    FUNC_12(600);


    VAR_10 = FUNC_7();
    if (FUNC_4(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_2(1, "%s", VAR_7);


    VAR_8.flags |= VAR_2;
    VAR_8.fflags &= ~VAR_4;
    VAR_8.data = 1;
    FUNC_5(&VAR_8, FUNC_6(VAR_5));
    VAR_9 = FUNC_7() - VAR_10;





    FUNC_8("timer expired after %ld us\n", VAR_9);
    if (VAR_9 < FUNC_1(1))
        FUNC_3(1, "early timer expiration: %ld us", VAR_9);

    FUNC_9();
}
