
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int64_t
FUNC_0(struct timeval *VAR_0, struct timeval *VAR_1)
{
 int64_t VAR_2, VAR_3;
 VAR_2 = VAR_1->tv_sec * 1000000 + VAR_1->tv_usec;
 VAR_3 = VAR_0->tv_sec * 1000000 + VAR_0->tv_usec;
 return (VAR_2 - VAR_3);
}
