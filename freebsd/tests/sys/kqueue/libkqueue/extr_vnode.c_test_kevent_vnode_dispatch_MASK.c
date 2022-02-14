
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {scalar_t__ ident; scalar_t__ filter; scalar_t__ fflags; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,scalar_t__,scalar_t__,int,scalar_t__,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct kevent*,int,struct kevent*,int,int *) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_6 ;

void
FUNC_8(void)
{
    const char *VAR_7 = "kevent(EVFILT_VNODE, EV_DISPATCH)";
    struct kevent VAR_8;
    int VAR_9;

    FUNC_6(VAR_7);

    FUNC_7();

    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_1 | VAR_3, VAR_4, 0, ((void*)0));
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_7);

    if (FUNC_5("touch ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");

    VAR_9 = FUNC_2(VAR_5, ((void*)0), 0, &VAR_8, 1, ((void*)0));
    if (VAR_9 < 1)
        FUNC_1(1, "%s", VAR_7);
    if (VAR_8.ident != VAR_6 ||
            VAR_8.filter != VAR_0 ||
            VAR_8.fflags != VAR_4)
        FUNC_1(1, "%s - incorrect event (sig=%u; filt=%d; flags=%d)",
                VAR_7, (unsigned int)VAR_8.ident, VAR_8.filter, VAR_8.flags);


    FUNC_3("-- checking that watch is disabled");
    if (FUNC_5("touch ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");
    FUNC_7();


    FUNC_0(&VAR_8, VAR_6, VAR_0, VAR_2, VAR_4, 0, ((void*)0));
    if (FUNC_2(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "remove watch failed: %s", VAR_7);

    FUNC_4();
}
