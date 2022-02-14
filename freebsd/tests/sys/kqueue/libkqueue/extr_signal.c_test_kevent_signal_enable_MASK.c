
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; int data; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_4 (struct kevent*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*) ;

void
FUNC_12(void)
{
    const char *VAR_8 = "kevent(EVFILT_SIGNAL, EV_ENABLE)";
    struct kevent VAR_9;

    FUNC_11(VAR_8);

    FUNC_0(&VAR_9, VAR_5, VAR_0, VAR_4, 0, 0, ((void*)0));
    if (FUNC_3(VAR_7, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);


    sigset_t VAR_10;
    FUNC_8(&VAR_10);
    FUNC_7(&VAR_10, VAR_5);
    if (FUNC_9(VAR_6, &VAR_10, ((void*)0)) == -1)
        FUNC_1(1, "sigprocmask");
    if (FUNC_6(FUNC_2(), VAR_5) < 0)
        FUNC_1(1, "kill");

    VAR_9.flags = VAR_1 | VAR_2;



    VAR_9.data = 2;

    FUNC_4(&VAR_9, FUNC_5(VAR_7));


    VAR_9.flags = VAR_3;
    if (FUNC_3(VAR_7, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);

    FUNC_10();
}
