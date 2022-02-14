
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_4 (struct kevent*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;

void
FUNC_9(void)
{
    const char *VAR_6 = "kevent(EVFILT_READ, EV_EOF)";
    struct kevent VAR_7;

    FUNC_7(VAR_6);


    FUNC_0(&VAR_7, VAR_5[0], VAR_0, VAR_1, 0, 0, &VAR_5[0]);
    if (FUNC_3(VAR_4, &VAR_7, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_2(1, "%s", VAR_6);
    FUNC_8();

    if (FUNC_1(VAR_5[1]) < 0)
        FUNC_2(1, "close(2)");

    VAR_7.flags |= VAR_3;
    FUNC_4(&VAR_7, FUNC_5(VAR_4));


    FUNC_0(&VAR_7, VAR_5[0], VAR_0, VAR_2, 0, 0, &VAR_5[0]);
    if (FUNC_3(VAR_4, &VAR_7, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_2(1, "%s", VAR_6);

    FUNC_6();
}
