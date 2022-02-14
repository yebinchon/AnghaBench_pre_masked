
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int quicly_now_t ;
typedef int int64_t ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static int64_t FUNC_1(quicly_now_t *VAR_0)
{
    struct timeval VAR_1;
    FUNC_0(&VAR_1, ((void*)0));
    return (int64_t)VAR_1.tv_sec * 1000 + VAR_1.tv_usec / 1000;
}
