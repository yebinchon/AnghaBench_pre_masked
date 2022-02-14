
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct evhttp_connection {struct timeval initial_retry_timeout; } ;


 int FUNC_0 (struct timeval*) ;

void
FUNC_1(struct evhttp_connection *VAR_0,
    const struct timeval *VAR_1)
{
 if (VAR_1) {
  VAR_0->initial_retry_timeout = *VAR_1;
 } else {
  FUNC_0(&VAR_0->initial_retry_timeout);
  VAR_0->initial_retry_timeout.tv_sec = 2;
 }
}
