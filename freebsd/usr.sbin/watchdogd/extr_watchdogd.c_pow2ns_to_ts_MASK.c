
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct timespec {unsigned long long tv_sec; unsigned long long tv_nsec; } ;



__attribute__((used)) static void
FUNC_0(int VAR_0, struct timespec *VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = 1ULL << VAR_0;
 VAR_1->tv_sec = VAR_2 / 1000000000ULL;
 VAR_1->tv_nsec = VAR_2 % 1000000000ULL;
}
