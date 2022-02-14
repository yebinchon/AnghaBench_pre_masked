
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;

void
FUNC_6(void)
{
    const char *VAR_3 = "kevent(EVFILT_TIMER, EV_DELETE)";
    struct kevent VAR_4;

    FUNC_4(VAR_3);

    FUNC_0(&VAR_4, 1, VAR_0, VAR_1, 0, 0, ((void*)0));
    if (FUNC_2(VAR_2, &VAR_4, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_3);

    FUNC_5();

    FUNC_3();
}
