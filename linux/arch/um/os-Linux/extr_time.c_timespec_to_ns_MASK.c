
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_nsec; scalar_t__ tv_sec; } ;


 long long VAR_0 ;

__attribute__((used)) static inline long long FUNC_0(const struct timespec *VAR_1)
{
 return ((long long) VAR_1->tv_sec * VAR_0) + VAR_1->tv_nsec;
}
