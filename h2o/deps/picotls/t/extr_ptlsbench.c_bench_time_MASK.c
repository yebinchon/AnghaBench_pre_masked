
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t FUNC_2()
{
    struct timeval VAR_1;
    FUNC_1(&VAR_1, ((void*)0));
    return (uint64_t)VAR_1.tv_sec * 1000000 + VAR_1.tv_usec;
}
