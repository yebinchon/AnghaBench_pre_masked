
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; int fflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct kevent*,int,int ,int,int ,int ,int *) ;
 int FUNC_1 (struct kevent*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
    const char *VAR_6 = "kevent(EVFILT_USER, EV_ONESHOT)";
    struct kevent VAR_7;

    FUNC_5(VAR_6);

    FUNC_6();

    FUNC_0(VAR_5, &VAR_7, 2, VAR_0, VAR_1 | VAR_2, 0, 0, ((void*)0));

    FUNC_3("  -- event 1");
    FUNC_0(VAR_5, &VAR_7, 2, VAR_0, 0, VAR_4, 0, ((void*)0));

    VAR_7.flags = VAR_2;
    VAR_7.fflags &= ~VAR_3;
    VAR_7.fflags &= ~VAR_4;
    FUNC_1(&VAR_7, FUNC_2(VAR_5));

    FUNC_6();

    FUNC_4();
}
