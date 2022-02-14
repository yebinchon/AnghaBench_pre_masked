
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int fflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct kevent*,int,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct kevent*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void)
{
    const char *VAR_8 = "kevent(EVFILT_USER, EV_DISABLE and EV_ENABLE)";
    struct kevent VAR_9;

    FUNC_4(VAR_8);

    FUNC_5();

    FUNC_0(VAR_7, &VAR_9, 1, VAR_0, VAR_1, 0, 0, ((void*)0));
    FUNC_0(VAR_7, &VAR_9, 1, VAR_0, VAR_3, 0, 0, ((void*)0));


    FUNC_0(VAR_7, &VAR_9, 1, VAR_0, 0, VAR_6, 0, ((void*)0));
    FUNC_5();

    FUNC_0(VAR_7, &VAR_9, 1, VAR_0, VAR_4, 0, 0, ((void*)0));
    FUNC_0(VAR_7, &VAR_9, 1, VAR_0, 0, VAR_6, 0, ((void*)0));

    VAR_9.flags = VAR_2;
    VAR_9.fflags &= ~VAR_5;
    VAR_9.fflags &= ~VAR_6;
    FUNC_1(&VAR_9, FUNC_2(VAR_7));

    FUNC_3();
}
