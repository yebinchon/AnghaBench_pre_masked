
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evhttp_connection {scalar_t__ state; int timeout_connect; int bufev; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,struct timeval const*,int) ;

void FUNC_2(struct evhttp_connection *VAR_2,
    const struct timeval *VAR_3)
{
 VAR_2->flags |= VAR_1;
 FUNC_1(&VAR_2->timeout_connect, VAR_3, -1);
 if (VAR_2->state == VAR_0)
  FUNC_0(VAR_2->bufev,
      &VAR_2->timeout_connect, &VAR_2->timeout_connect);
}
