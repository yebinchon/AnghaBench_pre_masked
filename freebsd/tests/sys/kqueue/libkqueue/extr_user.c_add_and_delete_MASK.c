
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct kevent*,int,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
    const char *VAR_4 = "kevent(EVFILT_USER, EV_ADD and EV_DELETE)";
    struct kevent VAR_5;

    FUNC_2(VAR_4);

    FUNC_0(VAR_3, &VAR_5, 1, VAR_0, VAR_1, 0, 0, ((void*)0));
    FUNC_3();

    FUNC_0(VAR_3, &VAR_5, 1, VAR_0, VAR_2, 0, 0, ((void*)0));
    FUNC_3();

    FUNC_1();
}
