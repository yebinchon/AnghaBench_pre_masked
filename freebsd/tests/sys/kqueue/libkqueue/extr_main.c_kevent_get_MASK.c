
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;


 struct kevent* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int *,int ,struct kevent*,int,int *) ;

struct kevent *
FUNC_3(int VAR_0)
{
    int VAR_1;
    struct kevent *VAR_2;

    if ((VAR_2 = FUNC_0(1, sizeof(*VAR_2))) == ((void*)0))
        FUNC_1(1, "out of memory");

    VAR_1 = FUNC_2(VAR_0, ((void*)0), 0, VAR_2, 1, ((void*)0));
    if (VAR_1 < 1)
        FUNC_1(1, "kevent(2)");

    return (VAR_2);
}
