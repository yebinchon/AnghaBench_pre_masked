
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
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int ,int *) ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_3 (struct kevent*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int FUNC_9 () ;

void
FUNC_10(void)
{
    const char *VAR_7 = "kevent(EVFILT_READ, EV_DISABLE)";
    struct kevent VAR_8;

    FUNC_8(VAR_7);





    FUNC_6();


    FUNC_0(&VAR_8, VAR_6[0], VAR_0, VAR_1 | VAR_3, 0, 0, &VAR_6[0]);
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_7);

    FUNC_9();


    VAR_8.flags = VAR_4;
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_7);
    VAR_8.flags = VAR_1;
    VAR_8.data = 1;
    FUNC_3(&VAR_8, FUNC_4(VAR_5));

    FUNC_5();

    VAR_8.flags = VAR_2;
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_7);

    FUNC_7();
}
