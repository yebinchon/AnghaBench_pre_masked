
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int ptls_get_time_t ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t FUNC_1(ptls_get_time_t *VAR_0)
{
    struct timeval VAR_1;
    FUNC_0(&VAR_1, ((void*)0));
    return (uint64_t)VAR_1.tv_sec * 1000 + VAR_1.tv_usec / 1000;
}
