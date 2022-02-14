
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evutil_monotonic_timer {int dummy; } ;


 int FUNC_0 (struct evutil_monotonic_timer*,struct timeval*) ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;

int
FUNC_2(struct evutil_monotonic_timer *VAR_0,
    struct timeval *VAR_1)
{
 if (FUNC_1(VAR_1, ((void*)0)) < 0)
  return -1;
 FUNC_0(VAR_0, VAR_1);
 return 0;

}
