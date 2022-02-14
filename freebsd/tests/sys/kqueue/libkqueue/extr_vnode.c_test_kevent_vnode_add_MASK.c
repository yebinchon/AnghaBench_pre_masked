
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kevent*,scalar_t__,int ,int ,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (int ,struct kevent*,int,int *,int ,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ VAR_8 ;

void
FUNC_8(void)
{
    const char *VAR_9 = "kevent(EVFILT_VNODE, EV_ADD)";
    const char *VAR_10 = "./kqueue-test.tmp";
    struct kevent VAR_11;

    FUNC_7(VAR_9);

    FUNC_6("touch ./kqueue-test.tmp");
    VAR_8 = FUNC_3(VAR_10, VAR_6);
    if (VAR_8 < 0)
        FUNC_1(1, "open of %s", VAR_10);
    else
        FUNC_4("vnode_fd = %d\n", VAR_8);

    FUNC_0(&VAR_11, VAR_8, VAR_0, VAR_1,
            VAR_5 | VAR_2 | VAR_4 | VAR_3, 0, ((void*)0));
    if (FUNC_2(VAR_7, &VAR_11, 1, ((void*)0), 0, ((void*)0)) < 0)
        FUNC_1(1, "%s", VAR_9);

    FUNC_5();
}
