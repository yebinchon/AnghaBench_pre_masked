
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {scalar_t__ ident; scalar_t__ filter; scalar_t__ fflags; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,scalar_t__,scalar_t__,int,scalar_t__,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct kevent*,int,struct kevent*,int,int *) ;
 int VAR_4 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ VAR_5 ;

void
FUNC_6(void)
{
    const char *VAR_6 = "kevent(EVFILT_VNODE, NOTE_ATTRIB)";
    struct kevent VAR_7;
    int VAR_8;

    FUNC_5(VAR_6);

    FUNC_0(&VAR_7, VAR_5, VAR_0, VAR_1 | VAR_2, VAR_3, 0, ((void*)0));
    if (FUNC_2(VAR_4, &VAR_7, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_6);

    if (FUNC_4("touch ./kqueue-test.tmp") < 0)
        FUNC_1(1, "system");

    VAR_8 = FUNC_2(VAR_4, ((void*)0), 0, &VAR_7, 1, ((void*)0));
    if (VAR_8 < 1)
        FUNC_1(1, "%s", VAR_6);
    if (VAR_7.ident != VAR_5 ||
            VAR_7.filter != VAR_0 ||
            VAR_7.fflags != VAR_3)
        FUNC_1(1, "%s - incorrect event (sig=%u; filt=%d; flags=%d)",
                VAR_6, (unsigned int)VAR_7.ident, VAR_7.filter, VAR_7.flags);

    FUNC_3();
}
