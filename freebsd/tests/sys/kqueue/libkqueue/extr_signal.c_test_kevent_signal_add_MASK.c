
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;

void
FUNC_5(void)
{
    const char *VAR_4 = "kevent(EVFILT_SIGNAL, EV_ADD)";
    struct kevent VAR_5;

    FUNC_4(VAR_4);

    FUNC_0(&VAR_5, VAR_2, VAR_0, VAR_1, 0, 0, ((void*)0));
    if (FUNC_2(VAR_3, &VAR_5, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_4);

    FUNC_3();
}
