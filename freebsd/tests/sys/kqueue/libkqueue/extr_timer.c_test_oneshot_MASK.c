
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int,int *) ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(void)
{
    const char *VAR_6 = "kevent(EVFILT_TIMER, EV_ONESHOT)";
    struct kevent VAR_7;

    FUNC_7(VAR_6);

    FUNC_8();

    FUNC_0(&VAR_7, VAR_5, VAR_0, VAR_1 | VAR_3, 0, 500,((void*)0));
    if (FUNC_2(VAR_4, &VAR_7, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_6);


    VAR_7.flags = VAR_1 | VAR_2 | VAR_3;
    VAR_7.data = 1;
    FUNC_3(&VAR_7, FUNC_4(VAR_4));


    FUNC_5(3);
    FUNC_8();


    FUNC_6();
}
