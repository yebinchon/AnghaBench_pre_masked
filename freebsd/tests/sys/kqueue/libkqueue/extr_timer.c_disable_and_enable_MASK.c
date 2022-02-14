
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int,int *) ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_8(void)
{
    const char *VAR_8 = "kevent(EVFILT_TIMER, EV_DISABLE and EV_ENABLE)";
    struct kevent VAR_9;

    FUNC_6(VAR_8);

    FUNC_7();


    FUNC_0(&VAR_9, VAR_7, VAR_0, VAR_1 | VAR_5, 0, 2000,((void*)0));
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);
    VAR_9.flags = VAR_3;
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);
    FUNC_7();


    VAR_9.flags = VAR_4;
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);

    VAR_9.flags = VAR_1 | VAR_2 | VAR_5;
    VAR_9.data = 1;
    FUNC_3(&VAR_9, FUNC_4(VAR_6));

    FUNC_5();
}
