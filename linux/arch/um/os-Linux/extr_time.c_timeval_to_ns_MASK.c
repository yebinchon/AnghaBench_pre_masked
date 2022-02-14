
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long long tv_usec; scalar_t__ tv_sec; } ;


 long long VAR_0 ;
 long long VAR_1 ;

__attribute__((used)) static inline long long FUNC_0(const struct timeval *VAR_2)
{
 return ((long long) VAR_2->tv_sec * VAR_0) +
  VAR_2->tv_usec * VAR_1;
}
