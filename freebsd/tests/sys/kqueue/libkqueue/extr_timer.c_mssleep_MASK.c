
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timespec*,int *) ;

void
FUNC_3(int VAR_0)
{
    struct timespec VAR_1 = {
        .tv_sec = 0,
        .tv_nsec = FUNC_1(FUNC_0(VAR_0)),
    };

    FUNC_2(&VAR_1, ((void*)0));
}
