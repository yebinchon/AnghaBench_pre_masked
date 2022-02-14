
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evwatch_prepare_cb_info {struct timeval* timeout; } ;



int
FUNC_0(const struct evwatch_prepare_cb_info *VAR_0, struct timeval *VAR_1)
{
 if (VAR_0->timeout) {
  *VAR_1 = *(VAR_0->timeout);
  return 1;
 }
 return 0;
}
