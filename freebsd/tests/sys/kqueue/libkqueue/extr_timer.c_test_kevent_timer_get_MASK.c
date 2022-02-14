
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int data; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int,int *) ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;

void
FUNC_7(void)
{
    const char *VAR_5 = "kevent(EVFILT_TIMER, wait)";
    struct kevent VAR_6;

    FUNC_6(VAR_5);

    FUNC_0(&VAR_6, 1, VAR_0, VAR_1, 0, 1000, ((void*)0));
    if (FUNC_2(VAR_4, &VAR_6, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_5);

    VAR_6.flags |= VAR_2;
    VAR_6.data = 1;
    FUNC_3(&VAR_6, FUNC_4(VAR_4));

    FUNC_0(&VAR_6, 1, VAR_0, VAR_3, 0, 0, ((void*)0));
    if (FUNC_2(VAR_4, &VAR_6, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_5);

    FUNC_5();
}
