
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (char*,long,int ) ;

__attribute__((used)) static void
FUNC_1(struct timeval *VAR_0)
{

 FUNC_0("{%ld, %ld}", (long)VAR_0->tv_sec, VAR_0->tv_usec);
}
