
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timeval*) ;

void
FUNC_1(struct timeval *VAR_0, struct timeval *VAR_1)
{
 VAR_0->tv_sec += VAR_1->tv_sec;
 VAR_0->tv_usec += VAR_1->tv_usec;
 FUNC_0(VAR_0);
}
