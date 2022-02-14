
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int int64_t ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static int64_t FUNC_1(void)
{
    struct timeval VAR_0;
    FUNC_0(&VAR_0, ((void*)0));
    return (int64_t)VAR_0.tv_sec * 1000000 + VAR_0.tv_usec;
}
