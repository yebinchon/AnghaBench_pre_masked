
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {scalar_t__ ident; scalar_t__ filter; scalar_t__ fflags; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kevent*,scalar_t__,scalar_t__,int,scalar_t__,int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct kevent*,int,struct kevent*,int,int *) ;
 int VAR_6 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;

void
FUNC_7(void)
{
    const char *VAR_8 = "kevent(EVFILT_VNODE, EV_DISABLE and EV_ENABLE)";
    struct kevent VAR_9;
    int VAR_10;

    FUNC_5(VAR_8);

    FUNC_6();


    FUNC_0(&VAR_9, VAR_7, VAR_0, VAR_1 | VAR_4, VAR_5, 0, ((void*)0));
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);
    VAR_9.flags = VAR_2;
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);


    if (FUNC_4("touch ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");
    FUNC_6();


    VAR_9.flags = VAR_3;
    if (FUNC_2(VAR_6, &VAR_9, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_8);
    if (FUNC_4("touch ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");
    VAR_10 = FUNC_2(VAR_6, ((void*)0), 0, &VAR_9, 1, ((void*)0));
    if (VAR_10 < 1)
        FUNC_1(1, "%s", VAR_8);
    if (VAR_9.ident != VAR_7 ||
            VAR_9.filter != VAR_0 ||
            VAR_9.fflags != VAR_5)
        FUNC_1(1, "%s - incorrect event (sig=%u; filt=%d; flags=%d)",
                VAR_8, (unsigned int)VAR_9.ident, VAR_9.filter, VAR_9.flags);

    FUNC_3();
}
