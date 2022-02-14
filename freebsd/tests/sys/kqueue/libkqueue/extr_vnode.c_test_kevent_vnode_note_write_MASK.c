
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int fflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 int VAR_7 ;

void
FUNC_8(void)
{
    const char *VAR_8 = "kevent(EVFILT_VNODE, NOTE_WRITE)";
    struct kevent VAR_9;

    FUNC_7(VAR_8);

    FUNC_0(&VAR_9, VAR_7, VAR_0, VAR_1 | VAR_3, VAR_5, 0, ((void*)0));
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);

    if (FUNC_6("echo hello >> ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");



    VAR_9.flags &= ~VAR_2;
    VAR_9.fflags |= VAR_4;
    FUNC_3(&VAR_9, FUNC_4(VAR_6));

    FUNC_5();
}
