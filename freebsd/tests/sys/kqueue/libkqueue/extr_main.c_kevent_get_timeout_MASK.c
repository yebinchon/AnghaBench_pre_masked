
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_0; int member_1; } ;
struct kevent {int dummy; } ;


 struct kevent* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct kevent*) ;
 int FUNC_3 (int,int *,int ,struct kevent*,int,struct timespec*) ;

struct kevent *
FUNC_4(int VAR_0, int VAR_1)
{
    int VAR_2;
    struct kevent *VAR_3;
    struct timespec VAR_4 = {VAR_1, 0};

    if ((VAR_3 = FUNC_0(1, sizeof(*VAR_3))) == ((void*)0))
        FUNC_1(1, "out of memory");

    VAR_2 = FUNC_3(VAR_0, ((void*)0), 0, VAR_3, 1, &VAR_4);
    if (VAR_2 < 0) {
        FUNC_1(1, "kevent(2)");
    } else if (VAR_2 == 0) {
        FUNC_2(VAR_3);
        VAR_3 = ((void*)0);
    }

    return (VAR_3);
}
