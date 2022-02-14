
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct kevent*,int,int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*) ;
 int FUNC_10 () ;

void
FUNC_11(void)
{
    const char *VAR_5 = "kevent(EVFILT_SIGNAL, EV_DISABLE)";
    struct kevent VAR_6;

    FUNC_9(VAR_5);

    FUNC_0(&VAR_6, VAR_2, VAR_0, VAR_1, 0, 0, ((void*)0));
    if (FUNC_3(VAR_4, &VAR_6, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_5);


    sigset_t VAR_7;
    FUNC_6(&VAR_7);
    FUNC_5(&VAR_7, VAR_2);
    if (FUNC_7(VAR_3, &VAR_7, ((void*)0)) == -1)
        FUNC_1(1, "sigprocmask");
    if (FUNC_4(FUNC_2(), VAR_2) < 0)
        FUNC_1(1, "kill");

    FUNC_10();

    FUNC_8();
}
