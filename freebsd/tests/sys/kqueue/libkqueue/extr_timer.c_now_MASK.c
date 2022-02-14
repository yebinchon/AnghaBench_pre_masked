
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; int tv_sec; } ;


 long FUNC_0 (int ) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static long
FUNC_2(void)
{
    struct timeval VAR_0;

    FUNC_1(&VAR_0, ((void*)0));
    return FUNC_0(VAR_0.tv_sec) + VAR_0.tv_usec;
}
